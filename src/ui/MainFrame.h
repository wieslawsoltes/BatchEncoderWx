///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jan 23 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __MAINFRAME_H__
#define __MAINFRAME_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
#include "ItemsList.h"
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/stattext.h>
#include <wx/combobox.h>
#include <wx/sizer.h>
#include <wx/statbox.h>
#include <wx/panel.h>
#include <wx/listctrl.h>
#include <wx/gauge.h>
#include <wx/button.h>
#include <wx/spinctrl.h>
#include <wx/statusbr.h>
#include <wx/frame.h>
#include <wx/textctrl.h>
#include <wx/dialog.h>
#include <wx/radiobut.h>
#include <wx/checkbox.h>
#include <wx/hyperlink.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MainFrame
///////////////////////////////////////////////////////////////////////////////
class MainFrame : public wxFrame 
{
	private:
	
	protected:
		wxMenuBar* m_menubarMain;
		wxMenu* m_menuFile;
		wxMenu* m_menuEdit;
		wxMenu* m_menuAction;
		wxMenu* m_menuOptions;
		wxMenu* m_menuLanguage;
		wxMenuItem* m_menuItemLanguageDefault;
		wxMenu* m_menuHelp;
		wxPanel* m_panelContent;
		wxPanel* m_panTop;
		wxStaticText* m_staticTextFormat;
		wxComboBox* m_comboBoxFormats;
		wxStaticText* m_staticTextPreset;
		wxComboBox* m_comboPresets;
		wxPanel* m_panelList;
		wxBoxSizer* bSizerList;
		ItemsList* m_listCtrlItems;
		wxMenu* m_menuListItems;
		wxPanel* m_panelProgress;
		wxGauge* m_gaugeProgress;
		wxButton* m_buttonStop;
		wxPanel* m_panelBottom;
		wxStaticText* m_staticTextOutput;
		wxComboBox* m_comboBoxOutput;
		wxButton* m_buttonBrowse;
		wxStaticText* m_staticTextThreads;
		wxSpinCtrl* m_spinCtrlThreads;
		wxButton* m_buttonConvert;
		wxStatusBar* m_statusBarMain;
		
		// Virtual event handlers, overide them in your derived class
		virtual void m_menuItemFileLoadListOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_menuItemFileSaveListOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_menuItemFileClearListOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_menuItemFileExitOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_menuItemEditAddFileOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_menuItemEditAddDirOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_menuItemEditRenameOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_menuItemEditEditPathsOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_menuItemEditResetTimeOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_menuItemEditResetOutputOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_menuItemEditRemoveOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_menuItemEditCropOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_menuItemEditRemoveCheckedOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_menuItemEditRemoveUncheckedOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_menuItemEditCheckSelectedOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_menuItemEditUncheckSelectedOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_menuItemEditSelectAllOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_menuItemEditSelectNoneOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_menuItemEditInvertSelectionOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_menuItemEditOpenFileOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_menuItemEditOpenDirOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_menuItemActionConvertOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_menuItemOptionsConfigurePresetsOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_menuItemOptionsConfigureFormatsOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_menuItemOptionsConfigureToolsOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_menuItemOptionsDeleteSourceOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_menuItemOptionsShutownFinishedOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_menuItemOptionsDoNotSaveOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_menuItemOptionsDeleteOnErrorOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_menuItemOptionsStopOnErrorOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_menuItemOptionsHideConsoleOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_menuItemOptionsEnsureVisibleOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_menuItemOptionsFindDecoderOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_menuItemOptionsValidateFilesOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_menuItemOptionsOverwriteFilesOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_menuItemOptionsRenameFilesOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_menuItemOptionsDownloadToolsOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_menuItemLanguageDefaultOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_menuItemHelpWebsiteOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_menuItemHelpAboutOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_comboBoxFormatsOnCombobox( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_comboBoxFormatsOnText( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_comboPresetsOnCombobox( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_comboPresetsOnText( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_buttonStopOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_comboBoxOutputOnCombobox( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_comboBoxOutputOnText( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_buttonBrowseOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_spinCtrlThreadsOnSpinCtrl( wxSpinEvent& event ) { event.Skip(); }
		virtual void m_spinCtrlThreadsOnSpinCtrlText( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_buttonConvertOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		MainFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("BatchEncoder"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 756,580 ), long style = wxDEFAULT_FRAME_STYLE|wxRESIZE_BORDER|wxTAB_TRAVERSAL );
		
		~MainFrame();
		
		void m_listCtrlItemsOnContextMenu( wxMouseEvent &event )
		{
			m_listCtrlItems->PopupMenu( m_menuListItems, event.GetPosition() );
		}
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class PresetsDialog
///////////////////////////////////////////////////////////////////////////////
class PresetsDialog : public wxDialog 
{
	private:
	
	protected:
		wxPanel* m_panelContent;
		wxPanel* m_panelTop;
		wxComboBox* m_comboBoxFormats;
		wxPanel* m_panelList;
		wxBoxSizer* bSizerList;
		ItemsList* m_listCtrlItems;
		wxMenu* m_menuListItems;
		wxButton* m_buttonDuplicate;
		wxButton* m_buttonMoveUp;
		wxButton* m_buttonMoveDown;
		wxButton* m_buttonDeleteAll;
		wxButton* m_buttonDelete;
		wxButton* m_buttonAdd;
		wxPanel* m_panelProperties;
		wxStaticText* m_staticTextPropertyName;
		wxTextCtrl* m_textCtrlPropertyName;
		wxStaticText* m_staticTextPropertyOptions;
		wxTextCtrl* m_textCtrlPropertyOptions;
		wxPanel* m_panelBottom;
		wxButton* m_buttonImport;
		wxButton* m_buttonExport;
		wxButton* m_buttonOK;
		wxButton* m_buttonCancel;
		
		// Virtual event handlers, overide them in your derived class
		virtual void PresetsDialogOnInitDialog( wxInitDialogEvent& event ) { event.Skip(); }
		virtual void m_comboBoxFormatsOnCombobox( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_comboBoxFormatsOnText( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_buttonDuplicateOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_buttonMoveUpOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_buttonMoveDownOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_buttonDeleteAllOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_buttonDeleteOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_buttonAddOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_textCtrlPropertyNameOnText( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_textCtrlPropertyOptionsOnText( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_buttonImportOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_buttonExportOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_buttonOKOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_buttonCancelOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		PresetsDialog( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Configure Presets"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 756,580 ), long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER|wxSYSTEM_MENU ); 
		~PresetsDialog();
		
		void m_listCtrlItemsOnContextMenu( wxMouseEvent &event )
		{
			m_listCtrlItems->PopupMenu( m_menuListItems, event.GetPosition() );
		}
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class FormatsDialog
///////////////////////////////////////////////////////////////////////////////
class FormatsDialog : public wxDialog 
{
	private:
	
	protected:
		wxPanel* m_panelContent;
		wxPanel* m_panelTop;
		wxPanel* m_panelList;
		wxBoxSizer* bSizerList;
		ItemsList* m_listCtrlItems;
		wxMenu* m_menuListItems;
		wxButton* m_buttonDuplicate;
		wxButton* m_buttonMoveUp;
		wxButton* m_buttonMoveDown;
		wxButton* m_buttonDeleteAll;
		wxButton* m_buttonDelete;
		wxButton* m_buttonAdd;
		wxPanel* m_panelProperties;
		wxStaticText* m_staticTextPropertyName;
		wxTextCtrl* m_textCtrlPropertyName;
		wxStaticText* m_staticTextPropertyId;
		wxTextCtrl* m_textCtrlPropertyId;
		wxStaticText* m_staticTextPropertyPriority;
		wxSpinCtrl* m_spinCtrlPropertyPriority;
		wxStaticText* m_staticTextPropertyInputExtensions;
		wxTextCtrl* m_textCtrlPropertyInputExtensions;
		wxStaticText* m_staticTextPropertyOutputExtension;
		wxTextCtrl* m_textCtrlPropertyOutputExtension;
		wxStaticText* m_staticTextPropertyType;
		wxRadioButton* m_radioBtnTypeEncoder;
		wxRadioButton* m_radioBtnTypeDecoder;
		wxStaticText* m_staticTextPropertyExitCodeSuccess;
		wxTextCtrl* m_textCtrlPropertyExitCodeSuccess;
		wxStaticText* m_staticTextPropertyDefaultPreset;
		wxComboBox* m_comboBoxDefaultPreset;
		wxButton* m_buttonPropertyDefaultPresetEdit;
		wxStaticText* m_staticTextPropertyPipes;
		wxCheckBox* m_checkBoxPropertyPipeInput;
		wxCheckBox* m_checkBoxPropertyPipeOutput;
		wxStaticText* m_staticTextPropertyFunction;
		wxTextCtrl* m_textCtrlPropertyFunction;
		wxButton* m_buttonPropertyFunctionBrowse;
		wxStaticText* m_staticTextPropertyTemplate;
		wxTextCtrl* m_textCtrlPropertyTemplate;
		wxStaticText* m_staticTextPropertyPath;
		wxTextCtrl* m_textCtrlPropertyPath;
		wxButton* m_buttonPropertyPathBrowse;
		wxPanel* m_panelBottom;
		wxButton* m_buttonImport;
		wxButton* m_buttonExport;
		wxButton* m_buttonOK;
		wxButton* m_buttonCancel;
		
		// Virtual event handlers, overide them in your derived class
		virtual void FormatsDialogOnInitDialog( wxInitDialogEvent& event ) { event.Skip(); }
		virtual void m_buttonDuplicateOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_buttonMoveUpOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_buttonMoveDownOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_buttonDeleteAllOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_buttonDeleteOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_buttonAddOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_textCtrlPropertyNameOnText( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_textCtrlPropertyIdOnText( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_spinCtrlPropertyPriorityOnSpinCtrl( wxSpinEvent& event ) { event.Skip(); }
		virtual void m_spinCtrlPropertyPriorityOnSpinCtrlText( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_textCtrlPropertyInputExtensionsOnText( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_textCtrlPropertyOutputExtensionOnText( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_radioBtnTypeEncoderOnRadioButton( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_radioBtnTypeDecoderOnRadioButton( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_textCtrlPropertyExitCodeSuccessOnText( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_comboBoxDefaultPresetOnCombobox( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_comboBoxDefaultPresetOnText( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_buttonPropertyDefaultPresetEditOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_checkBoxPropertyPipeInputOnCheckBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_checkBoxPropertyPipeOutputOnCheckBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_textCtrlPropertyFunctionOnText( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_buttonPropertyFunctionBrowseOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_textCtrlPropertyTemplateOnText( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_textCtrlPropertyPathOnText( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_buttonPropertyPathBrowseOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_buttonImportOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_buttonExportOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_buttonOKOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_buttonCancelOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		FormatsDialog( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Configure Formats"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 756,580 ), long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER|wxSYSTEM_MENU ); 
		~FormatsDialog();
		
		void m_listCtrlItemsOnContextMenu( wxMouseEvent &event )
		{
			m_listCtrlItems->PopupMenu( m_menuListItems, event.GetPosition() );
		}
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class ToolsDialog
///////////////////////////////////////////////////////////////////////////////
class ToolsDialog : public wxDialog 
{
	private:
	
	protected:
		wxPanel* m_panelContent;
		wxPanel* m_panelTop;
		wxButton* m_buttonDownloadSelected;
		wxButton* m_buttonSetSelectedPaths;
		wxButton* m_buttonSetX86Paths;
		wxButton* m_buttonSetX64Paths;
		wxPanel* m_panelList;
		wxBoxSizer* bSizerList;
		ItemsList* m_listCtrlItems;
		wxMenu* m_menuListItems;
		wxButton* m_buttonDuplicate;
		wxButton* m_buttonMoveUp;
		wxButton* m_buttonMoveDown;
		wxButton* m_buttonDeleteAll;
		wxButton* m_buttonDelete;
		wxButton* m_buttonAdd;
		wxPanel* m_panelProperties;
		wxStaticText* m_staticTextPropertyName;
		wxTextCtrl* m_textCtrlPropertyName;
		wxStaticText* m_staticTextPropertyPlatform;
		wxTextCtrl* m_textCtrlPropertyPlatform;
		wxStaticText* m_staticTextPropertyPriority;
		wxSpinCtrl* m_spinCtrlPropertyPriority;
		wxStaticText* m_staticTextPropertyFormats;
		wxTextCtrl* m_textCtrlPropertyFormats;
		wxButton* m_buttonPropertyFormatsEdit;
		wxStaticText* m_staticTextPropertyUrl;
		wxTextCtrl* m_textCtrlPropertyUrl;
		wxStaticText* m_staticTextPropertyFile;
		wxTextCtrl* m_textCtrlPropertyFile;
		wxStaticText* m_staticTextPropertyExtract;
		wxTextCtrl* m_textCtrlPropertyExtract;
		wxStaticText* m_staticTextPropertyPath;
		wxTextCtrl* m_textCtrlPropertyPath;
		wxPanel* m_panelBottom;
		wxButton* m_buttonImport;
		wxButton* m_buttonExport;
		wxButton* m_buttonOK;
		wxButton* m_buttonCancel;
		
		// Virtual event handlers, overide them in your derived class
		virtual void ToolsDialogOnInitDialog( wxInitDialogEvent& event ) { event.Skip(); }
		virtual void m_buttonDownloadSelectedOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_buttonSetSelectedPathsOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_buttonSetX86PathsOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_buttonSetX64PathsOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_buttonDuplicateOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_buttonMoveUpOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_buttonMoveDownOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_buttonDeleteAllOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_buttonDeleteOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_buttonAddOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_textCtrlPropertyNameOnText( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_textCtrlPropertyPlatformOnText( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_spinCtrlPropertyPriorityOnSpinCtrl( wxSpinEvent& event ) { event.Skip(); }
		virtual void m_spinCtrlPropertyPriorityOnSpinCtrlText( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_textCtrlPropertyFormatsOnText( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_buttonPropertyFormatsEditOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_textCtrlPropertyUrlOnText( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_textCtrlPropertyFileOnText( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_textCtrlPropertyExtractOnText( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_textCtrlPropertyPathOnText( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_buttonImportOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_buttonExportOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_buttonOKOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_buttonCancelOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		ToolsDialog( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Configure Tools"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 756,580 ), long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER|wxSYSTEM_MENU ); 
		~ToolsDialog();
		
		void m_listCtrlItemsOnContextMenu( wxMouseEvent &event )
		{
			m_listCtrlItems->PopupMenu( m_menuListItems, event.GetPosition() );
		}
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class PathsDialog
///////////////////////////////////////////////////////////////////////////////
class PathsDialog : public wxDialog 
{
	private:
	
	protected:
		wxPanel* m_panelContent;
		wxPanel* m_panelTop;
		wxPanel* m_panelList;
		wxBoxSizer* bSizerList;
		ItemsList* m_listCtrlItems;
		wxMenu* m_menuListItems;
		wxButton* m_buttonDuplicate;
		wxButton* m_buttonMoveUp;
		wxButton* m_buttonMoveDown;
		wxButton* m_buttonDeleteAll;
		wxButton* m_buttonDelete;
		wxButton* m_buttonAdd;
		wxPanel* m_panelProperties;
		wxStaticText* m_staticTextPropertyPath;
		wxTextCtrl* m_textCtrlPropertyPath;
		wxStaticText* m_staticTextPropertySize;
		wxTextCtrl* m_textCtrlPropertySize;
		wxButton* m_buttonPropertySizeBrowse;
		wxPanel* m_panelBottom;
		wxButton* m_buttonImport;
		wxButton* m_buttonExport;
		wxButton* m_buttonOK;
		wxButton* m_buttonCancel;
		
		// Virtual event handlers, overide them in your derived class
		virtual void PathsDialogOnInitDialog( wxInitDialogEvent& event ) { event.Skip(); }
		virtual void m_buttonDuplicateOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_buttonMoveUpOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_buttonMoveDownOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_buttonDeleteAllOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_buttonDeleteOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_buttonAddOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_textCtrlPropertyPathOnText( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_textCtrlPropertySizeOnText( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_buttonPropertySizeBrowseOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_buttonImportOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_buttonExportOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_buttonOKOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_buttonCancelOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		PathsDialog( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Edit Paths"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 756,580 ), long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER|wxSYSTEM_MENU ); 
		~PathsDialog();
		
		void m_listCtrlItemsOnContextMenu( wxMouseEvent &event )
		{
			m_listCtrlItems->PopupMenu( m_menuListItems, event.GetPosition() );
		}
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class AboutDialog
///////////////////////////////////////////////////////////////////////////////
class AboutDialog : public wxDialog 
{
	private:
	
	protected:
		wxPanel* m_panelContent;
		wxPanel* m_panelTop;
		wxPanel* m_panelAbout;
		wxStaticText* m_staticApplicationName;
		wxHyperlinkCtrl* m_hyperlinkApplicationWebsite;
		wxHyperlinkCtrl* m_hyperlinkApplicationEmail;
		wxStaticText* m_staticApplicationLicense;
		wxPanel* m_panelBottom;
		wxButton* m_buttonOK;
		
		// Virtual event handlers, overide them in your derived class
		virtual void AboutDialogOnInitDialog( wxInitDialogEvent& event ) { event.Skip(); }
		virtual void m_hyperlinkApplicationWebsiteOnHyperlink( wxHyperlinkEvent& event ) { event.Skip(); }
		virtual void m_hyperlinkApplicationEmailOnHyperlink( wxHyperlinkEvent& event ) { event.Skip(); }
		virtual void m_buttonOKOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		AboutDialog( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("About..."), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 640,200 ), long style = wxDEFAULT_DIALOG_STYLE|wxMINIMIZE_BOX ); 
		~AboutDialog();
	
};

#endif //__MAINFRAME_H__
