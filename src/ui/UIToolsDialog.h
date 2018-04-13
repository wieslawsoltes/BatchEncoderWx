#ifndef __UIToolsDialog__
#define __UIToolsDialog__

/**
@file
Subclass of ToolsDialog, which is generated by wxFormBuilder.
*/

#include "MainFrame.h"

//// end generated include

#include <wx/filedlg.h>
#include <wx/dirdlg.h>
#include "UIFormatsDialog.h"
#include "Headers.h"

/** Implementing ToolsDialog */
class UIToolsDialog : public ToolsDialog
{
protected:
    // Handlers for ToolsDialog events.
    void ToolsDialogOnInitDialog(wxInitDialogEvent& event);
    void m_buttonDownloadSelectedOnButtonClick(wxCommandEvent& event);
    void m_buttonSetSelectedPathsOnButtonClick(wxCommandEvent& event);
    void m_buttonSetX86PathsOnButtonClick(wxCommandEvent& event);
    void m_buttonSetX64PathsOnButtonClick(wxCommandEvent& event);
    void m_listCtrlItemsOnUpdateUI(wxUpdateUIEvent& event);
    void m_menuItemItemsDuplicateOnMenuSelection(wxCommandEvent& event);
    void m_menuItemItemsDeleteAllOnMenuSelection(wxCommandEvent& event);
    void m_menuItemItemsDeleteOnMenuSelection(wxCommandEvent& event);
    void m_menuItemItemsAddOnMenuSelection(wxCommandEvent& event);
    void m_buttonDuplicateOnButtonClick(wxCommandEvent& event);
    void m_buttonDeleteAllOnButtonClick(wxCommandEvent& event);
    void m_buttonDeleteOnButtonClick(wxCommandEvent& event);
    void m_buttonAddOnButtonClick(wxCommandEvent& event);
    void m_textCtrlPropertyNameOnText(wxCommandEvent& event);
    void m_textCtrlPropertyPlatformOnText(wxCommandEvent& event);
    void m_spinCtrlPropertyPriorityOnSpinCtrl(wxSpinEvent& event);
    void m_spinCtrlPropertyPriorityOnSpinCtrlText(wxCommandEvent& event);
    void m_textCtrlPropertyFormatsOnText(wxCommandEvent& event);
    void m_buttonPropertyFormatsEditOnButtonClick(wxCommandEvent& event);
    void m_textCtrlPropertyUrlOnText(wxCommandEvent& event);
    void m_textCtrlPropertyFileOnText(wxCommandEvent& event);
    void m_textCtrlPropertyExtractOnText(wxCommandEvent& event);
    void m_textCtrlPropertyPathOnText(wxCommandEvent& event);
    void m_buttonImportOnButtonClick(wxCommandEvent& event);
    void m_buttonExportOnButtonClick(wxCommandEvent& event);
    void m_buttonOKOnButtonClick(wxCommandEvent& event);
    void m_buttonCancelOnButtonClick(wxCommandEvent& event);
public:
    /** Constructor */
    UIToolsDialog(wxWindow* parent);
    //// end generated class members
protected:
    std::vector<config::CTool> m_Items;
    std::vector<ItemColumn> m_Columns;
protected:
    void OnCharHook(wxKeyEvent& event);
};

#endif // __UIToolsDialog__
