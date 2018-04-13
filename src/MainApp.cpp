#include "targetver.h"

#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

#include "MainApp.h"
#include "Headers.h"
#include "ui/UIMainFrame.h"

bool MainApp::OnInit()
{
    UIMainFrame *frame = new UIMainFrame(nullptr);
    frame->Show(true);
    return true;
}

int MainApp::OnExit()
{
    return wxApp::OnExit();
}

wxIMPLEMENT_APP(MainApp);
