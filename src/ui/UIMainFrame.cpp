#include <wx/wxprec.h>
#include "UIMainFrame.h"

UIMainFrame::UIMainFrame(wxWindow* parent)
    :
    MainFrame(parent)
{
    this->SetIcon(wxIcon(icon_xpm));

    this->DragAcceptFiles(true);
    this->Connect(wxEVT_DROP_FILES, wxDropFilesEventHandler(UIMainFrame::MainFrameOnDropFiles), NULL, this);

    m_panelProgress->Hide();
    m_panelBottom->Show();

    for (int i = 0; i < 100; i++)
    {
        config::CItem item;
        item.nId = i;
        item.szName = L"Name" + std::to_wstring(item.nId);
        item.nSize = i;
        item.nPreset = 0;
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
        case 0: return item.szName;
        case 1: return item.szExtension;
        case 2: return std::to_wstring(item.nSize);
        case 3: return item.szFormatId;
        case 4: return std::to_wstring(item.nPreset);
        case 5: return item.szOptions;
        case 6: return item.szTime;
        case 7: return item.szStatus;
        }
        return L"??";
    };

    m_listCtrlItems->SetText = [&](int nItem, int nColumn, const wchar_t* value)->void
    {
        auto& item = m_Items[nItem];
        switch (nColumn)
        {
        case 0: item.szName = value; break;
        case 1: item.nId = std::stoi(value); break;
        case 2: break;
        case 3: break;
        case 4: break;
        case 5: break;
        case 6: break;
        case 7: break;
        }
    };

    m_listCtrlItems->SetItemCount(m_Items.size());
    m_listCtrlItems->SetFocus();
}

void UIMainFrame::m_menuItemFileLoadListOnMenuSelection(wxCommandEvent& event)
{
    auto dlg = std::make_unique<wxFileDialog>(
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
    auto dlg = std::make_unique<wxFileDialog>(
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
    auto dlg = std::make_unique<wxFileDialog>(
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
    auto dlg = std::make_unique<wxDirDialog>(
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

void UIMainFrame::m_listCtrlItemsOnUpdateUI(wxUpdateUIEvent& event)
{
    // TODO: Implement m_listCtrlItemsOnUpdateUI
}

void UIMainFrame::m_menuItemItemsAddFileOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemItemsAddFileOnMenuSelection
}

void UIMainFrame::m_menuItemItemsAddDirOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemItemsAddDirOnMenuSelection
}

void UIMainFrame::m_menuItemItemsRenameOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemItemsRenameOnMenuSelection
}

void UIMainFrame::m_menuItemItemsEditPathsOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemItemsEditPathsOnMenuSelection
}

void UIMainFrame::m_menuItemItemsResetTimeOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemItemsResetTimeOnMenuSelection
}

void UIMainFrame::m_menuItemItemsResetOutputOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemItemsResetOutputOnMenuSelection
}

void UIMainFrame::m_menuItemItemsRemoveOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemItemsRemoveOnMenuSelection
}

void UIMainFrame::m_menuItemItemsCropOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemItemsCropOnMenuSelection
}

void UIMainFrame::m_menuItemItemsSelectAllOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemItemsSelectAllOnMenuSelection
}

void UIMainFrame::m_menuItemItemsSelectNoneOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemItemsSelectNoneOnMenuSelection
}

void UIMainFrame::m_menuItemItemsInvertSelectionOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemItemsInvertSelectionOnMenuSelection
}

void UIMainFrame::m_menuItemItemsOpenFileOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemItemsOpenFileOnMenuSelection
}

void UIMainFrame::m_menuItemItemsOpenDirOnMenuSelection(wxCommandEvent& event)
{
    // TODO: Implement m_menuItemItemsOpenDirOnMenuSelection
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
    auto dlg = std::make_unique<wxDirDialog>(
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

void UIMainFrame::MainFrameOnDropFiles(wxDropFilesEvent& event)
{
    if (event.GetNumberOfFiles() > 0)
    {
        wxString* dropped = event.GetFiles();
        wxBusyCursor busyCursor;
        wxWindowDisabler disabler;
        wxBusyInfo busyInfo(_("Adding files..."), this);
        wxString name;
        wxArrayString files;
        for (int i = 0; i < event.GetNumberOfFiles(); i++)
        {
            name = dropped[i];
            if (wxFileExists(name))
            {
                files.push_back(name);
            }
            else if (wxDirExists(name))
            {
                wxDir::GetAllFiles(name, &files);
            }
        }
    }
}
