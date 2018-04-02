#include <wx/wxprec.h>
#include "UIAboutDialog.h"

UIAboutDialog::UIAboutDialog(wxWindow* parent)
    :
    AboutDialog(parent)
{
    m_buttonOK->SetFocus();
}

void UIAboutDialog::AboutDialogOnInitDialog(wxInitDialogEvent& event)
{
    m_hyperlinkApplicationWebsite->SetLabel(L"https://github.com/wieslawsoltes/BatchEncoder");
    m_hyperlinkApplicationWebsite->SetURL(L"https://github.com/wieslawsoltes/BatchEncoder");

    m_hyperlinkApplicationEmail->SetLabel(L"wieslaw.soltes@gmail.com");
    m_hyperlinkApplicationEmail->SetURL(L"mailto:wieslaw.soltes@gmail.com");
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
