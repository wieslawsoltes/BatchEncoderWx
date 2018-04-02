#include <wx/wxprec.h>
#include "UIMainFrame.h"

UIMainFrame::UIMainFrame(wxWindow* parent)
    :
    MainFrame(parent)
{
    for (int i = 0; i < 100; i++)
    {
        CItem item;
        item.nId = i;
        item.szName = L"Name" + std::to_wstring(item.nId);
        m_Items.emplace_back(std::move(item));
    }

    m_Columns =
    {
        { 0, L"Name", 200 },
        { 1, L"Input", 50 },
        { 2, L"Size (bytes)", 80 },
        { 3, L"Output", 70 },
        { 4, L"Preset#", 55 },
        { 5, L"Options", 65 },
        { 6, L"Time", 90 },
        { 7, L"Status", 80 },
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
        case 0: return std::to_wstring(item.nId);
        case 1: return item.szName;
        case 2: return L"TEST2";
        case 3: return L"TEST3";
        case 4: return L"TEST4";
        case 5: return L"TEST5";
        case 6: return L"TEST6";
        case 7: return L"TEST7";
        }
        return L"??";
    };

    m_listCtrlItems->SetText = [&](int nItem, int nColumn, const wchar_t* value)->void
    {
        auto& item = m_Items[nItem];
        switch (nColumn)
        {
        case 0: item.nId = std::stoi(value); break;
        case 1: item.szName = value; break;
        case 2: break;
        case 3: break;
        case 4: break;
        case 5: break;
        case 6: break;
        case 7: break;
        }
    };

    m_listCtrlItems->SetItemCount(m_Items.size());
    bSizerList->Add(m_listCtrlItems, 1, wxLEFT | wxRIGHT | wxEXPAND, 2);

    m_panelProgress->Hide();
    m_panelBottom->Show();

    m_listCtrlItems->SetFocus();
}

void UIMainFrame::m_menuItemFileLoadListOnMenuSelection(wxCommandEvent& event)
{
    wxFileDialog *dlg = new wxFileDialog(
        this,
        _("Open list"),
        wxEmptyString, wxEmptyString,
        _("Xml Files (*.xml)|*.xml|All Files (*.*)|*.*"),
        wxFD_OPEN | wxFD_FILE_MUST_EXIST, wxDefaultPosition);
    if (dlg->ShowModal() == wxID_OK)
    {
        // dlg->GetPath();
    }
}

void UIMainFrame::m_menuItemFileSaveListOnMenuSelection(wxCommandEvent& event)
{
    wxFileDialog *dlg = new wxFileDialog(
        this,
        _("Save list"),
        wxEmptyString, wxEmptyString,
        _("Xml Files (*.xml)|*.xml|All Files (*.*)|*.*"),
        wxFD_SAVE | wxFD_OVERWRITE_PROMPT, wxDefaultPosition);
    if (dlg->ShowModal() == wxID_OK)
    {
        // dlg->GetPath();
    }
}

void UIMainFrame::m_menuItemFileClearListOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemFileClearListOnMenuSelection
}

void UIMainFrame::m_menuItemFileExitOnMenuSelection(wxCommandEvent& event)
{
    this->Close();
}

void UIMainFrame::m_menuItemEditAddFileOnMenuSelection(wxCommandEvent& event)
{
    wxFileDialog *dlg = new wxFileDialog(
        this,
        _("Add files"),
        wxEmptyString, wxEmptyString,
        _("All Files (*.*)|*.*"),
        wxFD_OPEN | wxFD_FILE_MUST_EXIST | wxFD_MULTIPLE, wxDefaultPosition);
    if (dlg->ShowModal() == wxID_OK)
    {
        // dlg->GetPaths();
    }
}

void UIMainFrame::m_menuItemEditAddDirOnMenuSelection(wxCommandEvent& event)
{
    wxDirDialog *dlg = new wxDirDialog(
        this,
        _("Add directory"),
        wxEmptyString,
        wxDD_DEFAULT_STYLE, wxDefaultPosition, wxDefaultSize,
        _("Browse"));
    if (dlg->ShowModal() == wxID_OK)
    {
        // dlg->GetPath()
    }
}

void UIMainFrame::m_menuItemEditRenameOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemEditRenameOnMenuSelection
}

void UIMainFrame::m_menuItemEditEditPathsOnMenuSelection(wxCommandEvent& event)
{
    UIPathsDialog dlg(this);
    dlg.ShowModal();
}

void UIMainFrame::m_menuItemEditResetTimeOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemEditResetTimeOnMenuSelection
}

void UIMainFrame::m_menuItemEditResetOutputOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemEditResetOutputOnMenuSelection
}

void UIMainFrame::m_menuItemEditRemoveOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemEditRemoveOnMenuSelection
}

void UIMainFrame::m_menuItemEditCropOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemEditCropOnMenuSelection
}

void UIMainFrame::m_menuItemEditRemoveCheckedOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemEditRemoveCheckedOnMenuSelection
}

void UIMainFrame::m_menuItemEditRemoveUncheckedOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemEditRemoveUncheckedOnMenuSelection
}

void UIMainFrame::m_menuItemEditCheckSelectedOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemEditCheckSelectedOnMenuSelection
}

void UIMainFrame::m_menuItemEditUncheckSelectedOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemEditUncheckSelectedOnMenuSelection
}

void UIMainFrame::m_menuItemEditSelectAllOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemEditSelectAllOnMenuSelection
}

void UIMainFrame::m_menuItemEditSelectNoneOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemEditSelectNoneOnMenuSelection
}

void UIMainFrame::m_menuItemEditInvertSelectionOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemEditInvertSelectionOnMenuSelection
}

void UIMainFrame::m_menuItemEditOpenFileOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemEditOpenFileOnMenuSelection
}

void UIMainFrame::m_menuItemEditOpenDirOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemEditOpenDirOnMenuSelection
}

void UIMainFrame::m_menuItemActionConvertOnMenuSelection(wxCommandEvent& event)
{
    m_panelBottom->Hide();
    m_panelProgress->Show();
    this->GetSizer()->Layout();
}

void UIMainFrame::m_menuItemOptionsConfigurePresetsOnMenuSelection(wxCommandEvent& event)
{
    UIPresetsDialog dlg(this);
    dlg.ShowModal();
}

void UIMainFrame::m_menuItemOptionsConfigureFormatsOnMenuSelection(wxCommandEvent& event)
{
    UIFormatsDialog dlg(this);
    dlg.ShowModal();
}

void UIMainFrame::m_menuItemOptionsConfigureToolsOnMenuSelection(wxCommandEvent& event)
{
    UIToolsDialog dlg(this);
    dlg.ShowModal();
}

void UIMainFrame::m_menuItemOptionsDeleteSourceOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemOptionsDeleteSourceOnMenuSelection
}

void UIMainFrame::m_menuItemOptionsShutownFinishedOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemOptionsShutownFinishedOnMenuSelection
}

void UIMainFrame::m_menuItemOptionsDoNotSaveOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemOptionsDoNotSaveOnMenuSelection
}

void UIMainFrame::m_menuItemOptionsDeleteOnErrorOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemOptionsDeleteOnErrorOnMenuSelection
}

void UIMainFrame::m_menuItemOptionsStopOnErrorOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemOptionsStopOnErrorOnMenuSelection
}

void UIMainFrame::m_menuItemOptionsHideConsoleOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemOptionsHideConsoleOnMenuSelection
}

void UIMainFrame::m_menuItemOptionsEnsureVisibleOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemOptionsEnsureVisibleOnMenuSelection
}

void UIMainFrame::m_menuItemOptionsFindDecoderOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemOptionsFindDecoderOnMenuSelection
}

void UIMainFrame::m_menuItemOptionsValidateFilesOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemOptionsValidateFilesOnMenuSelection
}

void UIMainFrame::m_menuItemOptionsOverwriteFilesOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemOptionsOverwriteFilesOnMenuSelection
}

void UIMainFrame::m_menuItemOptionsRenameFilesOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemOptionsRenameFilesOnMenuSelection
}

void UIMainFrame::m_menuItemOptionsDownloadToolsOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemOptionsDownloadToolsOnMenuSelection
}

void UIMainFrame::m_menuItemLanguageDefaultOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemLanguageDefaultOnMenuSelection
}

void UIMainFrame::m_menuItemHelpWebsiteOnMenuSelection(wxCommandEvent& event)
{
    wxLaunchDefaultBrowser(L"https://github.com/wieslawsoltes/BatchEncoder");
}

void UIMainFrame::m_menuItemHelpAboutOnMenuSelection(wxCommandEvent& event)
{
    UIAboutDialog dlg(this);
    dlg.ShowModal();
}

void UIMainFrame::m_comboBoxFormatsOnCombobox(wxCommandEvent& event)
{
    // TODO: Implement m_comboBoxFormatsOnCombobox
}

void UIMainFrame::m_comboBoxFormatsOnText(wxCommandEvent& event)
{
    // TODO: Implement m_comboBoxFormatsOnText
}

void UIMainFrame::m_comboPresetsOnCombobox(wxCommandEvent& event)
{
    // TODO: Implement m_comboPresetsOnCombobox
}

void UIMainFrame::m_comboPresetsOnText(wxCommandEvent& event)
{
    // TODO: Implement m_comboPresetsOnText
}

void UIMainFrame::m_buttonStopOnButtonClick(wxCommandEvent& event)
{
    m_panelProgress->Hide();
    m_panelBottom->Show();
    this->GetSizer()->Layout();
}

void UIMainFrame::m_comboBoxOutputOnCombobox(wxCommandEvent& event)
{
    // TODO: Implement m_comboBoxOutputOnCombobox
}

void UIMainFrame::m_comboBoxOutputOnText(wxCommandEvent& event)
{
    // TODO: Implement m_comboBoxOutputOnText
}

void UIMainFrame::m_buttonBrowseOnButtonClick(wxCommandEvent& event)
{
    wxDirDialog *dlg = new wxDirDialog(
        this,
        _("Output path"),
        wxEmptyString,
        wxDD_DEFAULT_STYLE, wxDefaultPosition, wxDefaultSize,
        _("Browse"));
    if (dlg->ShowModal() == wxID_OK)
    {
        m_comboBoxOutput->SetLabelText(dlg->GetPath());
    }
}

void UIMainFrame::m_spinCtrlThreadsOnSpinCtrl(wxSpinEvent& event)
{
    // TODO: Implement m_spinCtrlThreadsOnSpinCtrl
}

void UIMainFrame::m_spinCtrlThreadsOnSpinCtrlText(wxCommandEvent& event)
{
    // TODO: Implement m_spinCtrlThreadsOnSpinCtrlText
}

void UIMainFrame::m_buttonConvertOnButtonClick(wxCommandEvent& event)
{
    m_panelBottom->Hide();
    m_panelProgress->Show();
    this->GetSizer()->Layout();
}
