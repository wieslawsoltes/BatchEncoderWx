#include <wx/wxprec.h>
#include "UIPathsDialog.h"

UIPathsDialog::UIPathsDialog(wxWindow* parent)
    :
    PathsDialog(parent)
{
    for (int i = 0; i < 100; i++)
    {
        CPath item;
        m_Items.emplace_back(std::move(item));
    }

    m_Columns =
    {
        { 0, L"Name", 450 },
        { 1, L"Size (bytes)", 150 }
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
        }
        return L"??";
    };

    m_listCtrlItems->SetText = [&](int nItem, int nColumn, const wchar_t* value)->void
    {
        auto& item = m_Items[nItem];
        switch (nColumn)
        {
        case 0: break;
        case 1: break;
        }
    };

    m_listCtrlItems->SetItemCount(m_Items.size());
    bSizerList->Insert(0, m_listCtrlItems, 1, wxALL | wxEXPAND, 2);

    m_listCtrlItems->SetFocus();
}

void UIPathsDialog::PathsDialogOnInitDialog(wxInitDialogEvent& event)
{
    // TODO: Implement PathsDialogOnInitDialog
}

void UIPathsDialog::m_buttonDuplicateOnButtonClick(wxCommandEvent& event)
{
    // TODO: Implement m_buttonDuplicateOnButtonClick
}

void UIPathsDialog::m_buttonMoveUpOnButtonClick(wxCommandEvent& event)
{
    // TODO: Implement m_buttonMoveUpOnButtonClick
}

void UIPathsDialog::m_buttonMoveDownOnButtonClick(wxCommandEvent& event)
{
    // TODO: Implement m_buttonMoveDownOnButtonClick
}

void UIPathsDialog::m_buttonDeleteAllOnButtonClick(wxCommandEvent& event)
{
    // TODO: Implement m_buttonDeleteAllOnButtonClick
}

void UIPathsDialog::m_buttonDeleteOnButtonClick(wxCommandEvent& event)
{
    // TODO: Implement m_buttonDeleteOnButtonClick
}

void UIPathsDialog::m_buttonAddOnButtonClick(wxCommandEvent& event)
{
    // TODO: Implement m_buttonAddOnButtonClick
}

void UIPathsDialog::m_textCtrlPropertyPathOnText(wxCommandEvent& event)
{
    // TODO: Implement m_textCtrlPropertyPathOnText
}

void UIPathsDialog::m_textCtrlPropertySizeOnText(wxCommandEvent& event)
{
    // TODO: Implement m_textCtrlPropertySizeOnText
}

void UIPathsDialog::m_buttonPropertySizeBrowseOnButtonClick(wxCommandEvent& event)
{
    // TODO: Implement m_buttonPropertySizeBrowseOnButtonClick
}

void UIPathsDialog::m_buttonImportOnButtonClick(wxCommandEvent& event)
{
    wxFileDialog *dlg = new wxFileDialog(
        this,
        _("Import paths"),
        wxEmptyString, wxEmptyString,
        _("Xml Files (*.xml)|*.xml|All Files (*.*)|*.*"),
        wxFD_OPEN | wxFD_FILE_MUST_EXIST | wxFD_MULTIPLE, wxDefaultPosition);
    if (dlg->ShowModal() == wxID_OK)
    {
        // dlg->GetPaths();
    }
}

void UIPathsDialog::m_buttonExportOnButtonClick(wxCommandEvent& event)
{
    wxFileDialog *dlg = new wxFileDialog(
        this,
        _("Export paths"),
        wxEmptyString, wxEmptyString,
        _("Xml Files (*.xml)|*.xml|All Files (*.*)|*.*"),
        wxFD_SAVE | wxFD_OVERWRITE_PROMPT, wxDefaultPosition);
    if (dlg->ShowModal() == wxID_OK)
    {
        // dlg->GetPath();
    }
}

void UIPathsDialog::m_buttonOKOnButtonClick(wxCommandEvent& event)
{
    this->SetReturnCode(wxID_OK);
    this->Close();
}

void UIPathsDialog::m_buttonCancelOnButtonClick(wxCommandEvent& event)
{
    this->SetReturnCode(wxID_CANCEL);
    this->Close();
}
