#include <wx/wxprec.h>
#include "UIFormatsDialog.h"

UIFormatsDialog::UIFormatsDialog(wxWindow* parent)
    :
    FormatsDialog(parent)
{
}

void UIFormatsDialog::FormatsDialogOnInitDialog(wxInitDialogEvent& event)
{
    this->Bind(wxEVT_CHAR_HOOK, &UIFormatsDialog::OnCharHook, this);

    for (int i = 0; i < 100; i++)
    {
        CFormat item;
        m_Items.emplace_back(std::move(item));
    }

    m_Columns =
    {
        { 0, L"Name", 200 },
        { 1, L"Id", 100 },
        { 2, L"Priority", 50 },
        { 3, L"Template", 250 }
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

void UIFormatsDialog::m_menuItemItemsDuplicateOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemItemsDuplicateOnMenuSelection
}

void UIFormatsDialog::m_menuItemItemsDeleteAllOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemItemsDeleteAllOnMenuSelection
}

void UIFormatsDialog::m_menuItemItemsDeleteOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemItemsDeleteOnMenuSelection
}

void UIFormatsDialog::m_menuItemItemsAddOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemItemsAddOnMenuSelection
}

void UIFormatsDialog::m_buttonDuplicateOnButtonClick(wxCommandEvent& event)
{
    // TODO: Implement m_buttonDuplicateOnButtonClick
}

void UIFormatsDialog::m_buttonDeleteAllOnButtonClick(wxCommandEvent& event)
{
    // TODO: Implement m_buttonDeleteAllOnButtonClick
}

void UIFormatsDialog::m_buttonDeleteOnButtonClick(wxCommandEvent& event)
{
    // TODO: Implement m_buttonDeleteOnButtonClick
}

void UIFormatsDialog::m_buttonAddOnButtonClick(wxCommandEvent& event)
{
    // TODO: Implement m_buttonAddOnButtonClick
}

void UIFormatsDialog::m_textCtrlPropertyNameOnText(wxCommandEvent& event)
{
    // TODO: Implement m_textCtrlPropertyNameOnText
}

void UIFormatsDialog::m_textCtrlPropertyIdOnText(wxCommandEvent& event)
{
    // TODO: Implement m_textCtrlPropertyIdOnText
}

void UIFormatsDialog::m_spinCtrlPropertyPriorityOnSpinCtrl(wxSpinEvent& event)
{
    // TODO: Implement m_spinCtrlPropertyPriorityOnSpinCtrl
}

void UIFormatsDialog::m_spinCtrlPropertyPriorityOnSpinCtrlText(wxCommandEvent& event)
{
    // TODO: Implement m_spinCtrlPropertyPriorityOnSpinCtrlText
}

void UIFormatsDialog::m_textCtrlPropertyInputExtensionsOnText(wxCommandEvent& event)
{
    // TODO: Implement m_textCtrlPropertyInputExtensionsOnText
}

void UIFormatsDialog::m_textCtrlPropertyOutputExtensionOnText(wxCommandEvent& event)
{
    // TODO: Implement m_textCtrlPropertyOutputExtensionOnText
}

void UIFormatsDialog::m_radioBtnTypeEncoderOnRadioButton(wxCommandEvent& event)
{
    // TODO: Implement m_radioBtnTypeEncoderOnRadioButton
}

void UIFormatsDialog::m_radioBtnTypeDecoderOnRadioButton(wxCommandEvent& event)
{
    // TODO: Implement m_radioBtnTypeDecoderOnRadioButton
}

void UIFormatsDialog::m_textCtrlPropertyExitCodeSuccessOnText(wxCommandEvent& event)
{
    // TODO: Implement m_textCtrlPropertyExitCodeSuccessOnText
}

void UIFormatsDialog::m_comboBoxDefaultPresetOnCombobox(wxCommandEvent& event)
{
    // TODO: Implement m_comboBoxDefaultPresetOnCombobox
}

void UIFormatsDialog::m_comboBoxDefaultPresetOnText(wxCommandEvent& event)
{
    // TODO: Implement m_comboBoxDefaultPresetOnText
}

void UIFormatsDialog::m_buttonPropertyDefaultPresetEditOnButtonClick(wxCommandEvent& event)
{
    UIPresetsDialog dlg(this);
    dlg.ShowModal();
}

void UIFormatsDialog::m_checkBoxPropertyPipeInputOnCheckBox(wxCommandEvent& event)
{
    // TODO: Implement m_checkBoxPropertyPipeInputOnCheckBox
}

void UIFormatsDialog::m_checkBoxPropertyPipeOutputOnCheckBox(wxCommandEvent& event)
{
    // TODO: Implement m_checkBoxPropertyPipeOutputOnCheckBox
}

void UIFormatsDialog::m_textCtrlPropertyFunctionOnText(wxCommandEvent& event)
{
    // TODO: Implement m_textCtrlPropertyFunctionOnText
}

void UIFormatsDialog::m_buttonPropertyFunctionBrowseOnButtonClick(wxCommandEvent& event)
{
    wxFileDialog *dlg = new wxFileDialog(
        this,
        _("Function script"),
        wxEmptyString, wxEmptyString,
        _("Lua Files (*.lua)|*.lua|All Files (*.*)|*.*"),
        wxFD_OPEN | wxFD_FILE_MUST_EXIST, wxDefaultPosition);
    if (dlg->ShowModal() == wxID_OK)
    {
        // dlg->GetPath();
    }
}

void UIFormatsDialog::m_textCtrlPropertyTemplateOnText(wxCommandEvent& event)
{
    // TODO: Implement m_textCtrlPropertyTemplateOnText
}

void UIFormatsDialog::m_textCtrlPropertyPathOnText(wxCommandEvent& event)
{
    // TODO: Implement m_textCtrlPropertyPathOnText
}

void UIFormatsDialog::m_buttonPropertyPathBrowseOnButtonClick(wxCommandEvent& event)
{
    wxFileDialog *dlg = new wxFileDialog(
        this,
        _("Executable path"),
        wxEmptyString, wxEmptyString,
        _("Exe Files (*.exe)|*.exe|All Files (*.*)|*.*"),
        wxFD_OPEN | wxFD_FILE_MUST_EXIST, wxDefaultPosition);
    if (dlg->ShowModal() == wxID_OK)
    {
        // dlg->GetPath();
    }
}

void UIFormatsDialog::m_buttonImportOnButtonClick(wxCommandEvent& event)
{
    wxFileDialog *dlg = new wxFileDialog(
        this,
        _("Import formats"),
        wxEmptyString, wxEmptyString,
        _("Xml Files (*.xml)|*.xml|All Files (*.*)|*.*"),
        wxFD_OPEN | wxFD_FILE_MUST_EXIST | wxFD_MULTIPLE, wxDefaultPosition);
    if (dlg->ShowModal() == wxID_OK)
    {
        // dlg->GetPaths();
    }
}

void UIFormatsDialog::m_buttonExportOnButtonClick(wxCommandEvent& event)
{
    wxFileDialog *dlg = new wxFileDialog(
        this,
        _("Export formats"),
        wxEmptyString, wxEmptyString,
        _("Xml Files (*.xml)|*.xml|All Files (*.*)|*.*"),
        wxFD_SAVE | wxFD_OVERWRITE_PROMPT, wxDefaultPosition);
    if (dlg->ShowModal() == wxID_OK)
    {
        // dlg->GetPath();
    }
}

void UIFormatsDialog::m_buttonOKOnButtonClick(wxCommandEvent& event)
{
    this->SetReturnCode(wxID_OK);
    this->Close();
}

void UIFormatsDialog::m_buttonCancelOnButtonClick(wxCommandEvent& event)
{
    this->SetReturnCode(wxID_CANCEL);
    this->Close();
}

void UIFormatsDialog::OnCharHook(wxKeyEvent& event)
{
    if (event.GetKeyCode() == WXK_ESCAPE)
        EndModal(wxID_CANCEL);
    else if (event.GetKeyCode() == 87 && event.ControlDown())
        EndModal(wxID_OK);
    else
        event.Skip();
}
