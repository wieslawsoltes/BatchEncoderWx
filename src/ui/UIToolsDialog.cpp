#include <wx/wxprec.h>
#include "UIToolsDialog.h"

UIToolsDialog::UIToolsDialog(wxWindow* parent)
    :
    ToolsDialog(parent)
{
}

void UIToolsDialog::ToolsDialogOnInitDialog(wxInitDialogEvent& event)
{
    this->Bind(wxEVT_CHAR_HOOK, &UIToolsDialog::OnCharHook, this);

    for (int i = 0; i < 100; i++)
    {
        CTool item;
        m_Items.emplace_back(std::move(item));
    }

    m_Columns =
    {
        { 0, L"Name", 200 },
        { 1, L"Priority", 50 },
        { 2, L"Url", 200 },
        { 3, L"Status", 150 }
    };

    for (auto& column : m_Columns)
    {
        m_listCtrlItems->InsertColumn(column.nIndex, column.szHeading, wxLIST_FORMAT_LEFT, column.nWidth);
    }

    m_listCtrlItems->GetText = [&](int nItem, int nColumn) -> std::wstring
    {
        auto& item = m_Items[nItem];
        switch (nColumn)
        {
        case 0: return L"TEST0";
        case 1: return L"TEST1";
        case 2: return L"TEST2";
        case 3: return L"TEST3";
        }
        return L"??";
    };

    m_listCtrlItems->SetText = [&](int nItem, int nColumn, wxString& text)->void
    {
        auto& item = m_Items[nItem];
        switch (nColumn)
        {
        case 0: break;
        case 1: break;
        case 2: break;
        case 3: break;
        }
    };

    m_listCtrlItems->SetItemCount(m_Items.size());

    m_listCtrlItems->SetFocus();
}

void UIToolsDialog::m_buttonDownloadSelectedOnButtonClick(wxCommandEvent& event)
{
    // TODO: Implement m_buttonDownloadSelectedOnButtonClick
}

void UIToolsDialog::m_buttonSetSelectedPathsOnButtonClick(wxCommandEvent& event)
{
    // TODO: Implement m_buttonSetSelectedPathsOnButtonClick
}

void UIToolsDialog::m_buttonSetX86PathsOnButtonClick(wxCommandEvent& event)
{
    // TODO: Implement m_buttonSetX86PathsOnButtonClick
}

void UIToolsDialog::m_buttonSetX64PathsOnButtonClick(wxCommandEvent& event)
{
    // TODO: Implement m_buttonSetX64PathsOnButtonClick
}

void UIToolsDialog::m_menuItemItemsDuplicateOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemItemsDuplicateOnMenuSelection
}

void UIToolsDialog::m_menuItemItemsDeleteAllOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemItemsDeleteAllOnMenuSelection
}

void UIToolsDialog::m_menuItemItemsDeleteOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemItemsDeleteOnMenuSelection
}

void UIToolsDialog::m_menuItemItemsAddOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemItemsAddOnMenuSelection
}

void UIToolsDialog::m_buttonDuplicateOnButtonClick(wxCommandEvent& event)
{
    // TODO: Implement m_buttonDuplicateOnButtonClick
}

void UIToolsDialog::m_buttonDeleteAllOnButtonClick(wxCommandEvent& event)
{
    // TODO: Implement m_buttonDeleteAllOnButtonClick
}

void UIToolsDialog::m_buttonDeleteOnButtonClick(wxCommandEvent& event)
{
    // TODO: Implement m_buttonDeleteOnButtonClick
}

void UIToolsDialog::m_buttonAddOnButtonClick(wxCommandEvent& event)
{
    // TODO: Implement m_buttonAddOnButtonClick
}

void UIToolsDialog::m_textCtrlPropertyNameOnText(wxCommandEvent& event)
{
    // TODO: Implement m_textCtrlPropertyNameOnText
}

void UIToolsDialog::m_textCtrlPropertyPlatformOnText(wxCommandEvent& event)
{
    // TODO: Implement m_textCtrlPropertyPlatformOnText
}

void UIToolsDialog::m_spinCtrlPropertyPriorityOnSpinCtrl(wxSpinEvent& event)
{
    // TODO: Implement m_spinCtrlPropertyPriorityOnSpinCtrl
}

void UIToolsDialog::m_spinCtrlPropertyPriorityOnSpinCtrlText(wxCommandEvent& event)
{
    // TODO: Implement m_spinCtrlPropertyPriorityOnSpinCtrlText
}

void UIToolsDialog::m_textCtrlPropertyFormatsOnText(wxCommandEvent& event)
{
    // TODO: Implement m_textCtrlPropertyFormatsOnText
}

void UIToolsDialog::m_buttonPropertyFormatsEditOnButtonClick(wxCommandEvent& event)
{
    UIFormatsDialog dlg(this);
    dlg.ShowModal();
}

void UIToolsDialog::m_textCtrlPropertyUrlOnText(wxCommandEvent& event)
{
    // TODO: Implement m_textCtrlPropertyUrlOnText
}

void UIToolsDialog::m_textCtrlPropertyFileOnText(wxCommandEvent& event)
{
    // TODO: Implement m_textCtrlPropertyFileOnText
}

void UIToolsDialog::m_textCtrlPropertyExtractOnText(wxCommandEvent& event)
{
    // TODO: Implement m_textCtrlPropertyExtractOnText
}

void UIToolsDialog::m_textCtrlPropertyPathOnText(wxCommandEvent& event)
{
    // TODO: Implement m_textCtrlPropertyPathOnText
}

void UIToolsDialog::m_buttonImportOnButtonClick(wxCommandEvent& event)
{
    wxFileDialog *dlg = new wxFileDialog(
        this,
        _("Import tools"),
        wxEmptyString, wxEmptyString,
        _("Xml Files (*.xml)|*.xml|All Files (*.*)|*.*"),
        wxFD_OPEN | wxFD_FILE_MUST_EXIST | wxFD_MULTIPLE, wxDefaultPosition);
    if (dlg->ShowModal() == wxID_OK)
    {
        // dlg->GetPaths();
    }
}

void UIToolsDialog::m_buttonExportOnButtonClick(wxCommandEvent& event)
{
    wxFileDialog *dlg = new wxFileDialog(
        this,
        _("Export tools"),
        wxEmptyString, wxEmptyString,
        _("Xml Files (*.xml)|*.xml|All Files (*.*)|*.*"),
        wxFD_SAVE | wxFD_OVERWRITE_PROMPT, wxDefaultPosition);
    if (dlg->ShowModal() == wxID_OK)
    {
        // dlg->GetPath();
    }
}

void UIToolsDialog::m_buttonOKOnButtonClick(wxCommandEvent& event)
{
    this->SetReturnCode(wxID_OK);
    this->Close();
}

void UIToolsDialog::m_buttonCancelOnButtonClick(wxCommandEvent& event)
{
    this->SetReturnCode(wxID_CANCEL);
    this->Close();
}

void UIToolsDialog::OnCharHook(wxKeyEvent& event)
{
    if (event.GetKeyCode() == WXK_ESCAPE)
        EndModal(wxID_CANCEL);
    else if (event.GetKeyCode() == 87 && event.ControlDown())
        EndModal(wxID_OK);
    else
        event.Skip();
}
