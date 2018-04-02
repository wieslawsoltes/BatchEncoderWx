#include <wx/wxprec.h>
#include "UIPresetsDialog.h"

UIPresetsDialog::UIPresetsDialog(wxWindow* parent)
    :
    PresetsDialog(parent)
{
    for (int i = 0; i < 100; i++)
    {
        CPreset item;
        m_Items.emplace_back(std::move(item));
    }

    m_Columns =
    {
        { 0, L"Name", 200 },
        { 1, L"Options", 400 }
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

void UIPresetsDialog::PresetsDialogOnInitDialog(wxInitDialogEvent& event)
{
    // TODO: Implement PresetsDialogOnInitDialog
}

void UIPresetsDialog::m_comboBoxFormatsOnCombobox(wxCommandEvent& event)
{
    // TODO: Implement m_comboBoxFormatsOnCombobox
}

void UIPresetsDialog::m_comboBoxFormatsOnText(wxCommandEvent& event)
{
    // TODO: Implement m_comboBoxFormatsOnText
}

void UIPresetsDialog::m_buttonDuplicateOnButtonClick(wxCommandEvent& event)
{
    // TODO: Implement m_buttonDuplicateOnButtonClick
}

void UIPresetsDialog::m_buttonMoveUpOnButtonClick(wxCommandEvent& event)
{
    // TODO: Implement m_buttonMoveUpOnButtonClick
}

void UIPresetsDialog::m_buttonMoveDownOnButtonClick(wxCommandEvent& event)
{
    // TODO: Implement m_buttonMoveDownOnButtonClick
}

void UIPresetsDialog::m_buttonDeleteAllOnButtonClick(wxCommandEvent& event)
{
    // TODO: Implement m_buttonDeleteAllOnButtonClick
}

void UIPresetsDialog::m_buttonDeleteOnButtonClick(wxCommandEvent& event)
{
    // TODO: Implement m_buttonDeleteOnButtonClick
}

void UIPresetsDialog::m_buttonAddOnButtonClick(wxCommandEvent& event)
{
    // TODO: Implement m_buttonAddOnButtonClick
}

void UIPresetsDialog::m_textCtrlPropertyNameOnText(wxCommandEvent& event)
{
    // TODO: Implement m_textCtrlPropertyNameOnText
}

void UIPresetsDialog::m_textCtrlPropertyOptionsOnText(wxCommandEvent& event)
{
    // TODO: Implement m_textCtrlPropertyOptionsOnText
}

void UIPresetsDialog::m_buttonImportOnButtonClick(wxCommandEvent& event)
{
    wxFileDialog *dlg = new wxFileDialog(
        this,
        _("Import presets"),
        wxEmptyString, wxEmptyString,
        _("Xml Files (*.xml)|*.xml|All Files (*.*)|*.*"),
        wxFD_OPEN | wxFD_FILE_MUST_EXIST | wxFD_MULTIPLE, wxDefaultPosition);
    if (dlg->ShowModal() == wxID_OK)
    {
        // dlg->GetPaths();
    }
}

void UIPresetsDialog::m_buttonExportOnButtonClick(wxCommandEvent& event)
{
    wxFileDialog *dlg = new wxFileDialog(
        this,
        _("Export presets"),
        wxEmptyString, wxEmptyString,
        _("Xml Files (*.xml)|*.xml|All Files (*.*)|*.*"),
        wxFD_SAVE | wxFD_OVERWRITE_PROMPT, wxDefaultPosition);
    if (dlg->ShowModal() == wxID_OK)
    {
        // dlg->GetPath();
    }
}

void UIPresetsDialog::m_buttonOKOnButtonClick(wxCommandEvent& event)
{
    this->SetReturnCode(wxID_OK);
    this->Close();
}

void UIPresetsDialog::m_buttonCancelOnButtonClick(wxCommandEvent& event)
{
    this->SetReturnCode(wxID_CANCEL);
    this->Close();
}
