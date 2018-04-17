#include <wx/wxprec.h>
#include "UIAboutDialog.h"

UIAboutDialog::UIAboutDialog(wxWindow* parent)
    :
    AboutDialog(parent)
{
}

void UIAboutDialog::AboutDialogOnInitDialog(wxInitDialogEvent& event)
{
    this->Bind(wxEVT_CHAR_HOOK, &UIAboutDialog::OnCharHook, this);

    m_staticApplicationName->SetLabel(_(VER_PRODUCTNAME_STR " v" VER_FILE_VERSION_SHORT_STR " " VER_COPYRIGHT_STR));

    m_hyperlinkApplicationWebsite->SetLabel(L"https://github.com/wieslawsoltes/BatchEncoder");
    m_hyperlinkApplicationWebsite->SetURL(L"https://github.com/wieslawsoltes/BatchEncoder");

    m_hyperlinkApplicationEmail->SetLabel(L"wieslaw.soltes@gmail.com");
    m_hyperlinkApplicationEmail->SetURL(L"mailto:wieslaw.soltes@gmail.com");

    m_buttonOK->SetFocus();

    wxPersistentRegisterAndRestore(this, L"AboutDialog");
}

void UIAboutDialog::m_hyperlinkApplicationWebsiteOnHyperlink(wxHyperlinkEvent& event)
{
    wxLaunchDefaultBrowser(m_hyperlinkApplicationWebsite->GetURL());
}

void UIAboutDialog::m_hyperlinkApplicationEmailOnHyperlink(wxHyperlinkEvent& event)
{
    wxLaunchDefaultApplication(m_hyperlinkApplicationEmail->GetURL());
}

void UIAboutDialog::m_buttonOKOnButtonClick(wxCommandEvent& event)
{
    this->SetReturnCode(wxID_OK);
    this->Close();
}

void UIAboutDialog::OnCharHook(wxKeyEvent& event)
{
    if (event.GetKeyCode() == WXK_ESCAPE)
        EndModal(wxID_CANCEL);
    else if (event.GetKeyCode() == 87 && event.ControlDown())
        EndModal(wxID_OK);
    else
        event.Skip();
}
