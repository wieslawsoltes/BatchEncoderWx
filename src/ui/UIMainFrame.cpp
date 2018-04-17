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

    /*
    for (int i = 0; i < 100; i++)
    {
        config::CItem item;
        item.nId = i;
        item.szName = L"Name" + std::to_wstring(item.nId);
        item.nSize = i;
        item.nPreset = 0;
        m_Config->m_Items.emplace_back(std::move(item));
    }
    */

    m_Columns =
    {
        { 0, L"Name", 220 },
        { 1, L"Input", 50 },
        { 2, L"Size (bytes)", 80 },
        { 3, L"Output", 120 },
        { 4, L"Preset#", 55 },
        { 5, L"Options", 85 },
        { 6, L"Time", 90 },
        { 7, L"Status", 140 },
    };

    for (auto& column : m_Columns)
    {
        m_listCtrlItems->InsertColumn(column.nIndex, column.szHeading, wxLIST_FORMAT_LEFT, column.nWidth);
    }

    m_listCtrlItems->GetText = [&](int nItem, int nColumn) -> std::wstring
    {
        auto& item = m_Config->m_Items[nItem];
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
        auto& item = m_Config->m_Items[nItem];
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
    if (m_Config != nullptr && bTransfer == false)
    {
        bTransfer = true;

        m_Config->m_Options.nSelectedFormat = m_comboBoxFormats->GetSelection();
        InitPresets();

        bTransfer = false;
    }
}

void UIMainFrame::m_comboBoxFormatsOnText(wxCommandEvent& event)
{
    // TODO: Implement m_comboBoxFormatsOnText
}

void UIMainFrame::m_comboPresetsOnCombobox(wxCommandEvent& event)
{
    if (m_Config != nullptr && bTransfer == false)
    {
        bTransfer = true;

        auto& current = m_Config->m_Formats[m_Config->m_Options.nSelectedFormat];
        current.nDefaultPreset = m_comboPresets->GetSelection();

        bTransfer = false;
    }
}

void UIMainFrame::m_comboPresetsOnText(wxCommandEvent& event)
{
    // TODO: Implement m_comboPresetsOnText
}

void UIMainFrame::m_listCtrlItemsOnUpdateUI(wxUpdateUIEvent& event)
{
    if (m_Config != nullptr && bTransfer == false)
    {
        if (m_listCtrlItems->GetSelectedItemCount() == 1)
        {
            int nSelected = m_listCtrlItems->GetNextItem(-1, wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);
            if (nSelected >= 0 && m_listCtrlItems->nCurrentItem != nSelected)
            {
                bTransfer = true;

                auto& item = m_Config->m_Items[nSelected];
                m_listCtrlItems->nCurrentItem = nSelected;

                size_t nFormat = config::CFormat::GetFormatById(m_Config->m_Formats, item.szFormatId);
                auto& current = m_Config->m_Formats[nFormat];
                if (nFormat >= 0 && nFormat < m_Config->m_Formats.size())
                {
                    if (nFormat != m_Config->m_Options.nSelectedFormat)
                    {
                        m_comboBoxFormats->SetSelection(nFormat);
                        m_Config->m_Options.nSelectedFormat = nFormat;
                        InitPresets();
                    }
                    if (item.nPreset >= 0 && item.nPreset < current.m_Presets.size())
                    {
                        m_comboPresets->SetSelection(item.nPreset);
                    }
                }

                bTransfer = false;  
            }
        }
    }
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
    if (m_Config != nullptr && bTransfer == false)
    {
        m_Config->m_Options.szOutputPath = m_comboBoxOutput->GetValue();
    }
}

void UIMainFrame::m_comboBoxOutputOnText(wxCommandEvent& event)
{
    if (m_Config != nullptr && bTransfer == false)
    {
        m_Config->m_Options.szOutputPath = m_comboBoxOutput->GetValue();
    }
}

void UIMainFrame::m_buttonBrowseOnButtonClick(wxCommandEvent& event)
{
    auto dlg = std::make_unique<wxDirDialog>(
        this,
        _("Output path"),
        m_Config != nullptr ? m_Config->m_Options.szOutputBrowse : wxEmptyString,
        wxDD_DEFAULT_STYLE, wxDefaultPosition, wxDefaultSize,
        _("Browse"));
    if (dlg->ShowModal() == wxID_OK)
    {
        auto szOutputPath = dlg->GetPath();
        m_Config->m_Options.szOutputBrowse = szOutputPath;
        m_Config->m_Options.szOutputPath = szOutputPath;
        m_comboBoxOutput->SetValue(szOutputPath);
    }
}

void UIMainFrame::m_spinCtrlThreadsOnSpinCtrl(wxSpinEvent& event)
{
    if (m_Config != nullptr && bTransfer == false)
    {
        m_Config->m_Options.nThreadCount = m_spinCtrlThreads->GetValue();
    }
}

void UIMainFrame::m_spinCtrlThreadsOnSpinCtrlText(wxCommandEvent& event)
{
    if (m_Config != nullptr && bTransfer == false)
    {
        m_Config->m_Options.nThreadCount = m_spinCtrlThreads->GetValue();
    }
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

void UIMainFrame::RedrawItems()
{
    if (m_Config != nullptr)
    {
        m_listCtrlItems->SetItemCount(m_Config->m_Items.size());
    }
}

void UIMainFrame::InitFormats()
{
    if (m_Config != nullptr)
    {
        m_comboBoxFormats->Clear();
        for (size_t i = 0; i < m_Config->m_Formats.size(); i++)
        {
            auto& format = m_Config->m_Formats[i];
            m_comboBoxFormats->Insert(format.szName, i);
        }
        m_comboBoxFormats->SetSelection(m_Config->m_Options.nSelectedFormat);
    }
}

void UIMainFrame::InitPresets()
{
    if (m_Config != nullptr)
    {
        m_comboPresets->Clear();
        auto& current = m_Config->m_Formats[m_Config->m_Options.nSelectedFormat];
        for (size_t i = 0; i < current.m_Presets.size(); i++)
        {
            auto& preset = current.m_Presets[i];
            m_comboPresets->Insert(preset.szName, i);
        }
        m_comboPresets->SetSelection(current.nDefaultPreset);
    }
}

void UIMainFrame::InitOutputs()
{
    if (m_Config != nullptr)
    {
        m_comboBoxOutput->Clear();
        for (size_t i = 0; i < m_Config->m_Outputs.size(); i++)
        {
            auto& output = m_Config->m_Outputs[i];
            m_comboBoxOutput->Insert(output, i);
        }
        m_comboBoxOutput->SetValue(m_Config->m_Options.szOutputPath);
    }
}

void UIMainFrame::InitThreads()
{
    if (m_Config != nullptr)
    {
        m_spinCtrlThreads->SetMin(0);
        m_spinCtrlThreads->SetMax(INT_MAX);
        m_spinCtrlThreads->SetValue(m_Config->m_Options.nThreadCount);
    }
}

void UIMainFrame::InitFrame()
{
    if (m_Config != nullptr && bTransfer == false)
    {
        bTransfer = true;

        InitFormats();
        InitPresets();
        InitOutputs();
        InitThreads();

        bTransfer = false;
    }
}
