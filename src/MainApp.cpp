#include "targetver.h"

#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

#include "MainApp.h"
#include "Headers.h"
#include "ui/UIMainFrame.h"

wxIMPLEMENT_APP(MainApp);

bool MainApp::OnInit()
{
    this->m_Config.FileSystem = std::make_unique<worker::Win32FileSystem>();

    this->m_Config.m_Settings.Init(this->m_Config.FileSystem.get());

    this->m_Config.Log = std::make_unique<util::FileLog>(this->m_Config.m_Settings.szLogFile);
    this->m_Config.Log->Open();

    std::wstring szConfigMode = this->m_Config.m_Settings.IsPortable(this->m_Config.FileSystem.get()) ? L"Portable" : L"Roaming";
    this->m_Config.Log->Log(L"[Info] Program started: " + szConfigMode);

    this->LoadConfig();

    try
    {
        auto* frame = new UIMainFrame(nullptr);
        frame->m_Config = &this->m_Config;
        frame->Show(true);
    }
    catch (...)
    {
        this->m_Config.Log->Log(L"[Error] Main frame exception.");
    }

    this->m_Config.Log->Log(L"[Info] Program exited: " + szConfigMode);
    this->m_Config.Log->Close();

    return true;
}

int MainApp::OnExit()
{
    this->SaveConfig();

    return wxApp::OnExit();
}

void MainApp::LoadConfig()
{
    try
    {
        this->m_Config.nLangId = -1;

        this->m_Config.LoadTools(this->m_Config.m_Settings.szToolsPath);
        this->m_Config.LoadFormats(this->m_Config.m_Settings.szFormatsPath);

        if (this->m_Config.LoadOutputs(this->m_Config.m_Settings.szOutputsFile) == false)
            this->m_Config.m_Outputs = config::m_OutpuPathsPresets;

        if (this->m_Config.LoadOptions(this->m_Config.m_Settings.szOptionsFile) == false)
            this->m_Config.m_Options.Defaults();

        this->m_Config.LoadItems(this->m_Config.m_Settings.szItemsFile);

        this->m_Config.LoadLanguages(this->m_Config.m_Settings.szSettingsPath);
        this->m_Config.LoadLanguages(this->m_Config.m_Settings.szLanguagesPath);
    }
    catch (...)
    {
        this->m_Config.Log->Log(L"[Error] Failed to load config.");
    }
}

void MainApp::SaveConfig()
{
    try
    {
        this->m_Config.SaveTools(this->m_Config.m_Settings.szToolsPath);
        this->m_Config.SaveFormats(this->m_Config.m_Settings.szFormatsPath);
        this->m_Config.SaveOutputs(this->m_Config.m_Settings.szOutputsFile);

        this->m_Config.SaveOptions(this->m_Config.m_Settings.szOptionsFile);

        config::CItem::SetIds(this->m_Config.m_Items);
        this->m_Config.SaveItems(this->m_Config.m_Settings.szItemsFile);
    }
    catch (...)
    {
        this->m_Config.Log->Log(L"[Error] Failed to save config.");
    }
}
