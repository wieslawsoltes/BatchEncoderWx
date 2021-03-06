#ifndef __UIPresetsDialog__
#define __UIPresetsDialog__

/**
@file
Subclass of PresetsDialog, which is generated by wxFormBuilder.
*/

#include "MainFrame.h"

//// end generated include

#include <wx/persist/toplevel.h>
#include <wx/filedlg.h>
#include <wx/dirdlg.h>

#include "Headers.h"

/** Implementing PresetsDialog */
class UIPresetsDialog : public PresetsDialog
{
protected:
    // Handlers for PresetsDialog events.
    void PresetsDialogOnInitDialog(wxInitDialogEvent& event);
    void m_comboBoxFormatsOnCombobox(wxCommandEvent& event);
    void m_comboBoxFormatsOnText(wxCommandEvent& event);
    void m_listCtrlItemsOnUpdateUI(wxUpdateUIEvent& event);
    void m_menuItemItemsDuplicateOnMenuSelection(wxCommandEvent& event);
    void m_menuItemItemsMoveUpOnMenuSelection(wxCommandEvent& event);
    void m_menuItemItemsMoveDownOnMenuSelection(wxCommandEvent& event);
    void m_menuItemItemsDeleteAllOnMenuSelection(wxCommandEvent& event);
    void m_menuItemItemsDeleteOnMenuSelection(wxCommandEvent& event);
    void m_menuItemItemsAddOnMenuSelection(wxCommandEvent& event);
    void m_buttonDuplicateOnButtonClick(wxCommandEvent& event);
    void m_buttonMoveUpOnButtonClick(wxCommandEvent& event);
    void m_buttonMoveDownOnButtonClick(wxCommandEvent& event);
    void m_buttonDeleteAllOnButtonClick(wxCommandEvent& event);
    void m_buttonDeleteOnButtonClick(wxCommandEvent& event);
    void m_buttonAddOnButtonClick(wxCommandEvent& event);
    void m_textCtrlPropertyNameOnText(wxCommandEvent& event);
    void m_textCtrlPropertyOptionsOnText(wxCommandEvent& event);
    void m_buttonImportOnButtonClick(wxCommandEvent& event);
    void m_buttonExportOnButtonClick(wxCommandEvent& event);
    void m_buttonOKOnButtonClick(wxCommandEvent& event);
    void m_buttonCancelOnButtonClick(wxCommandEvent& event);
public:
    /** Constructor */
    UIPresetsDialog(wxWindow* parent);
    //// end generated class members
protected:
    std::vector<config::CPreset> m_Items;
    std::vector<ItemColumn> m_Columns;
protected:
    void OnCharHook(wxKeyEvent& event);
};

#endif // __UIPresetsDialog__
