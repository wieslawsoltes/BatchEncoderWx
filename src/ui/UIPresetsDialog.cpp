#include <wx/wxprec.h>
#include "UIPresetsDialog.h"

UIPresetsDialog::UIPresetsDialog(wxWindow* parent)
    :
    PresetsDialog(parent)
{
}

void UIPresetsDialog::PresetsDialogOnInitDialog(wxInitDialogEvent& event)
{
    this->Bind(wxEVT_CHAR_HOOK, &UIPresetsDialog::OnCharHook, this);

    for (int i = 0; i < 100; i++)
    {
        CPreset item
        {
            L"TEST",
            L"TEST"
        };
        m_Items.emplace_back(std::move(item));
    }

    nCurrentItem = -1;

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
        case 0: return item.szName;
        case 1: return item.szOptions;
        }
        return L"??";
    };

    m_listCtrlItems->SetText = [&](int nItem, int nColumn, wxString& text)->void
    {
        auto& item = m_Items[nItem];
        switch (nColumn)
        {
        case 0: item.szName = text; break;
        case 1: item.szOptions = text; break;
        }
    };

    m_listCtrlItems->SetItemCount(m_Items.size());

    m_listCtrlItems->SetFocus();
}

void UIPresetsDialog::m_comboBoxFormatsOnCombobox(wxCommandEvent& event)
{
    // TODO: Implement m_comboBoxFormatsOnCombobox
}

void UIPresetsDialog::m_comboBoxFormatsOnText(wxCommandEvent& event)
{
    // TODO: Implement m_comboBoxFormatsOnText
}

void UIPresetsDialog::m_listCtrlItemsOnUpdateUI(wxUpdateUIEvent& event)
{
    if (m_listCtrlItems->GetSelectedItemCount() > 0)
    {
        int nSelected = m_listCtrlItems->GetNextItem(-1, wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);
        if (nSelected >= 0 && nCurrentItem != nSelected)
        {
            auto& item = m_Items[nSelected];
            m_PropertyName = item.szName;
            m_PropertyOptions = item.szOptions;
            nCurrentItem = nSelected;
            bTransfer = true;
            this->TransferDataToWindow();
            bTransfer = false;
            wxLogDebug(L"Set Properties");
        }
    }
    else
    {
        if (nCurrentItem != -1)
        {
            m_PropertyName = L"";
            m_PropertyOptions = L"";
            nCurrentItem = -1;
            bTransfer = true;
            this->TransferDataToWindow();
            bTransfer = false;
            wxLogDebug(L"Reset Properties");
        }
    }
}

void UIPresetsDialog::m_menuItemItemsDuplicateOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemItemsDuplicateOnMenuSelection
}

void UIPresetsDialog::m_menuItemItemsMoveUpOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemItemsMoveUpOnMenuSelection
}

void UIPresetsDialog::m_menuItemItemsMoveDownOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemItemsMoveDownOnMenuSelection
}

void UIPresetsDialog::m_menuItemItemsDeleteAllOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemItemsDeleteAllOnMenuSelection
}

void UIPresetsDialog::m_menuItemItemsDeleteOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemItemsDeleteOnMenuSelection
}

void UIPresetsDialog::m_menuItemItemsAddOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemItemsAddOnMenuSelection
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
    UpdateProperty<CPreset, wxString>(
        [](CPreset& item, wxString& text) { item.szName = text; },
        m_PropertyName);
}

void UIPresetsDialog::m_textCtrlPropertyOptionsOnText(wxCommandEvent& event)
{
    UpdateProperty<CPreset, wxString>(
        [](CPreset& item, wxString& text) { item.szOptions = text; },
        m_PropertyOptions);
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

void UIPresetsDialog::OnCharHook(wxKeyEvent& event)
{
    if (event.GetKeyCode() == WXK_ESCAPE)
        EndModal(wxID_CANCEL);
    else if (event.GetKeyCode() == 87 && event.ControlDown())
        EndModal(wxID_OK);
    else
        event.Skip();
}

template<typename T, typename U>
void UIPresetsDialog::UpdateProperty(std::function<void(T&, U&)> setter, U& property)
{
    if (bTransfer == false)
    {
        bTransfer = true;
        int nSelected = m_listCtrlItems->GetNextItem(-1, wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);
        if (nSelected >= 0)
        {
            auto& item = m_Items[nSelected];
            this->TransferDataFromWindow();
            setter(item, property);
            this->m_listCtrlItems->RefreshItem(nSelected);
            wxLogDebug(L"Update Property");
        }
        bTransfer = false;
    }
}
