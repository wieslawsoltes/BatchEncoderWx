#include <wx/wxprec.h>
#include "UIPathsDialog.h"

UIPathsDialog::UIPathsDialog(wxWindow* parent)
    :
    PathsDialog(parent)
{
}

void UIPathsDialog::PathsDialogOnInitDialog(wxInitDialogEvent& event)
{
    this->Bind(wxEVT_CHAR_HOOK, &UIPathsDialog::OnCharHook, this);

    for (int i = 0; i < 100; i++)
    {
        config::CPath item;
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

    m_listCtrlItems->SetText = [&](int nItem, int nColumn, wxString& text)->void
    {
        auto& item = m_Items[nItem];
        switch (nColumn)
        {
        case 0: break;
        case 1: break;
        }
    };

    m_listCtrlItems->SetItemCount(m_Items.size());

    m_listCtrlItems->SetFocus();

    wxPersistentRegisterAndRestore(this, L"PathsDialog");
    wxPersistentRegisterAndRestore(m_listCtrlItems, L"PathsDialogList");
}

void UIPathsDialog::m_listCtrlItemsOnUpdateUI(wxUpdateUIEvent& event)
{
    // TODO: Implement m_listCtrlItemsOnUpdateUI
}

void UIPathsDialog::m_menuItemItemsDuplicateOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemItemsDuplicateOnMenuSelection
}

void UIPathsDialog::m_menuItemItemsMoveUpOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemItemsMoveUpOnMenuSelection
}

void UIPathsDialog::m_menuItemItemsMoveDownOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemItemsMoveDownOnMenuSelection
}

void UIPathsDialog::m_menuItemItemsDeleteAllOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemItemsDeleteAllOnMenuSelection
}

void UIPathsDialog::m_menuItemItemsDeleteOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemItemsDeleteOnMenuSelection
}

void UIPathsDialog::m_menuItemItemsAddOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemItemsAddOnMenuSelection
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
    auto dlg = std::make_unique<wxFileDialog>(
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
    auto dlg = std::make_unique<wxFileDialog>(
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

void UIPathsDialog::OnCharHook(wxKeyEvent& event)
{
    if (event.GetKeyCode() == WXK_ESCAPE)
        EndModal(wxID_CANCEL);
    else if (event.GetKeyCode() == 87 && event.ControlDown())
        EndModal(wxID_OK);
    else
        event.Skip();
}
