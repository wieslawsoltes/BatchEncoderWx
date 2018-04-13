///////////////////////////////////////////////////////////////////////////////
// USINGS
///////////////////////////////////////////////////////////////////////////////

using System;
using System.Collections.Generic;
using System.Collections.Concurrent;
using System.Linq;
using System.Threading.Tasks;

///////////////////////////////////////////////////////////////////////////////
// ARGUMENTS
///////////////////////////////////////////////////////////////////////////////

var target = Argument("target", "Default");

///////////////////////////////////////////////////////////////////////////////
// SETTINGS
///////////////////////////////////////////////////////////////////////////////

var platforms = new string[] { "Win32" }.ToList();
var configurations = new string[] { "Release" }.ToList();
var tests = new string[] { }.ToList();
var solution = "./BatchEncoder.sln";
var wx = "./wx/build/msw/wx_vc15.sln";

var patterns = new string[] { 
    "./src/**/*.vcxproj", 
    "./wx/build/msw/*.vcxproj" 
}.ToList();
string MDd = "<RuntimeLibrary>MultiThreadedDebugDLL</RuntimeLibrary>";
string MTd = "<RuntimeLibrary>MultiThreadedDebug</RuntimeLibrary>";
string MD = "<RuntimeLibrary>MultiThreadedDLL</RuntimeLibrary>";
string MT = "<RuntimeLibrary>MultiThreaded</RuntimeLibrary>";

///////////////////////////////////////////////////////////////////////////////
// HELPERS
///////////////////////////////////////////////////////////////////////////////

class Patch
{
    public string FromName { get; set; }
    public string ToName { get; set; }
    public string FromText { get; set; }
    public string ToText { get; set; }
    public Patch(string fromName, string toName, string fromText, string toText)
    {
        FromName = fromName;
        ToName = toName;
        FromText = fromText;
        ToText = toText;
    }
}

static class Helpers
{
    public static string FileReadText(ICakeContext context, FilePath file)
    {
        var filename = file.MakeAbsolute(context.Environment).FullPath;
        return System.IO.File.ReadAllText(filename);
    }
    public static void FileWriteText(ICakeContext context, FilePath file, string text, bool bom)
    {
        var filename = file.MakeAbsolute(context.Environment).FullPath;
        System.IO.File.WriteAllText(filename, text, new System.Text.UTF8Encoding(bom));
    }
    public static FilePath[] ReplaceTextInFiles(ICakeContext context, string pattern, string findText, string replaceText, bool bom)
    {
        var files = context.Globber.GetFiles(pattern);
        var results = new ConcurrentBag<FilePath>();
        Parallel.ForEach(files, f => {
            var contents = FileReadText(context, f);
            if (contents.Contains(findText)) {
                contents = contents.Replace(findText, replaceText);
                FileWriteText(context, f, contents, bom);
                results.Add(f);
            }
        });
        return results.ToArray();
    }
}

///////////////////////////////////////////////////////////////////////////////
// SETUP
///////////////////////////////////////////////////////////////////////////////

Setup(context =>
{
    context.Log.Verbosity = Verbosity.Normal;
});

///////////////////////////////////////////////////////////////////////////////
// TEARDOWN
///////////////////////////////////////////////////////////////////////////////

Teardown(context =>
{
    Information("Finished running tasks.");
});

///////////////////////////////////////////////////////////////////////////////
// ACTIONS
///////////////////////////////////////////////////////////////////////////////

var buildSolutionAction = new Action<string,string,string> ((solution, configuration, platform) =>
{
    Information("Building: {0}, {1} / {2}", solution, configuration, platform);
    MSBuild(solution, settings => {
        settings.SetConfiguration(configuration);
        settings.WithProperty("Platform", "\"" + platform + "\"");
        settings.SetVerbosity(Verbosity.Minimal); });
});

///////////////////////////////////////////////////////////////////////////////
// TASKS
///////////////////////////////////////////////////////////////////////////////

Task("Clean")
    .Does(() =>
{
    CleanDirectories("./**/bin/**");
    CleanDirectories("./**/obj/**");
});

Task("Build-Dependencies")
    .IsDependentOn("Clean")
    .IsDependentOn("Patch-RuntimeLibrary")
    .Does(() =>
{
    configurations.ForEach(c => 
    {
        platforms.ForEach(p => 
        {
            buildSolutionAction(wx, c, p);
        });
    });
});

Task("Build")
    .IsDependentOn("Build-Dependencies")
    .Does(() =>
{
    configurations.ForEach(c => 
    {
        platforms.ForEach(p => 
        {
            buildSolutionAction(solution, c, p);
        });
    });
});

Task("Patch-RuntimeLibrary")
    .Does(context =>
{
    var patches = new Patch[] {
        new Patch("MDd", "MTd", MDd, MTd),
        new Patch("MD", "MT", MD, MT),
    }.ToList();
    Information("Patching runtime library:");
    patterns.ForEach(pattern => 
    {
        patches.ForEach(patch => 
        {
            Information("Patching from: {0} to: {1}", patch.FromName, patch.ToName);
            FilePath[] files = Helpers.ReplaceTextInFiles(context, pattern, patch.FromText, patch.ToText, false);
            foreach (var file in files) {
                Information("Project: {0}", file);
            }
        });
    });
});

Task("Restore-RuntimeLibrary")
    .Does(context =>
{
    var patches = new Patch[] {
        new Patch("MTd", "MDd", MTd, MDd),
        new Patch("MT", "MD", MT, MD),
    }.ToList();
    Information("Restoring runtime library:");
    patterns.ForEach(pattern => 
    {
        patches.ForEach(patch => 
        {
            Information("Restoring from: {0} to: {1}", patch.FromName, patch.ToName);
            FilePath[] files = Helpers.ReplaceTextInFiles(context, pattern, patch.FromText, patch.ToText, false);
            foreach (var file in files) {
                Information("Project: {0}", file);
            }
        });
    });
});

///////////////////////////////////////////////////////////////////////////////
// TARGETS
///////////////////////////////////////////////////////////////////////////////

Task("Default")
  .IsDependentOn("Build");

///////////////////////////////////////////////////////////////////////////////
// EXECUTE
///////////////////////////////////////////////////////////////////////////////

RunTarget(target);
