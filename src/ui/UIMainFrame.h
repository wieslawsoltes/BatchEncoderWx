#ifndef __UIMainFrame__
#define __UIMainFrame__

/**
@file
Subclass of MainFrame, which is generated by wxFormBuilder.
*/

#include "MainFrame.h"

//// end generated include

#include <wx/filedlg.h>
#include <wx/dirdlg.h>
#include "UIPresetsDialog.h"
#include "UIFormatsDialog.h"
#include "UIToolsDialog.h"
#include "UIPathsDialog.h"
#include "UIAboutDialog.h"
class CItem
{
public:
    int nId;
    std::wstring szName;
};

/** Implementing MainFrame */
class UIMainFrame : public MainFrame
{
protected:
    // Handlers for MainFrame events.
    void m_menuItemFileLoadListOnMenuSelection(wxCommandEvent& event);
    void m_menuItemFileSaveListOnMenuSelection(wxCommandEvent& event);
    void m_menuItemFileClearListOnMenuSelection(wxCommandEvent& event);
    void m_menuItemFileExitOnMenuSelection(wxCommandEvent& event);
    void m_menuItemEditAddFileOnMenuSelection(wxCommandEvent& event);
    void m_menuItemEditAddDirOnMenuSelection(wxCommandEvent& event);
    void m_menuItemEditRenameOnMenuSelection(wxCommandEvent& event);
    void m_menuItemEditEditPathsOnMenuSelection(wxCommandEvent& event);
    void m_menuItemEditResetTimeOnMenuSelection(wxCommandEvent& event);
    void m_menuItemEditResetOutputOnMenuSelection(wxCommandEvent& event);
    void m_menuItemEditRemoveOnMenuSelection(wxCommandEvent& event);
    void m_menuItemEditCropOnMenuSelection(wxCommandEvent& event);
    void m_menuItemEditSelectAllOnMenuSelection(wxCommandEvent& event);
    void m_menuItemEditSelectNoneOnMenuSelection(wxCommandEvent& event);
    void m_menuItemEditInvertSelectionOnMenuSelection(wxCommandEvent& event);
    void m_menuItemEditOpenFileOnMenuSelection(wxCommandEvent& event);
    void m_menuItemEditOpenDirOnMenuSelection(wxCommandEvent& event);
    void m_menuItemActionConvertOnMenuSelection(wxCommandEvent& event);
    void m_menuItemOptionsConfigurePresetsOnMenuSelection(wxCommandEvent& event);
    void m_menuItemOptionsConfigureFormatsOnMenuSelection(wxCommandEvent& event);
    void m_menuItemOptionsConfigureToolsOnMenuSelection(wxCommandEvent& event);
    void m_menuItemOptionsDeleteSourceOnMenuSelection(wxCommandEvent& event);
    void m_menuItemOptionsShutownFinishedOnMenuSelection(wxCommandEvent& event);
    void m_menuItemOptionsDoNotSaveOnMenuSelection(wxCommandEvent& event);
    void m_menuItemOptionsDeleteOnErrorOnMenuSelection(wxCommandEvent& event);
    void m_menuItemOptionsStopOnErrorOnMenuSelection(wxCommandEvent& event);
    void m_menuItemOptionsHideConsoleOnMenuSelection(wxCommandEvent& event);
    void m_menuItemOptionsEnsureVisibleOnMenuSelection(wxCommandEvent& event);
    void m_menuItemOptionsFindDecoderOnMenuSelection(wxCommandEvent& event);
    void m_menuItemOptionsValidateFilesOnMenuSelection(wxCommandEvent& event);
    void m_menuItemOptionsOverwriteFilesOnMenuSelection(wxCommandEvent& event);
    void m_menuItemOptionsRenameFilesOnMenuSelection(wxCommandEvent& event);
    void m_menuItemOptionsDownloadToolsOnMenuSelection(wxCommandEvent& event);
    void m_menuItemLanguageDefaultOnMenuSelection(wxCommandEvent& event);
    void m_menuItemHelpWebsiteOnMenuSelection(wxCommandEvent& event);
    void m_menuItemHelpAboutOnMenuSelection(wxCommandEvent& event);
    void m_comboBoxFormatsOnCombobox(wxCommandEvent& event);
    void m_comboBoxFormatsOnText(wxCommandEvent& event);
    void m_comboPresetsOnCombobox(wxCommandEvent& event);
    void m_comboPresetsOnText(wxCommandEvent& event);
    void m_menuItemItemsAddFileOnMenuSelection(wxCommandEvent& event);
    void m_menuItemItemsAddDirOnMenuSelection(wxCommandEvent& event);
    void m_menuItemItemsRenameOnMenuSelection(wxCommandEvent& event);
    void m_menuItemItemsEditPathsOnMenuSelection(wxCommandEvent& event);
    void m_menuItemItemsResetTimeOnMenuSelection(wxCommandEvent& event);
    void m_menuItemItemsResetOutputOnMenuSelection(wxCommandEvent& event);
    void m_menuItemItemsRemoveOnMenuSelection(wxCommandEvent& event);
    void m_menuItemItemsCropOnMenuSelection(wxCommandEvent& event);
    void m_menuItemItemsSelectAllOnMenuSelection(wxCommandEvent& event);
    void m_menuItemItemsSelectNoneOnMenuSelection(wxCommandEvent& event);
    void m_menuItemItemsInvertSelectionOnMenuSelection(wxCommandEvent& event);
    void m_menuItemItemsOpenFileOnMenuSelection(wxCommandEvent& event);
    void m_menuItemItemsOpenDirOnMenuSelection(wxCommandEvent& event);
    void m_buttonStopOnButtonClick(wxCommandEvent& event);
    void m_comboBoxOutputOnCombobox(wxCommandEvent& event);
    void m_comboBoxOutputOnText(wxCommandEvent& event);
    void m_buttonBrowseOnButtonClick(wxCommandEvent& event);
    void m_spinCtrlThreadsOnSpinCtrl(wxSpinEvent& event);
    void m_spinCtrlThreadsOnSpinCtrlText(wxCommandEvent& event);
    void m_buttonConvertOnButtonClick(wxCommandEvent& event);
public:
    /** Constructor */
    UIMainFrame(wxWindow* parent);
    //// end generated class members
protected:
    std::vector<CItem> m_Items;
    std::vector<ItemColumn> m_Columns;
};

#endif // __UIMainFrame__
