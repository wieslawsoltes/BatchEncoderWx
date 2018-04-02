///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jan 23 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include <wx/wxprec.h>

#include "MainFrame.h"

///////////////////////////////////////////////////////////////////////////

MainFrame::MainFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxColour( 240, 240, 240 ) );
	
	m_menubarMain = new wxMenuBar( 0 );
	m_menuFile = new wxMenu();
	wxMenuItem* m_menuItemFileLoadList;
	m_menuItemFileLoadList = new wxMenuItem( m_menuFile, wxID_ANY, wxString( _("&Load List...") ) + wxT('\t') + wxT("Ctrl+L"), wxEmptyString, wxITEM_NORMAL );
	m_menuFile->Append( m_menuItemFileLoadList );
	
	wxMenuItem* m_menuItemFileSaveList;
	m_menuItemFileSaveList = new wxMenuItem( m_menuFile, wxID_ANY, wxString( _("&Save List...") ) + wxT('\t') + wxT("Ctrl+S"), wxEmptyString, wxITEM_NORMAL );
	m_menuFile->Append( m_menuItemFileSaveList );
	
	m_menuFile->AppendSeparator();
	
	wxMenuItem* m_menuItemFileClearList;
	m_menuItemFileClearList = new wxMenuItem( m_menuFile, wxID_ANY, wxString( _("Cl&ear List") ) + wxT('\t') + wxT("Ctrl+E"), wxEmptyString, wxITEM_NORMAL );
	m_menuFile->Append( m_menuItemFileClearList );
	
	m_menuFile->AppendSeparator();
	
	wxMenuItem* m_menuItemFileExit;
	m_menuItemFileExit = new wxMenuItem( m_menuFile, wxID_ANY, wxString( _("E&xit") ) + wxT('\t') + wxT("Alt+F4"), wxEmptyString, wxITEM_NORMAL );
	m_menuFile->Append( m_menuItemFileExit );
	
	m_menubarMain->Append( m_menuFile, _("&File") ); 
	
	m_menuEdit = new wxMenu();
	wxMenuItem* m_menuItemEditAddFile;
	m_menuItemEditAddFile = new wxMenuItem( m_menuEdit, wxID_ANY, wxString( _("&Add Files...") ) + wxT('\t') + wxT("Ctrl+N"), wxEmptyString, wxITEM_NORMAL );
	m_menuEdit->Append( m_menuItemEditAddFile );
	
	wxMenuItem* m_menuItemEditAddDir;
	m_menuItemEditAddDir = new wxMenuItem( m_menuEdit, wxID_ANY, wxString( _("Add Dire&ctory...") ) + wxT('\t') + wxT("Ctrl+D"), wxEmptyString, wxITEM_NORMAL );
	m_menuEdit->Append( m_menuItemEditAddDir );
	
	m_menuEdit->AppendSeparator();
	
	wxMenuItem* m_menuItemEditRename;
	m_menuItemEditRename = new wxMenuItem( m_menuEdit, wxID_ANY, wxString( _("Rena&me") ) + wxT('\t') + wxT("F2"), wxEmptyString, wxITEM_NORMAL );
	m_menuEdit->Append( m_menuItemEditRename );
	
	m_menuEdit->AppendSeparator();
	
	wxMenuItem* m_menuItemEditEditPaths;
	m_menuItemEditEditPaths = new wxMenuItem( m_menuEdit, wxID_ANY, wxString( _("Edi&t Paths") ) + wxT('\t') + wxT("F4"), wxEmptyString, wxITEM_NORMAL );
	m_menuEdit->Append( m_menuItemEditEditPaths );
	
	m_menuEdit->AppendSeparator();
	
	wxMenuItem* m_menuItemEditResetTime;
	m_menuItemEditResetTime = new wxMenuItem( m_menuEdit, wxID_ANY, wxString( _("Rese&t Time/Status") ) + wxT('\t') + wxT("Ctrl+,"), wxEmptyString, wxITEM_NORMAL );
	m_menuEdit->Append( m_menuItemEditResetTime );
	
	wxMenuItem* m_menuItemEditResetOutput;
	m_menuItemEditResetOutput = new wxMenuItem( m_menuEdit, wxID_ANY, wxString( _("Reset Output&/Preset") ) + wxT('\t') + wxT("Ctrl+."), wxEmptyString, wxITEM_NORMAL );
	m_menuEdit->Append( m_menuItemEditResetOutput );
	
	m_menuEdit->AppendSeparator();
	
	wxMenuItem* m_menuItemEditRemove;
	m_menuItemEditRemove = new wxMenuItem( m_menuEdit, wxID_ANY, wxString( _("&Remove") ) + wxT('\t') + wxT("DEL"), wxEmptyString, wxITEM_NORMAL );
	m_menuEdit->Append( m_menuItemEditRemove );
	
	wxMenuItem* m_menuItemEditCrop;
	m_menuItemEditCrop = new wxMenuItem( m_menuEdit, wxID_ANY, wxString( _("Cro&p") ) + wxT('\t') + wxT("INS"), wxEmptyString, wxITEM_NORMAL );
	m_menuEdit->Append( m_menuItemEditCrop );
	
	m_menuEdit->AppendSeparator();
	
	wxMenuItem* m_menuItemEditSelectAll;
	m_menuItemEditSelectAll = new wxMenuItem( m_menuEdit, wxID_ANY, wxString( _("&Select All") ) + wxT('\t') + wxT("Ctrl+A"), wxEmptyString, wxITEM_NORMAL );
	m_menuEdit->Append( m_menuItemEditSelectAll );
	
	wxMenuItem* m_menuItemEditSelectNone;
	m_menuItemEditSelectNone = new wxMenuItem( m_menuEdit, wxID_ANY, wxString( _("Select &None") ) + wxT('\t') + wxT("Ctrl+N"), wxEmptyString, wxITEM_NORMAL );
	m_menuEdit->Append( m_menuItemEditSelectNone );
	
	wxMenuItem* m_menuItemEditInvertSelection;
	m_menuItemEditInvertSelection = new wxMenuItem( m_menuEdit, wxID_ANY, wxString( _("&Invert Selection") ) + wxT('\t') + wxT("Ctrl+I"), wxEmptyString, wxITEM_NORMAL );
	m_menuEdit->Append( m_menuItemEditInvertSelection );
	
	m_menuEdit->AppendSeparator();
	
	wxMenuItem* m_menuItemEditOpenFile;
	m_menuItemEditOpenFile = new wxMenuItem( m_menuEdit, wxID_ANY, wxString( _("&Open File...") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuEdit->Append( m_menuItemEditOpenFile );
	
	wxMenuItem* m_menuItemEditOpenDir;
	m_menuItemEditOpenDir = new wxMenuItem( m_menuEdit, wxID_ANY, wxString( _("Open &Directory...") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuEdit->Append( m_menuItemEditOpenDir );
	
	m_menubarMain->Append( m_menuEdit, _("&Edit") ); 
	
	m_menuAction = new wxMenu();
	wxMenuItem* m_menuItemActionConvert;
	m_menuItemActionConvert = new wxMenuItem( m_menuAction, wxID_ANY, wxString( _("Conve&rt") ) + wxT('\t') + wxT("F5"), wxEmptyString, wxITEM_NORMAL );
	m_menuAction->Append( m_menuItemActionConvert );
	
	m_menubarMain->Append( m_menuAction, _("&Action") ); 
	
	m_menuOptions = new wxMenu();
	wxMenuItem* m_menuItemOptionsConfigurePresets;
	m_menuItemOptionsConfigurePresets = new wxMenuItem( m_menuOptions, wxID_ANY, wxString( _("Configure &Presets...") ) + wxT('\t') + wxT("F6"), wxEmptyString, wxITEM_NORMAL );
	m_menuOptions->Append( m_menuItemOptionsConfigurePresets );
	
	wxMenuItem* m_menuItemOptionsConfigureFormats;
	m_menuItemOptionsConfigureFormats = new wxMenuItem( m_menuOptions, wxID_ANY, wxString( _("Configure &Formats...") ) + wxT('\t') + wxT("F7"), wxEmptyString, wxITEM_NORMAL );
	m_menuOptions->Append( m_menuItemOptionsConfigureFormats );
	
	wxMenuItem* m_menuItemOptionsConfigureTools;
	m_menuItemOptionsConfigureTools = new wxMenuItem( m_menuOptions, wxID_ANY, wxString( _("Configure Too&ls...") ) + wxT('\t') + wxT("F8"), wxEmptyString, wxITEM_NORMAL );
	m_menuOptions->Append( m_menuItemOptionsConfigureTools );
	
	m_menuOptions->AppendSeparator();
	
	wxMenuItem* m_menuItemOptionsDeleteSource;
	m_menuItemOptionsDeleteSource = new wxMenuItem( m_menuOptions, wxID_ANY, wxString( _("&Delete Source Files") ) , wxEmptyString, wxITEM_CHECK );
	m_menuOptions->Append( m_menuItemOptionsDeleteSource );
	
	m_menuOptions->AppendSeparator();
	
	wxMenuItem* m_menuItemOptionsShutownFinished;
	m_menuItemOptionsShutownFinished = new wxMenuItem( m_menuOptions, wxID_ANY, wxString( _("&Shutdown When Finished") ) , wxEmptyString, wxITEM_CHECK );
	m_menuOptions->Append( m_menuItemOptionsShutownFinished );
	
	m_menuOptions->AppendSeparator();
	
	wxMenuItem* m_menuItemOptionsDoNotSave;
	m_menuItemOptionsDoNotSave = new wxMenuItem( m_menuOptions, wxID_ANY, wxString( _("Do Not Save Configuration On E&xit") ) , wxEmptyString, wxITEM_CHECK );
	m_menuOptions->Append( m_menuItemOptionsDoNotSave );
	
	m_menuOptions->AppendSeparator();
	
	wxMenuItem* m_menuItemOptionsDeleteOnError;
	m_menuItemOptionsDeleteOnError = new wxMenuItem( m_menuOptions, wxID_ANY, wxString( _("Delete &Output File On Error") ) , wxEmptyString, wxITEM_CHECK );
	m_menuOptions->Append( m_menuItemOptionsDeleteOnError );
	
	m_menuOptions->AppendSeparator();
	
	wxMenuItem* m_menuItemOptionsStopOnError;
	m_menuItemOptionsStopOnError = new wxMenuItem( m_menuOptions, wxID_ANY, wxString( _("Stop &Conversion On Error") ) , wxEmptyString, wxITEM_CHECK );
	m_menuOptions->Append( m_menuItemOptionsStopOnError );
	
	m_menuOptions->AppendSeparator();
	
	wxMenuItem* m_menuItemOptionsHideConsole;
	m_menuItemOptionsHideConsole = new wxMenuItem( m_menuOptions, wxID_ANY, wxString( _("&Hide Console Window") ) , wxEmptyString, wxITEM_CHECK );
	m_menuOptions->Append( m_menuItemOptionsHideConsole );
	
	m_menuOptions->AppendSeparator();
	
	wxMenuItem* m_menuItemOptionsEnsureVisible;
	m_menuItemOptionsEnsureVisible = new wxMenuItem( m_menuOptions, wxID_ANY, wxString( _("&Ensure Item Is Visible") ) , wxEmptyString, wxITEM_CHECK );
	m_menuOptions->Append( m_menuItemOptionsEnsureVisible );
	
	m_menuOptions->AppendSeparator();
	
	wxMenuItem* m_menuItemOptionsFindDecoder;
	m_menuItemOptionsFindDecoder = new wxMenuItem( m_menuOptions, wxID_ANY, wxString( _("&Try To Find Decoder") ) , wxEmptyString, wxITEM_CHECK );
	m_menuOptions->Append( m_menuItemOptionsFindDecoder );
	
	m_menuOptions->AppendSeparator();
	
	wxMenuItem* m_menuItemOptionsValidateFiles;
	m_menuItemOptionsValidateFiles = new wxMenuItem( m_menuOptions, wxID_ANY, wxString( _("&Validate Input Files") ) , wxEmptyString, wxITEM_CHECK );
	m_menuOptions->Append( m_menuItemOptionsValidateFiles );
	
	m_menuOptions->AppendSeparator();
	
	wxMenuItem* m_menuItemOptionsOverwriteFiles;
	m_menuItemOptionsOverwriteFiles = new wxMenuItem( m_menuOptions, wxID_ANY, wxString( _("Ove&rwrite Existing Files") ) , wxEmptyString, wxITEM_CHECK );
	m_menuOptions->Append( m_menuItemOptionsOverwriteFiles );
	
	wxMenuItem* m_menuItemOptionsRenameFiles;
	m_menuItemOptionsRenameFiles = new wxMenuItem( m_menuOptions, wxID_ANY, wxString( _("Rena&me Existing Files") ) , wxEmptyString, wxITEM_CHECK );
	m_menuOptions->Append( m_menuItemOptionsRenameFiles );
	
	m_menuOptions->AppendSeparator();
	
	wxMenuItem* m_menuItemOptionsDownloadTools;
	m_menuItemOptionsDownloadTools = new wxMenuItem( m_menuOptions, wxID_ANY, wxString( _("Tr&y To Download Tools") ) , wxEmptyString, wxITEM_CHECK );
	m_menuOptions->Append( m_menuItemOptionsDownloadTools );
	
	m_menubarMain->Append( m_menuOptions, _("&Options") ); 
	
	m_menuLanguage = new wxMenu();
	m_menuItemLanguageDefault = new wxMenuItem( m_menuLanguage, wxID_ANY, wxString( _("&Default (English)") ) , wxEmptyString, wxITEM_CHECK );
	m_menuLanguage->Append( m_menuItemLanguageDefault );
	m_menuItemLanguageDefault->Enable( false );
	m_menuItemLanguageDefault->Check( true );
	
	m_menubarMain->Append( m_menuLanguage, _("&Language") ); 
	
	m_menuHelp = new wxMenu();
	wxMenuItem* m_menuItemHelpWebsite;
	m_menuItemHelpWebsite = new wxMenuItem( m_menuHelp, wxID_ANY, wxString( _("&Website...") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuHelp->Append( m_menuItemHelpWebsite );
	
	m_menuHelp->AppendSeparator();
	
	wxMenuItem* m_menuItemHelpAbout;
	m_menuItemHelpAbout = new wxMenuItem( m_menuHelp, wxID_ANY, wxString( _("&About...") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuHelp->Append( m_menuItemHelpAbout );
	
	m_menubarMain->Append( m_menuHelp, _("&Help") ); 
	
	this->SetMenuBar( m_menubarMain );
	
	wxBoxSizer* bSizerContent;
	bSizerContent = new wxBoxSizer( wxVERTICAL );
	
	m_panelContent = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerMain;
	bSizerMain = new wxBoxSizer( wxVERTICAL );
	
	m_panTop = new wxPanel( m_panelContent, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxStaticBoxSizer* sbSizerTop;
	sbSizerTop = new wxStaticBoxSizer( new wxStaticBox( m_panTop, wxID_ANY, _("Output") ), wxHORIZONTAL );
	
	
	sbSizerTop->Add( 3, 0, 0, wxEXPAND, 5 );
	
	m_staticTextFormat = new wxStaticText( sbSizerTop->GetStaticBox(), wxID_ANY, _("format:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextFormat->Wrap( -1 );
	m_staticTextFormat->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxEmptyString ) );
	
	sbSizerTop->Add( m_staticTextFormat, 0, wxALIGN_CENTER|wxALL, 3 );
	
	m_comboBoxFormats = new wxComboBox( sbSizerTop->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_DROPDOWN|wxCB_READONLY );
	m_comboBoxFormats->Append( _("1") );
	m_comboBoxFormats->Append( _("2") );
	m_comboBoxFormats->Append( _("3") );
	m_comboBoxFormats->SetSelection( 0 );
	sbSizerTop->Add( m_comboBoxFormats, 1, wxALIGN_CENTER|wxALL, 3 );
	
	
	sbSizerTop->Add( 3, 0, 0, wxEXPAND, 5 );
	
	m_staticTextPreset = new wxStaticText( sbSizerTop->GetStaticBox(), wxID_ANY, _("preset:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextPreset->Wrap( -1 );
	m_staticTextPreset->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxEmptyString ) );
	
	sbSizerTop->Add( m_staticTextPreset, 0, wxALIGN_CENTER|wxALL, 3 );
	
	m_comboPresets = new wxComboBox( sbSizerTop->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_DROPDOWN|wxCB_READONLY );
	m_comboPresets->Append( _("1") );
	m_comboPresets->Append( _("2") );
	m_comboPresets->Append( _("3") );
	m_comboPresets->SetSelection( 0 );
	sbSizerTop->Add( m_comboPresets, 1, wxALIGN_CENTER|wxALL, 3 );
	
	
	m_panTop->SetSizer( sbSizerTop );
	m_panTop->Layout();
	sbSizerTop->Fit( m_panTop );
	bSizerMain->Add( m_panTop, 0, wxALL|wxEXPAND, 7 );
	
	m_panelList = new wxPanel( m_panelContent, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	bSizerList = new wxBoxSizer( wxVERTICAL );
	
	m_listCtrlItems = new ItemsList( m_panelList, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_EDIT_LABELS|wxLC_HRULES|wxLC_REPORT|wxLC_VIRTUAL|wxLC_VRULES );
	m_menuListItems = new wxMenu();
	wxMenuItem* m_menuItemItemsAddFile;
	m_menuItemItemsAddFile = new wxMenuItem( m_menuListItems, wxID_ANY, wxString( _("&Add Files...") ) + wxT('\t') + wxT("Ctrl+N"), wxEmptyString, wxITEM_NORMAL );
	m_menuListItems->Append( m_menuItemItemsAddFile );
	
	wxMenuItem* m_menuItemItemsAddDir;
	m_menuItemItemsAddDir = new wxMenuItem( m_menuListItems, wxID_ANY, wxString( _("Add Dire&ctory...") ) + wxT('\t') + wxT("Ctrl+D"), wxEmptyString, wxITEM_NORMAL );
	m_menuListItems->Append( m_menuItemItemsAddDir );
	
	m_menuListItems->AppendSeparator();
	
	wxMenuItem* m_menuItemItemsRename;
	m_menuItemItemsRename = new wxMenuItem( m_menuListItems, wxID_ANY, wxString( _("Rena&me") ) + wxT('\t') + wxT("F2"), wxEmptyString, wxITEM_NORMAL );
	m_menuListItems->Append( m_menuItemItemsRename );
	
	m_menuListItems->AppendSeparator();
	
	wxMenuItem* m_menuItemItemsEditPaths;
	m_menuItemItemsEditPaths = new wxMenuItem( m_menuListItems, wxID_ANY, wxString( _("Edi&t Paths") ) + wxT('\t') + wxT("F4"), wxEmptyString, wxITEM_NORMAL );
	m_menuListItems->Append( m_menuItemItemsEditPaths );
	
	m_menuListItems->AppendSeparator();
	
	wxMenuItem* m_menuItemItemsResetTime;
	m_menuItemItemsResetTime = new wxMenuItem( m_menuListItems, wxID_ANY, wxString( _("Rese&t Time/Status") ) + wxT('\t') + wxT("Ctrl+,"), wxEmptyString, wxITEM_NORMAL );
	m_menuListItems->Append( m_menuItemItemsResetTime );
	
	wxMenuItem* m_menuItemItemsResetOutput;
	m_menuItemItemsResetOutput = new wxMenuItem( m_menuListItems, wxID_ANY, wxString( _("Reset Output&/Preset") ) + wxT('\t') + wxT("Ctrl+."), wxEmptyString, wxITEM_NORMAL );
	m_menuListItems->Append( m_menuItemItemsResetOutput );
	
	m_menuListItems->AppendSeparator();
	
	wxMenuItem* m_menuItemItemsRemove;
	m_menuItemItemsRemove = new wxMenuItem( m_menuListItems, wxID_ANY, wxString( _("&Remove") ) + wxT('\t') + wxT("DEL"), wxEmptyString, wxITEM_NORMAL );
	m_menuListItems->Append( m_menuItemItemsRemove );
	
	wxMenuItem* m_menuItemItemsCrop;
	m_menuItemItemsCrop = new wxMenuItem( m_menuListItems, wxID_ANY, wxString( _("Cro&p") ) + wxT('\t') + wxT("INS"), wxEmptyString, wxITEM_NORMAL );
	m_menuListItems->Append( m_menuItemItemsCrop );
	
	m_menuListItems->AppendSeparator();
	
	wxMenuItem* m_menuItemItemsSelectAll;
	m_menuItemItemsSelectAll = new wxMenuItem( m_menuListItems, wxID_ANY, wxString( _("&Select All") ) + wxT('\t') + wxT("Ctrl+A"), wxEmptyString, wxITEM_NORMAL );
	m_menuListItems->Append( m_menuItemItemsSelectAll );
	
	wxMenuItem* m_menuItemItemsSelectNone;
	m_menuItemItemsSelectNone = new wxMenuItem( m_menuListItems, wxID_ANY, wxString( _("Select &None") ) + wxT('\t') + wxT("Ctrl+N"), wxEmptyString, wxITEM_NORMAL );
	m_menuListItems->Append( m_menuItemItemsSelectNone );
	
	wxMenuItem* m_menuItemItemsInvertSelection;
	m_menuItemItemsInvertSelection = new wxMenuItem( m_menuListItems, wxID_ANY, wxString( _("&Invert Selection") ) + wxT('\t') + wxT("Ctrl+I"), wxEmptyString, wxITEM_NORMAL );
	m_menuListItems->Append( m_menuItemItemsInvertSelection );
	
	m_menuListItems->AppendSeparator();
	
	wxMenuItem* m_menuItemItemsOpenFile;
	m_menuItemItemsOpenFile = new wxMenuItem( m_menuListItems, wxID_ANY, wxString( _("&Open File...") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuListItems->Append( m_menuItemItemsOpenFile );
	
	wxMenuItem* m_menuItemItemsOpenDir;
	m_menuItemItemsOpenDir = new wxMenuItem( m_menuListItems, wxID_ANY, wxString( _("Open &Directory...") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuListItems->Append( m_menuItemItemsOpenDir );
	
	m_listCtrlItems->Connect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( MainFrame::m_listCtrlItemsOnContextMenu ), NULL, this ); 
	
	bSizerList->Add( m_listCtrlItems, 1, wxALL|wxEXPAND, 2 );
	
	
	m_panelList->SetSizer( bSizerList );
	m_panelList->Layout();
	bSizerList->Fit( m_panelList );
	bSizerMain->Add( m_panelList, 1, wxEXPAND | wxALL, 5 );
	
	m_panelProgress = new wxPanel( m_panelContent, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerProgress;
	bSizerProgress = new wxBoxSizer( wxHORIZONTAL );
	
	m_gaugeProgress = new wxGauge( m_panelProgress, wxID_ANY, 100, wxDefaultPosition, wxDefaultSize, wxGA_HORIZONTAL|wxGA_SMOOTH );
	m_gaugeProgress->SetValue( 0 ); 
	bSizerProgress->Add( m_gaugeProgress, 1, wxALL|wxEXPAND, 2 );
	
	
	bSizerProgress->Add( 2, 0, 0, wxEXPAND, 5 );
	
	m_buttonStop = new wxButton( m_panelProgress, wxID_ANY, _("S&top"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonStop->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxEmptyString ) );
	
	bSizerProgress->Add( m_buttonStop, 0, wxALIGN_CENTER|wxALL, 0 );
	
	
	bSizerProgress->Add( 2, 0, 0, wxEXPAND, 5 );
	
	
	m_panelProgress->SetSizer( bSizerProgress );
	m_panelProgress->Layout();
	bSizerProgress->Fit( m_panelProgress );
	bSizerMain->Add( m_panelProgress, 0, wxEXPAND | wxALL, 5 );
	
	m_panelBottom = new wxPanel( m_panelContent, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerBottom;
	bSizerBottom = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticTextOutput = new wxStaticText( m_panelBottom, wxID_ANY, _("Output path:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextOutput->Wrap( -1 );
	bSizerBottom->Add( m_staticTextOutput, 0, wxALIGN_CENTER|wxALL, 2 );
	
	
	bSizerBottom->Add( 2, 0, 0, wxEXPAND, 5 );
	
	m_comboBoxOutput = new wxComboBox( m_panelBottom, wxID_ANY, _("C:\\Temp"), wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_comboBoxOutput->Append( _("1") );
	m_comboBoxOutput->Append( _("2") );
	m_comboBoxOutput->Append( _("3") );
	bSizerBottom->Add( m_comboBoxOutput, 1, wxALIGN_CENTER|wxALL, 0 );
	
	
	bSizerBottom->Add( 4, 0, 0, wxEXPAND, 5 );
	
	m_buttonBrowse = new wxButton( m_panelBottom, wxID_ANY, _("&..."), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerBottom->Add( m_buttonBrowse, 0, wxALIGN_CENTER|wxALL, 0 );
	
	
	bSizerBottom->Add( 2, 0, 0, wxEXPAND, 5 );
	
	m_staticTextThreads = new wxStaticText( m_panelBottom, wxID_ANY, _("threads (0=auto):"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextThreads->Wrap( -1 );
	bSizerBottom->Add( m_staticTextThreads, 0, wxALIGN_CENTER|wxALL, 2 );
	
	
	bSizerBottom->Add( 2, 0, 0, wxEXPAND, 5 );
	
	m_spinCtrlThreads = new wxSpinCtrl( m_panelBottom, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 10, 0 );
	bSizerBottom->Add( m_spinCtrlThreads, 0, wxALIGN_CENTER|wxALL, 0 );
	
	
	bSizerBottom->Add( 4, 0, 0, wxEXPAND, 5 );
	
	m_buttonConvert = new wxButton( m_panelBottom, wxID_ANY, _("Conve&rt"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonConvert->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxEmptyString ) );
	
	bSizerBottom->Add( m_buttonConvert, 0, wxALIGN_CENTER|wxALL, 0 );
	
	
	bSizerBottom->Add( 2, 0, 0, wxEXPAND, 5 );
	
	
	m_panelBottom->SetSizer( bSizerBottom );
	m_panelBottom->Layout();
	bSizerBottom->Fit( m_panelBottom );
	bSizerMain->Add( m_panelBottom, 0, wxEXPAND | wxALL, 5 );
	
	
	m_panelContent->SetSizer( bSizerMain );
	m_panelContent->Layout();
	bSizerMain->Fit( m_panelContent );
	bSizerContent->Add( m_panelContent, 1, wxEXPAND | wxALL, 0 );
	
	
	this->SetSizer( bSizerContent );
	this->Layout();
	m_statusBarMain = this->CreateStatusBar( 1, wxSTB_SIZEGRIP, wxID_ANY );
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( m_menuItemFileLoadList->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemFileLoadListOnMenuSelection ) );
	this->Connect( m_menuItemFileSaveList->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemFileSaveListOnMenuSelection ) );
	this->Connect( m_menuItemFileClearList->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemFileClearListOnMenuSelection ) );
	this->Connect( m_menuItemFileExit->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemFileExitOnMenuSelection ) );
	this->Connect( m_menuItemEditAddFile->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemEditAddFileOnMenuSelection ) );
	this->Connect( m_menuItemEditAddDir->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemEditAddDirOnMenuSelection ) );
	this->Connect( m_menuItemEditRename->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemEditRenameOnMenuSelection ) );
	this->Connect( m_menuItemEditEditPaths->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemEditEditPathsOnMenuSelection ) );
	this->Connect( m_menuItemEditResetTime->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemEditResetTimeOnMenuSelection ) );
	this->Connect( m_menuItemEditResetOutput->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemEditResetOutputOnMenuSelection ) );
	this->Connect( m_menuItemEditRemove->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemEditRemoveOnMenuSelection ) );
	this->Connect( m_menuItemEditCrop->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemEditCropOnMenuSelection ) );
	this->Connect( m_menuItemEditSelectAll->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemEditSelectAllOnMenuSelection ) );
	this->Connect( m_menuItemEditSelectNone->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemEditSelectNoneOnMenuSelection ) );
	this->Connect( m_menuItemEditInvertSelection->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemEditInvertSelectionOnMenuSelection ) );
	this->Connect( m_menuItemEditOpenFile->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemEditOpenFileOnMenuSelection ) );
	this->Connect( m_menuItemEditOpenDir->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemEditOpenDirOnMenuSelection ) );
	this->Connect( m_menuItemActionConvert->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemActionConvertOnMenuSelection ) );
	this->Connect( m_menuItemOptionsConfigurePresets->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemOptionsConfigurePresetsOnMenuSelection ) );
	this->Connect( m_menuItemOptionsConfigureFormats->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemOptionsConfigureFormatsOnMenuSelection ) );
	this->Connect( m_menuItemOptionsConfigureTools->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemOptionsConfigureToolsOnMenuSelection ) );
	this->Connect( m_menuItemOptionsDeleteSource->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemOptionsDeleteSourceOnMenuSelection ) );
	this->Connect( m_menuItemOptionsShutownFinished->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemOptionsShutownFinishedOnMenuSelection ) );
	this->Connect( m_menuItemOptionsDoNotSave->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemOptionsDoNotSaveOnMenuSelection ) );
	this->Connect( m_menuItemOptionsDeleteOnError->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemOptionsDeleteOnErrorOnMenuSelection ) );
	this->Connect( m_menuItemOptionsStopOnError->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemOptionsStopOnErrorOnMenuSelection ) );
	this->Connect( m_menuItemOptionsHideConsole->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemOptionsHideConsoleOnMenuSelection ) );
	this->Connect( m_menuItemOptionsEnsureVisible->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemOptionsEnsureVisibleOnMenuSelection ) );
	this->Connect( m_menuItemOptionsFindDecoder->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemOptionsFindDecoderOnMenuSelection ) );
	this->Connect( m_menuItemOptionsValidateFiles->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemOptionsValidateFilesOnMenuSelection ) );
	this->Connect( m_menuItemOptionsOverwriteFiles->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemOptionsOverwriteFilesOnMenuSelection ) );
	this->Connect( m_menuItemOptionsRenameFiles->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemOptionsRenameFilesOnMenuSelection ) );
	this->Connect( m_menuItemOptionsDownloadTools->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemOptionsDownloadToolsOnMenuSelection ) );
	this->Connect( m_menuItemLanguageDefault->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemLanguageDefaultOnMenuSelection ) );
	this->Connect( m_menuItemHelpWebsite->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemHelpWebsiteOnMenuSelection ) );
	this->Connect( m_menuItemHelpAbout->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemHelpAboutOnMenuSelection ) );
	m_comboBoxFormats->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( MainFrame::m_comboBoxFormatsOnCombobox ), NULL, this );
	m_comboBoxFormats->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MainFrame::m_comboBoxFormatsOnText ), NULL, this );
	m_comboPresets->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( MainFrame::m_comboPresetsOnCombobox ), NULL, this );
	m_comboPresets->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MainFrame::m_comboPresetsOnText ), NULL, this );
	m_listCtrlItems->Connect( wxEVT_UPDATE_UI, wxUpdateUIEventHandler( MainFrame::m_listCtrlItemsOnUpdateUI ), NULL, this );
	this->Connect( m_menuItemItemsAddFile->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemItemsAddFileOnMenuSelection ) );
	this->Connect( m_menuItemItemsAddDir->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemItemsAddDirOnMenuSelection ) );
	this->Connect( m_menuItemItemsRename->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemItemsRenameOnMenuSelection ) );
	this->Connect( m_menuItemItemsEditPaths->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemItemsEditPathsOnMenuSelection ) );
	this->Connect( m_menuItemItemsResetTime->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemItemsResetTimeOnMenuSelection ) );
	this->Connect( m_menuItemItemsResetOutput->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemItemsResetOutputOnMenuSelection ) );
	this->Connect( m_menuItemItemsRemove->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemItemsRemoveOnMenuSelection ) );
	this->Connect( m_menuItemItemsCrop->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemItemsCropOnMenuSelection ) );
	this->Connect( m_menuItemItemsSelectAll->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemItemsSelectAllOnMenuSelection ) );
	this->Connect( m_menuItemItemsSelectNone->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemItemsSelectNoneOnMenuSelection ) );
	this->Connect( m_menuItemItemsInvertSelection->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemItemsInvertSelectionOnMenuSelection ) );
	this->Connect( m_menuItemItemsOpenFile->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemItemsOpenFileOnMenuSelection ) );
	this->Connect( m_menuItemItemsOpenDir->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemItemsOpenDirOnMenuSelection ) );
	m_buttonStop->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::m_buttonStopOnButtonClick ), NULL, this );
	m_comboBoxOutput->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( MainFrame::m_comboBoxOutputOnCombobox ), NULL, this );
	m_comboBoxOutput->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MainFrame::m_comboBoxOutputOnText ), NULL, this );
	m_buttonBrowse->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::m_buttonBrowseOnButtonClick ), NULL, this );
	m_spinCtrlThreads->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( MainFrame::m_spinCtrlThreadsOnSpinCtrl ), NULL, this );
	m_spinCtrlThreads->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MainFrame::m_spinCtrlThreadsOnSpinCtrlText ), NULL, this );
	m_buttonConvert->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::m_buttonConvertOnButtonClick ), NULL, this );
}

MainFrame::~MainFrame()
{
	// Disconnect Events
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemFileLoadListOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemFileSaveListOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemFileClearListOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemFileExitOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemEditAddFileOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemEditAddDirOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemEditRenameOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemEditEditPathsOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemEditResetTimeOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemEditResetOutputOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemEditRemoveOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemEditCropOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemEditSelectAllOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemEditSelectNoneOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemEditInvertSelectionOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemEditOpenFileOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemEditOpenDirOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemActionConvertOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemOptionsConfigurePresetsOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemOptionsConfigureFormatsOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemOptionsConfigureToolsOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemOptionsDeleteSourceOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemOptionsShutownFinishedOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemOptionsDoNotSaveOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemOptionsDeleteOnErrorOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemOptionsStopOnErrorOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemOptionsHideConsoleOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemOptionsEnsureVisibleOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemOptionsFindDecoderOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemOptionsValidateFilesOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemOptionsOverwriteFilesOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemOptionsRenameFilesOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemOptionsDownloadToolsOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemLanguageDefaultOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemHelpWebsiteOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemHelpAboutOnMenuSelection ) );
	m_comboBoxFormats->Disconnect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( MainFrame::m_comboBoxFormatsOnCombobox ), NULL, this );
	m_comboBoxFormats->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MainFrame::m_comboBoxFormatsOnText ), NULL, this );
	m_comboPresets->Disconnect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( MainFrame::m_comboPresetsOnCombobox ), NULL, this );
	m_comboPresets->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MainFrame::m_comboPresetsOnText ), NULL, this );
	m_listCtrlItems->Disconnect( wxEVT_UPDATE_UI, wxUpdateUIEventHandler( MainFrame::m_listCtrlItemsOnUpdateUI ), NULL, this );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemItemsAddFileOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemItemsAddDirOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemItemsRenameOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemItemsEditPathsOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemItemsResetTimeOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemItemsResetOutputOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemItemsRemoveOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemItemsCropOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemItemsSelectAllOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemItemsSelectNoneOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemItemsInvertSelectionOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemItemsOpenFileOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::m_menuItemItemsOpenDirOnMenuSelection ) );
	m_buttonStop->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::m_buttonStopOnButtonClick ), NULL, this );
	m_comboBoxOutput->Disconnect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( MainFrame::m_comboBoxOutputOnCombobox ), NULL, this );
	m_comboBoxOutput->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MainFrame::m_comboBoxOutputOnText ), NULL, this );
	m_buttonBrowse->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::m_buttonBrowseOnButtonClick ), NULL, this );
	m_spinCtrlThreads->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( MainFrame::m_spinCtrlThreadsOnSpinCtrl ), NULL, this );
	m_spinCtrlThreads->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MainFrame::m_spinCtrlThreadsOnSpinCtrlText ), NULL, this );
	m_buttonConvert->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::m_buttonConvertOnButtonClick ), NULL, this );
	
	delete m_menuListItems; 
}

PresetsDialog::PresetsDialog( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizerContent;
	bSizerContent = new wxBoxSizer( wxVERTICAL );
	
	m_panelContent = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerMain;
	bSizerMain = new wxBoxSizer( wxVERTICAL );
	
	m_panelTop = new wxPanel( m_panelContent, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerTop;
	bSizerTop = new wxBoxSizer( wxHORIZONTAL );
	
	m_comboBoxFormats = new wxComboBox( m_panelTop, wxID_ANY, _("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_DROPDOWN|wxCB_READONLY );
	m_comboBoxFormats->Append( _("1") );
	m_comboBoxFormats->Append( _("2") );
	m_comboBoxFormats->Append( _("3") );
	m_comboBoxFormats->SetSelection( 0 );
	bSizerTop->Add( m_comboBoxFormats, 0, wxALL, 2 );
	
	
	m_panelTop->SetSizer( bSizerTop );
	m_panelTop->Layout();
	bSizerTop->Fit( m_panelTop );
	bSizerMain->Add( m_panelTop, 0, wxEXPAND | wxALL, 5 );
	
	m_panelList = new wxPanel( m_panelContent, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	bSizerList = new wxBoxSizer( wxHORIZONTAL );
	
	m_listCtrlItems = new ItemsList( m_panelList, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_EDIT_LABELS|wxLC_HRULES|wxLC_REPORT|wxLC_VIRTUAL|wxLC_VRULES );
	m_menuListItems = new wxMenu();
	wxMenuItem* m_menuItemItemsDuplicate;
	m_menuItemItemsDuplicate = new wxMenuItem( m_menuListItems, wxID_ANY, wxString( _("Du&plicate") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuListItems->Append( m_menuItemItemsDuplicate );
	
	m_menuListItems->AppendSeparator();
	
	wxMenuItem* m_menuItemItemsMoveUp;
	m_menuItemItemsMoveUp = new wxMenuItem( m_menuListItems, wxID_ANY, wxString( _("move &Up") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuListItems->Append( m_menuItemItemsMoveUp );
	
	wxMenuItem* m_menuItemItemsMoveDown;
	m_menuItemItemsMoveDown = new wxMenuItem( m_menuListItems, wxID_ANY, wxString( _("move Dow&n") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuListItems->Append( m_menuItemItemsMoveDown );
	
	m_menuListItems->AppendSeparator();
	
	wxMenuItem* m_menuItemItemsDeleteAll;
	m_menuItemItemsDeleteAll = new wxMenuItem( m_menuListItems, wxID_ANY, wxString( _("Dele&te All") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuListItems->Append( m_menuItemItemsDeleteAll );
	
	m_menuListItems->AppendSeparator();
	
	wxMenuItem* m_menuItemItemsDelete;
	m_menuItemItemsDelete = new wxMenuItem( m_menuListItems, wxID_ANY, wxString( _("&Delete") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuListItems->Append( m_menuItemItemsDelete );
	
	m_menuListItems->AppendSeparator();
	
	wxMenuItem* m_menuItemItemsAdd;
	m_menuItemItemsAdd = new wxMenuItem( m_menuListItems, wxID_ANY, wxString( _("&Add") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuListItems->Append( m_menuItemItemsAdd );
	
	m_listCtrlItems->Connect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( PresetsDialog::m_listCtrlItemsOnContextMenu ), NULL, this ); 
	
	bSizerList->Add( m_listCtrlItems, 1, wxALL|wxEXPAND, 2 );
	
	wxBoxSizer* bSizerButtons;
	bSizerButtons = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizerButtonsTop;
	bSizerButtonsTop = new wxBoxSizer( wxVERTICAL );
	
	m_buttonDuplicate = new wxButton( m_panelList, wxID_ANY, _("Du&plicate"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerButtonsTop->Add( m_buttonDuplicate, 0, wxALL, 2 );
	
	m_buttonMoveUp = new wxButton( m_panelList, wxID_ANY, _("move &Up"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerButtonsTop->Add( m_buttonMoveUp, 0, wxALL, 2 );
	
	m_buttonMoveDown = new wxButton( m_panelList, wxID_ANY, _("move Dow&n"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerButtonsTop->Add( m_buttonMoveDown, 0, wxALL, 2 );
	
	
	bSizerButtons->Add( bSizerButtonsTop, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizerButtonsMiddle;
	bSizerButtonsMiddle = new wxBoxSizer( wxVERTICAL );
	
	
	bSizerButtons->Add( bSizerButtonsMiddle, 1, wxEXPAND|wxRESERVE_SPACE_EVEN_IF_HIDDEN, 5 );
	
	wxBoxSizer* bSizerButtonsBottom;
	bSizerButtonsBottom = new wxBoxSizer( wxVERTICAL );
	
	m_buttonDeleteAll = new wxButton( m_panelList, wxID_ANY, _("Dele&te All"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerButtonsBottom->Add( m_buttonDeleteAll, 0, wxALL, 2 );
	
	m_buttonDelete = new wxButton( m_panelList, wxID_ANY, _("&Delete"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerButtonsBottom->Add( m_buttonDelete, 0, wxALL, 2 );
	
	m_buttonAdd = new wxButton( m_panelList, wxID_ANY, _("&Add"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerButtonsBottom->Add( m_buttonAdd, 0, wxALL, 2 );
	
	
	bSizerButtons->Add( bSizerButtonsBottom, 0, wxEXPAND, 5 );
	
	
	bSizerList->Add( bSizerButtons, 0, wxEXPAND, 5 );
	
	
	m_panelList->SetSizer( bSizerList );
	m_panelList->Layout();
	bSizerList->Fit( m_panelList );
	bSizerMain->Add( m_panelList, 1, wxEXPAND | wxALL, 5 );
	
	m_panelProperties = new wxPanel( m_panelContent, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerProperties;
	bSizerProperties = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizerPropertyName;
	bSizerPropertyName = new wxBoxSizer( wxVERTICAL );
	
	m_staticTextPropertyName = new wxStaticText( m_panelProperties, wxID_ANY, _("Name:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextPropertyName->Wrap( -1 );
	bSizerPropertyName->Add( m_staticTextPropertyName, 0, wxALL|wxEXPAND, 2 );
	
	m_textCtrlPropertyName = new wxTextCtrl( m_panelProperties, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrlPropertyName->SetValidator( wxTextValidator( wxFILTER_NONE, &m_PropertyName ) );
	
	bSizerPropertyName->Add( m_textCtrlPropertyName, 0, wxALL|wxEXPAND, 2 );
	
	
	bSizerProperties->Add( bSizerPropertyName, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizerPropertyOptions;
	bSizerPropertyOptions = new wxBoxSizer( wxVERTICAL );
	
	m_staticTextPropertyOptions = new wxStaticText( m_panelProperties, wxID_ANY, _("Command-line options:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextPropertyOptions->Wrap( -1 );
	bSizerPropertyOptions->Add( m_staticTextPropertyOptions, 0, wxALL|wxEXPAND, 2 );
	
	m_textCtrlPropertyOptions = new wxTextCtrl( m_panelProperties, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrlPropertyOptions->SetValidator( wxTextValidator( wxFILTER_NONE, &m_PropertyOptions ) );
	
	bSizerPropertyOptions->Add( m_textCtrlPropertyOptions, 0, wxALL|wxEXPAND, 2 );
	
	
	bSizerProperties->Add( bSizerPropertyOptions, 1, wxEXPAND, 5 );
	
	
	m_panelProperties->SetSizer( bSizerProperties );
	m_panelProperties->Layout();
	bSizerProperties->Fit( m_panelProperties );
	bSizerMain->Add( m_panelProperties, 0, wxEXPAND | wxALL, 5 );
	
	m_panelBottom = new wxPanel( m_panelContent, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerBottom;
	bSizerBottom = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizerBottomLeft;
	bSizerBottomLeft = new wxBoxSizer( wxHORIZONTAL );
	
	m_buttonImport = new wxButton( m_panelBottom, wxID_ANY, _("&Import"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerBottomLeft->Add( m_buttonImport, 0, wxALL, 2 );
	
	m_buttonExport = new wxButton( m_panelBottom, wxID_ANY, _("E&xport"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerBottomLeft->Add( m_buttonExport, 0, wxALL, 2 );
	
	
	bSizerBottom->Add( bSizerBottomLeft, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizerBottomMiddle;
	bSizerBottomMiddle = new wxBoxSizer( wxHORIZONTAL );
	
	
	bSizerBottom->Add( bSizerBottomMiddle, 1, wxEXPAND|wxRESERVE_SPACE_EVEN_IF_HIDDEN, 5 );
	
	wxBoxSizer* bSizerBottomRight;
	bSizerBottomRight = new wxBoxSizer( wxHORIZONTAL );
	
	m_buttonOK = new wxButton( m_panelBottom, wxID_ANY, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerBottomRight->Add( m_buttonOK, 0, wxALL, 2 );
	
	m_buttonCancel = new wxButton( m_panelBottom, wxID_ANY, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonCancel->SetDefault(); 
	bSizerBottomRight->Add( m_buttonCancel, 0, wxALL, 2 );
	
	
	bSizerBottom->Add( bSizerBottomRight, 0, wxEXPAND, 5 );
	
	
	m_panelBottom->SetSizer( bSizerBottom );
	m_panelBottom->Layout();
	bSizerBottom->Fit( m_panelBottom );
	bSizerMain->Add( m_panelBottom, 0, wxEXPAND | wxALL, 5 );
	
	
	m_panelContent->SetSizer( bSizerMain );
	m_panelContent->Layout();
	bSizerMain->Fit( m_panelContent );
	bSizerContent->Add( m_panelContent, 1, wxEXPAND | wxALL, 0 );
	
	
	this->SetSizer( bSizerContent );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_INIT_DIALOG, wxInitDialogEventHandler( PresetsDialog::PresetsDialogOnInitDialog ) );
	m_comboBoxFormats->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( PresetsDialog::m_comboBoxFormatsOnCombobox ), NULL, this );
	m_comboBoxFormats->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( PresetsDialog::m_comboBoxFormatsOnText ), NULL, this );
	m_listCtrlItems->Connect( wxEVT_UPDATE_UI, wxUpdateUIEventHandler( PresetsDialog::m_listCtrlItemsOnUpdateUI ), NULL, this );
	this->Connect( m_menuItemItemsDuplicate->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PresetsDialog::m_menuItemItemsDuplicateOnMenuSelection ) );
	this->Connect( m_menuItemItemsMoveUp->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PresetsDialog::m_menuItemItemsMoveUpOnMenuSelection ) );
	this->Connect( m_menuItemItemsMoveDown->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PresetsDialog::m_menuItemItemsMoveDownOnMenuSelection ) );
	this->Connect( m_menuItemItemsDeleteAll->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PresetsDialog::m_menuItemItemsDeleteAllOnMenuSelection ) );
	this->Connect( m_menuItemItemsDelete->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PresetsDialog::m_menuItemItemsDeleteOnMenuSelection ) );
	this->Connect( m_menuItemItemsAdd->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PresetsDialog::m_menuItemItemsAddOnMenuSelection ) );
	m_buttonDuplicate->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PresetsDialog::m_buttonDuplicateOnButtonClick ), NULL, this );
	m_buttonMoveUp->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PresetsDialog::m_buttonMoveUpOnButtonClick ), NULL, this );
	m_buttonMoveDown->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PresetsDialog::m_buttonMoveDownOnButtonClick ), NULL, this );
	m_buttonDeleteAll->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PresetsDialog::m_buttonDeleteAllOnButtonClick ), NULL, this );
	m_buttonDelete->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PresetsDialog::m_buttonDeleteOnButtonClick ), NULL, this );
	m_buttonAdd->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PresetsDialog::m_buttonAddOnButtonClick ), NULL, this );
	m_textCtrlPropertyName->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( PresetsDialog::m_textCtrlPropertyNameOnText ), NULL, this );
	m_textCtrlPropertyOptions->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( PresetsDialog::m_textCtrlPropertyOptionsOnText ), NULL, this );
	m_buttonImport->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PresetsDialog::m_buttonImportOnButtonClick ), NULL, this );
	m_buttonExport->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PresetsDialog::m_buttonExportOnButtonClick ), NULL, this );
	m_buttonOK->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PresetsDialog::m_buttonOKOnButtonClick ), NULL, this );
	m_buttonCancel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PresetsDialog::m_buttonCancelOnButtonClick ), NULL, this );
}

PresetsDialog::~PresetsDialog()
{
	// Disconnect Events
	this->Disconnect( wxEVT_INIT_DIALOG, wxInitDialogEventHandler( PresetsDialog::PresetsDialogOnInitDialog ) );
	m_comboBoxFormats->Disconnect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( PresetsDialog::m_comboBoxFormatsOnCombobox ), NULL, this );
	m_comboBoxFormats->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( PresetsDialog::m_comboBoxFormatsOnText ), NULL, this );
	m_listCtrlItems->Disconnect( wxEVT_UPDATE_UI, wxUpdateUIEventHandler( PresetsDialog::m_listCtrlItemsOnUpdateUI ), NULL, this );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PresetsDialog::m_menuItemItemsDuplicateOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PresetsDialog::m_menuItemItemsMoveUpOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PresetsDialog::m_menuItemItemsMoveDownOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PresetsDialog::m_menuItemItemsDeleteAllOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PresetsDialog::m_menuItemItemsDeleteOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PresetsDialog::m_menuItemItemsAddOnMenuSelection ) );
	m_buttonDuplicate->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PresetsDialog::m_buttonDuplicateOnButtonClick ), NULL, this );
	m_buttonMoveUp->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PresetsDialog::m_buttonMoveUpOnButtonClick ), NULL, this );
	m_buttonMoveDown->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PresetsDialog::m_buttonMoveDownOnButtonClick ), NULL, this );
	m_buttonDeleteAll->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PresetsDialog::m_buttonDeleteAllOnButtonClick ), NULL, this );
	m_buttonDelete->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PresetsDialog::m_buttonDeleteOnButtonClick ), NULL, this );
	m_buttonAdd->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PresetsDialog::m_buttonAddOnButtonClick ), NULL, this );
	m_textCtrlPropertyName->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( PresetsDialog::m_textCtrlPropertyNameOnText ), NULL, this );
	m_textCtrlPropertyOptions->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( PresetsDialog::m_textCtrlPropertyOptionsOnText ), NULL, this );
	m_buttonImport->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PresetsDialog::m_buttonImportOnButtonClick ), NULL, this );
	m_buttonExport->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PresetsDialog::m_buttonExportOnButtonClick ), NULL, this );
	m_buttonOK->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PresetsDialog::m_buttonOKOnButtonClick ), NULL, this );
	m_buttonCancel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PresetsDialog::m_buttonCancelOnButtonClick ), NULL, this );
	
	delete m_menuListItems; 
}

FormatsDialog::FormatsDialog( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizerContent;
	bSizerContent = new wxBoxSizer( wxVERTICAL );
	
	m_panelContent = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerMain;
	bSizerMain = new wxBoxSizer( wxVERTICAL );
	
	m_panelTop = new wxPanel( m_panelContent, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_panelTop->Hide();
	
	wxBoxSizer* bSizerTop;
	bSizerTop = new wxBoxSizer( wxHORIZONTAL );
	
	
	m_panelTop->SetSizer( bSizerTop );
	m_panelTop->Layout();
	bSizerTop->Fit( m_panelTop );
	bSizerMain->Add( m_panelTop, 0, wxEXPAND | wxALL, 5 );
	
	m_panelList = new wxPanel( m_panelContent, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	bSizerList = new wxBoxSizer( wxHORIZONTAL );
	
	m_listCtrlItems = new ItemsList( m_panelList, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_EDIT_LABELS|wxLC_HRULES|wxLC_NO_SORT_HEADER|wxLC_REPORT|wxLC_VIRTUAL|wxLC_VRULES );
	m_menuListItems = new wxMenu();
	wxMenuItem* m_menuItemItemsDuplicate;
	m_menuItemItemsDuplicate = new wxMenuItem( m_menuListItems, wxID_ANY, wxString( _("Du&plicate") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuListItems->Append( m_menuItemItemsDuplicate );
	
	m_menuListItems->AppendSeparator();
	
	wxMenuItem* m_menuItemItemsDeleteAll;
	m_menuItemItemsDeleteAll = new wxMenuItem( m_menuListItems, wxID_ANY, wxString( _("Dele&te All") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuListItems->Append( m_menuItemItemsDeleteAll );
	
	m_menuListItems->AppendSeparator();
	
	wxMenuItem* m_menuItemItemsDelete;
	m_menuItemItemsDelete = new wxMenuItem( m_menuListItems, wxID_ANY, wxString( _("&Delete") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuListItems->Append( m_menuItemItemsDelete );
	
	m_menuListItems->AppendSeparator();
	
	wxMenuItem* m_menuItemItemsAdd;
	m_menuItemItemsAdd = new wxMenuItem( m_menuListItems, wxID_ANY, wxString( _("&Add") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuListItems->Append( m_menuItemItemsAdd );
	
	m_listCtrlItems->Connect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( FormatsDialog::m_listCtrlItemsOnContextMenu ), NULL, this ); 
	
	bSizerList->Add( m_listCtrlItems, 1, wxALL|wxEXPAND, 2 );
	
	wxBoxSizer* bSizerButtons;
	bSizerButtons = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizerButtonsTop;
	bSizerButtonsTop = new wxBoxSizer( wxVERTICAL );
	
	m_buttonDuplicate = new wxButton( m_panelList, wxID_ANY, _("Du&plicate"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerButtonsTop->Add( m_buttonDuplicate, 0, wxALL, 2 );
	
	
	bSizerButtons->Add( bSizerButtonsTop, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizerButtonsMiddle;
	bSizerButtonsMiddle = new wxBoxSizer( wxVERTICAL );
	
	
	bSizerButtons->Add( bSizerButtonsMiddle, 1, wxEXPAND|wxRESERVE_SPACE_EVEN_IF_HIDDEN, 5 );
	
	wxBoxSizer* bSizerButtonsBottom;
	bSizerButtonsBottom = new wxBoxSizer( wxVERTICAL );
	
	m_buttonDeleteAll = new wxButton( m_panelList, wxID_ANY, _("Dele&te All"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerButtonsBottom->Add( m_buttonDeleteAll, 0, wxALL, 2 );
	
	m_buttonDelete = new wxButton( m_panelList, wxID_ANY, _("&Delete"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerButtonsBottom->Add( m_buttonDelete, 0, wxALL, 2 );
	
	m_buttonAdd = new wxButton( m_panelList, wxID_ANY, _("&Add"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerButtonsBottom->Add( m_buttonAdd, 0, wxALL, 2 );
	
	
	bSizerButtons->Add( bSizerButtonsBottom, 0, wxEXPAND, 5 );
	
	
	bSizerList->Add( bSizerButtons, 0, wxEXPAND, 5 );
	
	
	m_panelList->SetSizer( bSizerList );
	m_panelList->Layout();
	bSizerList->Fit( m_panelList );
	bSizerMain->Add( m_panelList, 1, wxEXPAND | wxALL, 5 );
	
	m_panelProperties = new wxPanel( m_panelContent, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerProperties;
	bSizerProperties = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizerPropertiesRow1;
	bSizerPropertiesRow1 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizerPropertyName;
	bSizerPropertyName = new wxBoxSizer( wxVERTICAL );
	
	m_staticTextPropertyName = new wxStaticText( m_panelProperties, wxID_ANY, _("Name:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextPropertyName->Wrap( -1 );
	bSizerPropertyName->Add( m_staticTextPropertyName, 0, wxALL|wxEXPAND, 2 );
	
	m_textCtrlPropertyName = new wxTextCtrl( m_panelProperties, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrlPropertyName->SetValidator( wxTextValidator( wxFILTER_NONE, &m_PropertyName ) );
	
	bSizerPropertyName->Add( m_textCtrlPropertyName, 0, wxALL|wxEXPAND, 2 );
	
	
	bSizerPropertiesRow1->Add( bSizerPropertyName, 2, wxEXPAND, 5 );
	
	wxBoxSizer* bSizerPropertyId;
	bSizerPropertyId = new wxBoxSizer( wxVERTICAL );
	
	m_staticTextPropertyId = new wxStaticText( m_panelProperties, wxID_ANY, _("Id:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextPropertyId->Wrap( -1 );
	bSizerPropertyId->Add( m_staticTextPropertyId, 0, wxALL|wxEXPAND, 2 );
	
	m_textCtrlPropertyId = new wxTextCtrl( m_panelProperties, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrlPropertyId->SetValidator( wxGenericValidator( &m_PropertyId ) );
	
	bSizerPropertyId->Add( m_textCtrlPropertyId, 0, wxALL|wxEXPAND, 2 );
	
	
	bSizerPropertiesRow1->Add( bSizerPropertyId, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizerPropertyPriority;
	bSizerPropertyPriority = new wxBoxSizer( wxVERTICAL );
	
	m_staticTextPropertyPriority = new wxStaticText( m_panelProperties, wxID_ANY, _("Priority:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextPropertyPriority->Wrap( -1 );
	bSizerPropertyPriority->Add( m_staticTextPropertyPriority, 0, wxALL|wxEXPAND, 2 );
	
	m_spinCtrlPropertyPriority = new wxSpinCtrl( m_panelProperties, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 10, 0 );
	bSizerPropertyPriority->Add( m_spinCtrlPropertyPriority, 0, wxALL|wxEXPAND, 2 );
	
	
	bSizerPropertiesRow1->Add( bSizerPropertyPriority, 1, wxEXPAND, 5 );
	
	
	bSizerProperties->Add( bSizerPropertiesRow1, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizerPropertiesRow2;
	bSizerPropertiesRow2 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizerPropertyInputExtensions;
	bSizerPropertyInputExtensions = new wxBoxSizer( wxVERTICAL );
	
	m_staticTextPropertyInputExtensions = new wxStaticText( m_panelProperties, wxID_ANY, _("Input extensions (separated by comma):"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextPropertyInputExtensions->Wrap( -1 );
	bSizerPropertyInputExtensions->Add( m_staticTextPropertyInputExtensions, 0, wxALL|wxEXPAND, 2 );
	
	m_textCtrlPropertyInputExtensions = new wxTextCtrl( m_panelProperties, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrlPropertyInputExtensions->SetValidator( wxTextValidator( wxFILTER_NONE, &m_PropertyInputExtensions ) );
	
	bSizerPropertyInputExtensions->Add( m_textCtrlPropertyInputExtensions, 0, wxALL|wxEXPAND, 2 );
	
	
	bSizerPropertiesRow2->Add( bSizerPropertyInputExtensions, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizerPropertyOutputExtension;
	bSizerPropertyOutputExtension = new wxBoxSizer( wxVERTICAL );
	
	m_staticTextPropertyOutputExtension = new wxStaticText( m_panelProperties, wxID_ANY, _("Output extension:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextPropertyOutputExtension->Wrap( -1 );
	bSizerPropertyOutputExtension->Add( m_staticTextPropertyOutputExtension, 0, wxALL|wxEXPAND, 2 );
	
	m_textCtrlPropertyOutputExtension = new wxTextCtrl( m_panelProperties, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrlPropertyOutputExtension->SetValidator( wxTextValidator( wxFILTER_NONE, &m_PropertyOutputExtension ) );
	
	bSizerPropertyOutputExtension->Add( m_textCtrlPropertyOutputExtension, 0, wxALL|wxEXPAND, 2 );
	
	
	bSizerPropertiesRow2->Add( bSizerPropertyOutputExtension, 1, wxEXPAND, 5 );
	
	
	bSizerProperties->Add( bSizerPropertiesRow2, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizerPropertiesRow3;
	bSizerPropertiesRow3 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizerPropertyType;
	bSizerPropertyType = new wxBoxSizer( wxVERTICAL );
	
	m_staticTextPropertyType = new wxStaticText( m_panelProperties, wxID_ANY, _("Type:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextPropertyType->Wrap( -1 );
	bSizerPropertyType->Add( m_staticTextPropertyType, 0, wxALL|wxEXPAND, 2 );
	
	wxBoxSizer* bSizerPropertyTypes;
	bSizerPropertyTypes = new wxBoxSizer( wxHORIZONTAL );
	
	m_radioBtnTypeEncoder = new wxRadioButton( m_panelProperties, wxID_ANY, _("Encoder"), wxDefaultPosition, wxDefaultSize, wxRB_GROUP );
	m_radioBtnTypeEncoder->SetValidator( wxGenericValidator( &m_PropertyTypeEncoder ) );
	
	bSizerPropertyTypes->Add( m_radioBtnTypeEncoder, 1, wxALL, 6 );
	
	m_radioBtnTypeDecoder = new wxRadioButton( m_panelProperties, wxID_ANY, _("Decoder"), wxDefaultPosition, wxDefaultSize, 0 );
	m_radioBtnTypeDecoder->SetValidator( wxGenericValidator( &m_PropertyTypeDecoder ) );
	
	bSizerPropertyTypes->Add( m_radioBtnTypeDecoder, 1, wxALL, 6 );
	
	
	bSizerPropertyType->Add( bSizerPropertyTypes, 1, wxEXPAND, 5 );
	
	
	bSizerPropertiesRow3->Add( bSizerPropertyType, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizerPropertyExitCodeSuccess;
	bSizerPropertyExitCodeSuccess = new wxBoxSizer( wxVERTICAL );
	
	m_staticTextPropertyExitCodeSuccess = new wxStaticText( m_panelProperties, wxID_ANY, _("Exit code on success:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextPropertyExitCodeSuccess->Wrap( -1 );
	bSizerPropertyExitCodeSuccess->Add( m_staticTextPropertyExitCodeSuccess, 0, wxALL|wxEXPAND, 2 );
	
	m_textCtrlPropertyExitCodeSuccess = new wxTextCtrl( m_panelProperties, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrlPropertyExitCodeSuccess->SetValidator( wxGenericValidator( &m_PropertyExitCode ) );
	
	bSizerPropertyExitCodeSuccess->Add( m_textCtrlPropertyExitCodeSuccess, 0, wxALL|wxEXPAND, 2 );
	
	
	bSizerPropertiesRow3->Add( bSizerPropertyExitCodeSuccess, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizerPropertyDefaultPreset;
	bSizerPropertyDefaultPreset = new wxBoxSizer( wxVERTICAL );
	
	m_staticTextPropertyDefaultPreset = new wxStaticText( m_panelProperties, wxID_ANY, _("Default preset:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextPropertyDefaultPreset->Wrap( -1 );
	bSizerPropertyDefaultPreset->Add( m_staticTextPropertyDefaultPreset, 0, wxALL|wxEXPAND, 2 );
	
	wxBoxSizer* bSizerPropertyDefaultPresetEdit;
	bSizerPropertyDefaultPresetEdit = new wxBoxSizer( wxHORIZONTAL );
	
	m_comboBoxDefaultPreset = new wxComboBox( m_panelProperties, wxID_ANY, _("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_DROPDOWN|wxCB_READONLY );
	m_comboBoxDefaultPreset->Append( _("1") );
	m_comboBoxDefaultPreset->Append( _("2") );
	m_comboBoxDefaultPreset->Append( _("3") );
	m_comboBoxDefaultPreset->SetSelection( 0 );
	m_comboBoxDefaultPreset->SetValidator( wxGenericValidator( &m_PropertyDefaultPreset ) );
	
	bSizerPropertyDefaultPresetEdit->Add( m_comboBoxDefaultPreset, 1, wxALL, 2 );
	
	
	bSizerPropertyDefaultPresetEdit->Add( 2, 0, 0, wxEXPAND, 5 );
	
	m_buttonPropertyDefaultPresetEdit = new wxButton( m_panelProperties, wxID_ANY, _("&Edit Presets"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerPropertyDefaultPresetEdit->Add( m_buttonPropertyDefaultPresetEdit, 0, wxALL, 0 );
	
	
	bSizerPropertyDefaultPresetEdit->Add( 2, 0, 0, wxEXPAND, 5 );
	
	
	bSizerPropertyDefaultPreset->Add( bSizerPropertyDefaultPresetEdit, 1, wxEXPAND, 5 );
	
	
	bSizerPropertiesRow3->Add( bSizerPropertyDefaultPreset, 2, wxEXPAND, 5 );
	
	
	bSizerProperties->Add( bSizerPropertiesRow3, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizerPropertiesRow4;
	bSizerPropertiesRow4 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizerPropertyPipes;
	bSizerPropertyPipes = new wxBoxSizer( wxVERTICAL );
	
	m_staticTextPropertyPipes = new wxStaticText( m_panelProperties, wxID_ANY, _("Pipes:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextPropertyPipes->Wrap( -1 );
	bSizerPropertyPipes->Add( m_staticTextPropertyPipes, 0, wxALL|wxEXPAND, 2 );
	
	wxBoxSizer* bSizerPropertyPipesType;
	bSizerPropertyPipesType = new wxBoxSizer( wxHORIZONTAL );
	
	m_checkBoxPropertyPipeInput = new wxCheckBox( m_panelProperties, wxID_ANY, _("Input"), wxDefaultPosition, wxDefaultSize, 0 );
	m_checkBoxPropertyPipeInput->SetValidator( wxGenericValidator( &m_PropertyPipeInput ) );
	
	bSizerPropertyPipesType->Add( m_checkBoxPropertyPipeInput, 1, wxALL, 6 );
	
	m_checkBoxPropertyPipeOutput = new wxCheckBox( m_panelProperties, wxID_ANY, _("Output"), wxDefaultPosition, wxDefaultSize, 0 );
	m_checkBoxPropertyPipeOutput->SetValidator( wxGenericValidator( &m_PropertyPipeOutput ) );
	
	bSizerPropertyPipesType->Add( m_checkBoxPropertyPipeOutput, 1, wxALL, 6 );
	
	
	bSizerPropertyPipes->Add( bSizerPropertyPipesType, 1, wxEXPAND, 5 );
	
	
	bSizerPropertiesRow4->Add( bSizerPropertyPipes, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizerPropertyFunction;
	bSizerPropertyFunction = new wxBoxSizer( wxVERTICAL );
	
	m_staticTextPropertyFunction = new wxStaticText( m_panelProperties, wxID_ANY, _("Progress function:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextPropertyFunction->Wrap( -1 );
	bSizerPropertyFunction->Add( m_staticTextPropertyFunction, 0, wxALL|wxEXPAND, 2 );
	
	wxBoxSizer* bSizerPropertyFunctionBrowse;
	bSizerPropertyFunctionBrowse = new wxBoxSizer( wxHORIZONTAL );
	
	m_textCtrlPropertyFunction = new wxTextCtrl( m_panelProperties, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrlPropertyFunction->SetValidator( wxTextValidator( wxFILTER_NONE, &m_PropertyFunction ) );
	
	bSizerPropertyFunctionBrowse->Add( m_textCtrlPropertyFunction, 1, wxALL|wxEXPAND, 2 );
	
	
	bSizerPropertyFunctionBrowse->Add( 2, 0, 0, wxEXPAND, 5 );
	
	m_buttonPropertyFunctionBrowse = new wxButton( m_panelProperties, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerPropertyFunctionBrowse->Add( m_buttonPropertyFunctionBrowse, 0, wxALL, 0 );
	
	
	bSizerPropertyFunctionBrowse->Add( 2, 0, 0, wxEXPAND, 5 );
	
	
	bSizerPropertyFunction->Add( bSizerPropertyFunctionBrowse, 1, wxEXPAND, 5 );
	
	
	bSizerPropertiesRow4->Add( bSizerPropertyFunction, 3, wxEXPAND, 5 );
	
	
	bSizerProperties->Add( bSizerPropertiesRow4, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizerPropertiesRow5;
	bSizerPropertiesRow5 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizerPropertyNameTemplate;
	bSizerPropertyNameTemplate = new wxBoxSizer( wxVERTICAL );
	
	m_staticTextPropertyTemplate = new wxStaticText( m_panelProperties, wxID_ANY, _("Command-line template:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextPropertyTemplate->Wrap( -1 );
	bSizerPropertyNameTemplate->Add( m_staticTextPropertyTemplate, 0, wxALL|wxEXPAND, 2 );
	
	m_textCtrlPropertyTemplate = new wxTextCtrl( m_panelProperties, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrlPropertyTemplate->SetValidator( wxTextValidator( wxFILTER_NONE, &m_PropertyTemplate ) );
	
	bSizerPropertyNameTemplate->Add( m_textCtrlPropertyTemplate, 0, wxALL|wxEXPAND, 2 );
	
	
	bSizerPropertiesRow5->Add( bSizerPropertyNameTemplate, 1, wxEXPAND, 5 );
	
	
	bSizerProperties->Add( bSizerPropertiesRow5, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizerPropertiesRow6;
	bSizerPropertiesRow6 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizerPropertyPath;
	bSizerPropertyPath = new wxBoxSizer( wxVERTICAL );
	
	m_staticTextPropertyPath = new wxStaticText( m_panelProperties, wxID_ANY, _("Command-line executable path:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextPropertyPath->Wrap( -1 );
	bSizerPropertyPath->Add( m_staticTextPropertyPath, 0, wxALL|wxEXPAND, 2 );
	
	wxBoxSizer* bSizerPropertyPathBrowse;
	bSizerPropertyPathBrowse = new wxBoxSizer( wxHORIZONTAL );
	
	m_textCtrlPropertyPath = new wxTextCtrl( m_panelProperties, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrlPropertyPath->SetValidator( wxTextValidator( wxFILTER_NONE, &m_PropertyPath ) );
	
	bSizerPropertyPathBrowse->Add( m_textCtrlPropertyPath, 1, wxALL|wxEXPAND, 2 );
	
	
	bSizerPropertyPathBrowse->Add( 2, 0, 0, wxEXPAND, 5 );
	
	m_buttonPropertyPathBrowse = new wxButton( m_panelProperties, wxID_ANY, _("&..."), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerPropertyPathBrowse->Add( m_buttonPropertyPathBrowse, 0, wxALL, 0 );
	
	
	bSizerPropertyPathBrowse->Add( 2, 0, 0, wxEXPAND, 5 );
	
	
	bSizerPropertyPath->Add( bSizerPropertyPathBrowse, 1, wxEXPAND, 5 );
	
	
	bSizerPropertiesRow6->Add( bSizerPropertyPath, 1, wxEXPAND, 5 );
	
	
	bSizerProperties->Add( bSizerPropertiesRow6, 1, wxEXPAND, 5 );
	
	
	m_panelProperties->SetSizer( bSizerProperties );
	m_panelProperties->Layout();
	bSizerProperties->Fit( m_panelProperties );
	bSizerMain->Add( m_panelProperties, 0, wxEXPAND | wxALL, 5 );
	
	m_panelBottom = new wxPanel( m_panelContent, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerBottom;
	bSizerBottom = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizerBottomLeft;
	bSizerBottomLeft = new wxBoxSizer( wxHORIZONTAL );
	
	m_buttonImport = new wxButton( m_panelBottom, wxID_ANY, _("&Import"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerBottomLeft->Add( m_buttonImport, 0, wxALL, 2 );
	
	m_buttonExport = new wxButton( m_panelBottom, wxID_ANY, _("E&xport"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerBottomLeft->Add( m_buttonExport, 0, wxALL, 2 );
	
	
	bSizerBottom->Add( bSizerBottomLeft, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizerBottomMiddle;
	bSizerBottomMiddle = new wxBoxSizer( wxHORIZONTAL );
	
	
	bSizerBottom->Add( bSizerBottomMiddle, 1, wxEXPAND|wxRESERVE_SPACE_EVEN_IF_HIDDEN, 5 );
	
	wxBoxSizer* bSizerBottomRight;
	bSizerBottomRight = new wxBoxSizer( wxHORIZONTAL );
	
	m_buttonOK = new wxButton( m_panelBottom, wxID_ANY, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerBottomRight->Add( m_buttonOK, 0, wxALL, 2 );
	
	m_buttonCancel = new wxButton( m_panelBottom, wxID_ANY, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonCancel->SetDefault(); 
	bSizerBottomRight->Add( m_buttonCancel, 0, wxALL, 2 );
	
	
	bSizerBottom->Add( bSizerBottomRight, 0, wxEXPAND, 5 );
	
	
	m_panelBottom->SetSizer( bSizerBottom );
	m_panelBottom->Layout();
	bSizerBottom->Fit( m_panelBottom );
	bSizerMain->Add( m_panelBottom, 0, wxEXPAND | wxALL, 5 );
	
	
	m_panelContent->SetSizer( bSizerMain );
	m_panelContent->Layout();
	bSizerMain->Fit( m_panelContent );
	bSizerContent->Add( m_panelContent, 1, wxEXPAND | wxALL, 0 );
	
	
	this->SetSizer( bSizerContent );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_INIT_DIALOG, wxInitDialogEventHandler( FormatsDialog::FormatsDialogOnInitDialog ) );
	m_listCtrlItems->Connect( wxEVT_UPDATE_UI, wxUpdateUIEventHandler( FormatsDialog::m_listCtrlItemsOnUpdateUI ), NULL, this );
	this->Connect( m_menuItemItemsDuplicate->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( FormatsDialog::m_menuItemItemsDuplicateOnMenuSelection ) );
	this->Connect( m_menuItemItemsDeleteAll->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( FormatsDialog::m_menuItemItemsDeleteAllOnMenuSelection ) );
	this->Connect( m_menuItemItemsDelete->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( FormatsDialog::m_menuItemItemsDeleteOnMenuSelection ) );
	this->Connect( m_menuItemItemsAdd->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( FormatsDialog::m_menuItemItemsAddOnMenuSelection ) );
	m_buttonDuplicate->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormatsDialog::m_buttonDuplicateOnButtonClick ), NULL, this );
	m_buttonDeleteAll->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormatsDialog::m_buttonDeleteAllOnButtonClick ), NULL, this );
	m_buttonDelete->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormatsDialog::m_buttonDeleteOnButtonClick ), NULL, this );
	m_buttonAdd->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormatsDialog::m_buttonAddOnButtonClick ), NULL, this );
	m_textCtrlPropertyName->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( FormatsDialog::m_textCtrlPropertyNameOnText ), NULL, this );
	m_textCtrlPropertyId->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( FormatsDialog::m_textCtrlPropertyIdOnText ), NULL, this );
	m_spinCtrlPropertyPriority->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( FormatsDialog::m_spinCtrlPropertyPriorityOnSpinCtrl ), NULL, this );
	m_spinCtrlPropertyPriority->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( FormatsDialog::m_spinCtrlPropertyPriorityOnSpinCtrlText ), NULL, this );
	m_textCtrlPropertyInputExtensions->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( FormatsDialog::m_textCtrlPropertyInputExtensionsOnText ), NULL, this );
	m_textCtrlPropertyOutputExtension->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( FormatsDialog::m_textCtrlPropertyOutputExtensionOnText ), NULL, this );
	m_radioBtnTypeEncoder->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( FormatsDialog::m_radioBtnTypeEncoderOnRadioButton ), NULL, this );
	m_radioBtnTypeDecoder->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( FormatsDialog::m_radioBtnTypeDecoderOnRadioButton ), NULL, this );
	m_textCtrlPropertyExitCodeSuccess->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( FormatsDialog::m_textCtrlPropertyExitCodeSuccessOnText ), NULL, this );
	m_comboBoxDefaultPreset->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( FormatsDialog::m_comboBoxDefaultPresetOnCombobox ), NULL, this );
	m_comboBoxDefaultPreset->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( FormatsDialog::m_comboBoxDefaultPresetOnText ), NULL, this );
	m_buttonPropertyDefaultPresetEdit->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormatsDialog::m_buttonPropertyDefaultPresetEditOnButtonClick ), NULL, this );
	m_checkBoxPropertyPipeInput->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( FormatsDialog::m_checkBoxPropertyPipeInputOnCheckBox ), NULL, this );
	m_checkBoxPropertyPipeOutput->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( FormatsDialog::m_checkBoxPropertyPipeOutputOnCheckBox ), NULL, this );
	m_textCtrlPropertyFunction->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( FormatsDialog::m_textCtrlPropertyFunctionOnText ), NULL, this );
	m_buttonPropertyFunctionBrowse->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormatsDialog::m_buttonPropertyFunctionBrowseOnButtonClick ), NULL, this );
	m_textCtrlPropertyTemplate->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( FormatsDialog::m_textCtrlPropertyTemplateOnText ), NULL, this );
	m_textCtrlPropertyPath->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( FormatsDialog::m_textCtrlPropertyPathOnText ), NULL, this );
	m_buttonPropertyPathBrowse->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormatsDialog::m_buttonPropertyPathBrowseOnButtonClick ), NULL, this );
	m_buttonImport->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormatsDialog::m_buttonImportOnButtonClick ), NULL, this );
	m_buttonExport->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormatsDialog::m_buttonExportOnButtonClick ), NULL, this );
	m_buttonOK->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormatsDialog::m_buttonOKOnButtonClick ), NULL, this );
	m_buttonCancel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormatsDialog::m_buttonCancelOnButtonClick ), NULL, this );
}

FormatsDialog::~FormatsDialog()
{
	// Disconnect Events
	this->Disconnect( wxEVT_INIT_DIALOG, wxInitDialogEventHandler( FormatsDialog::FormatsDialogOnInitDialog ) );
	m_listCtrlItems->Disconnect( wxEVT_UPDATE_UI, wxUpdateUIEventHandler( FormatsDialog::m_listCtrlItemsOnUpdateUI ), NULL, this );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( FormatsDialog::m_menuItemItemsDuplicateOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( FormatsDialog::m_menuItemItemsDeleteAllOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( FormatsDialog::m_menuItemItemsDeleteOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( FormatsDialog::m_menuItemItemsAddOnMenuSelection ) );
	m_buttonDuplicate->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormatsDialog::m_buttonDuplicateOnButtonClick ), NULL, this );
	m_buttonDeleteAll->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormatsDialog::m_buttonDeleteAllOnButtonClick ), NULL, this );
	m_buttonDelete->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormatsDialog::m_buttonDeleteOnButtonClick ), NULL, this );
	m_buttonAdd->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormatsDialog::m_buttonAddOnButtonClick ), NULL, this );
	m_textCtrlPropertyName->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( FormatsDialog::m_textCtrlPropertyNameOnText ), NULL, this );
	m_textCtrlPropertyId->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( FormatsDialog::m_textCtrlPropertyIdOnText ), NULL, this );
	m_spinCtrlPropertyPriority->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( FormatsDialog::m_spinCtrlPropertyPriorityOnSpinCtrl ), NULL, this );
	m_spinCtrlPropertyPriority->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( FormatsDialog::m_spinCtrlPropertyPriorityOnSpinCtrlText ), NULL, this );
	m_textCtrlPropertyInputExtensions->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( FormatsDialog::m_textCtrlPropertyInputExtensionsOnText ), NULL, this );
	m_textCtrlPropertyOutputExtension->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( FormatsDialog::m_textCtrlPropertyOutputExtensionOnText ), NULL, this );
	m_radioBtnTypeEncoder->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( FormatsDialog::m_radioBtnTypeEncoderOnRadioButton ), NULL, this );
	m_radioBtnTypeDecoder->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( FormatsDialog::m_radioBtnTypeDecoderOnRadioButton ), NULL, this );
	m_textCtrlPropertyExitCodeSuccess->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( FormatsDialog::m_textCtrlPropertyExitCodeSuccessOnText ), NULL, this );
	m_comboBoxDefaultPreset->Disconnect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( FormatsDialog::m_comboBoxDefaultPresetOnCombobox ), NULL, this );
	m_comboBoxDefaultPreset->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( FormatsDialog::m_comboBoxDefaultPresetOnText ), NULL, this );
	m_buttonPropertyDefaultPresetEdit->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormatsDialog::m_buttonPropertyDefaultPresetEditOnButtonClick ), NULL, this );
	m_checkBoxPropertyPipeInput->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( FormatsDialog::m_checkBoxPropertyPipeInputOnCheckBox ), NULL, this );
	m_checkBoxPropertyPipeOutput->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( FormatsDialog::m_checkBoxPropertyPipeOutputOnCheckBox ), NULL, this );
	m_textCtrlPropertyFunction->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( FormatsDialog::m_textCtrlPropertyFunctionOnText ), NULL, this );
	m_buttonPropertyFunctionBrowse->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormatsDialog::m_buttonPropertyFunctionBrowseOnButtonClick ), NULL, this );
	m_textCtrlPropertyTemplate->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( FormatsDialog::m_textCtrlPropertyTemplateOnText ), NULL, this );
	m_textCtrlPropertyPath->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( FormatsDialog::m_textCtrlPropertyPathOnText ), NULL, this );
	m_buttonPropertyPathBrowse->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormatsDialog::m_buttonPropertyPathBrowseOnButtonClick ), NULL, this );
	m_buttonImport->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormatsDialog::m_buttonImportOnButtonClick ), NULL, this );
	m_buttonExport->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormatsDialog::m_buttonExportOnButtonClick ), NULL, this );
	m_buttonOK->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormatsDialog::m_buttonOKOnButtonClick ), NULL, this );
	m_buttonCancel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FormatsDialog::m_buttonCancelOnButtonClick ), NULL, this );
	
	delete m_menuListItems; 
}

ToolsDialog::ToolsDialog( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizerContent;
	bSizerContent = new wxBoxSizer( wxVERTICAL );
	
	m_panelContent = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerMain;
	bSizerMain = new wxBoxSizer( wxVERTICAL );
	
	m_panelTop = new wxPanel( m_panelContent, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerTop;
	bSizerTop = new wxBoxSizer( wxHORIZONTAL );
	
	m_buttonDownloadSelected = new wxButton( m_panelTop, wxID_ANY, _("Do&wnload Selected"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerTop->Add( m_buttonDownloadSelected, 0, wxALL, 2 );
	
	m_buttonSetSelectedPaths = new wxButton( m_panelTop, wxID_ANY, _("S&et Selected Paths"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerTop->Add( m_buttonSetSelectedPaths, 0, wxALL, 2 );
	
	m_buttonSetX86Paths = new wxButton( m_panelTop, wxID_ANY, _("Set x&86 Paths"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerTop->Add( m_buttonSetX86Paths, 0, wxALL, 2 );
	
	m_buttonSetX64Paths = new wxButton( m_panelTop, wxID_ANY, _("Set x&64 Paths"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerTop->Add( m_buttonSetX64Paths, 0, wxALL, 2 );
	
	
	m_panelTop->SetSizer( bSizerTop );
	m_panelTop->Layout();
	bSizerTop->Fit( m_panelTop );
	bSizerMain->Add( m_panelTop, 0, wxEXPAND | wxALL, 5 );
	
	m_panelList = new wxPanel( m_panelContent, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	bSizerList = new wxBoxSizer( wxHORIZONTAL );
	
	m_listCtrlItems = new ItemsList( m_panelList, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_EDIT_LABELS|wxLC_HRULES|wxLC_NO_SORT_HEADER|wxLC_REPORT|wxLC_VIRTUAL|wxLC_VRULES );
	m_menuListItems = new wxMenu();
	wxMenuItem* m_menuItemItemsDuplicate;
	m_menuItemItemsDuplicate = new wxMenuItem( m_menuListItems, wxID_ANY, wxString( _("Du&plicate") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuListItems->Append( m_menuItemItemsDuplicate );
	
	m_menuListItems->AppendSeparator();
	
	wxMenuItem* m_menuItemItemsDeleteAll;
	m_menuItemItemsDeleteAll = new wxMenuItem( m_menuListItems, wxID_ANY, wxString( _("Dele&te All") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuListItems->Append( m_menuItemItemsDeleteAll );
	
	m_menuListItems->AppendSeparator();
	
	wxMenuItem* m_menuItemItemsDelete;
	m_menuItemItemsDelete = new wxMenuItem( m_menuListItems, wxID_ANY, wxString( _("&Delete") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuListItems->Append( m_menuItemItemsDelete );
	
	m_menuListItems->AppendSeparator();
	
	wxMenuItem* m_menuItemItemsAdd;
	m_menuItemItemsAdd = new wxMenuItem( m_menuListItems, wxID_ANY, wxString( _("&Add") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuListItems->Append( m_menuItemItemsAdd );
	
	m_listCtrlItems->Connect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( ToolsDialog::m_listCtrlItemsOnContextMenu ), NULL, this ); 
	
	bSizerList->Add( m_listCtrlItems, 1, wxALL|wxEXPAND, 2 );
	
	wxBoxSizer* bSizerButtons;
	bSizerButtons = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizerButtonsTop;
	bSizerButtonsTop = new wxBoxSizer( wxVERTICAL );
	
	m_buttonDuplicate = new wxButton( m_panelList, wxID_ANY, _("Du&plicate"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerButtonsTop->Add( m_buttonDuplicate, 0, wxALL, 2 );
	
	
	bSizerButtons->Add( bSizerButtonsTop, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizerButtonsMiddle;
	bSizerButtonsMiddle = new wxBoxSizer( wxVERTICAL );
	
	
	bSizerButtons->Add( bSizerButtonsMiddle, 1, wxEXPAND|wxRESERVE_SPACE_EVEN_IF_HIDDEN, 5 );
	
	wxBoxSizer* bSizerButtonsBottom;
	bSizerButtonsBottom = new wxBoxSizer( wxVERTICAL );
	
	m_buttonDeleteAll = new wxButton( m_panelList, wxID_ANY, _("Dele&te All"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerButtonsBottom->Add( m_buttonDeleteAll, 0, wxALL, 2 );
	
	m_buttonDelete = new wxButton( m_panelList, wxID_ANY, _("&Delete"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerButtonsBottom->Add( m_buttonDelete, 0, wxALL, 2 );
	
	m_buttonAdd = new wxButton( m_panelList, wxID_ANY, _("&Add"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerButtonsBottom->Add( m_buttonAdd, 0, wxALL, 2 );
	
	
	bSizerButtons->Add( bSizerButtonsBottom, 0, wxEXPAND, 5 );
	
	
	bSizerList->Add( bSizerButtons, 0, wxEXPAND, 5 );
	
	
	m_panelList->SetSizer( bSizerList );
	m_panelList->Layout();
	bSizerList->Fit( m_panelList );
	bSizerMain->Add( m_panelList, 1, wxEXPAND | wxALL, 5 );
	
	m_panelProperties = new wxPanel( m_panelContent, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerProperties;
	bSizerProperties = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizerPropertiesRow1;
	bSizerPropertiesRow1 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizerPropertyName;
	bSizerPropertyName = new wxBoxSizer( wxVERTICAL );
	
	m_staticTextPropertyName = new wxStaticText( m_panelProperties, wxID_ANY, _("Name:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextPropertyName->Wrap( -1 );
	bSizerPropertyName->Add( m_staticTextPropertyName, 0, wxALL|wxEXPAND, 2 );
	
	m_textCtrlPropertyName = new wxTextCtrl( m_panelProperties, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrlPropertyName->SetValidator( wxTextValidator( wxFILTER_NONE, &m_PropertyName ) );
	
	bSizerPropertyName->Add( m_textCtrlPropertyName, 0, wxALL|wxEXPAND, 2 );
	
	
	bSizerPropertiesRow1->Add( bSizerPropertyName, 2, wxEXPAND, 5 );
	
	wxBoxSizer* bSizerPropertyPlatform;
	bSizerPropertyPlatform = new wxBoxSizer( wxVERTICAL );
	
	m_staticTextPropertyPlatform = new wxStaticText( m_panelProperties, wxID_ANY, _("Platform:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextPropertyPlatform->Wrap( -1 );
	bSizerPropertyPlatform->Add( m_staticTextPropertyPlatform, 0, wxALL|wxEXPAND, 2 );
	
	m_textCtrlPropertyPlatform = new wxTextCtrl( m_panelProperties, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrlPropertyPlatform->SetValidator( wxTextValidator( wxFILTER_NONE, &m_PropertyPlatform ) );
	
	bSizerPropertyPlatform->Add( m_textCtrlPropertyPlatform, 0, wxALL|wxEXPAND, 2 );
	
	
	bSizerPropertiesRow1->Add( bSizerPropertyPlatform, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizerPropertyPriority;
	bSizerPropertyPriority = new wxBoxSizer( wxVERTICAL );
	
	m_staticTextPropertyPriority = new wxStaticText( m_panelProperties, wxID_ANY, _("Priority:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextPropertyPriority->Wrap( -1 );
	bSizerPropertyPriority->Add( m_staticTextPropertyPriority, 0, wxALL|wxEXPAND, 2 );
	
	m_spinCtrlPropertyPriority = new wxSpinCtrl( m_panelProperties, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 10, 0 );
	bSizerPropertyPriority->Add( m_spinCtrlPropertyPriority, 0, wxALL|wxEXPAND, 2 );
	
	
	bSizerPropertiesRow1->Add( bSizerPropertyPriority, 1, wxEXPAND, 5 );
	
	
	bSizerProperties->Add( bSizerPropertiesRow1, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizerPropertiesRow2;
	bSizerPropertiesRow2 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizerPropertyFormats;
	bSizerPropertyFormats = new wxBoxSizer( wxVERTICAL );
	
	m_staticTextPropertyFormats = new wxStaticText( m_panelProperties, wxID_ANY, _("Supported formats (separated by comma):"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextPropertyFormats->Wrap( -1 );
	bSizerPropertyFormats->Add( m_staticTextPropertyFormats, 0, wxALL|wxEXPAND, 2 );
	
	wxBoxSizer* bSizerPropertyDefaultPresetEdit;
	bSizerPropertyDefaultPresetEdit = new wxBoxSizer( wxHORIZONTAL );
	
	m_textCtrlPropertyFormats = new wxTextCtrl( m_panelProperties, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrlPropertyFormats->SetValidator( wxTextValidator( wxFILTER_NONE, &m_PropertyFormats ) );
	
	bSizerPropertyDefaultPresetEdit->Add( m_textCtrlPropertyFormats, 1, wxALL|wxEXPAND, 2 );
	
	
	bSizerPropertyDefaultPresetEdit->Add( 2, 0, 0, wxEXPAND, 5 );
	
	m_buttonPropertyFormatsEdit = new wxButton( m_panelProperties, wxID_ANY, _("Edit For&mats"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerPropertyDefaultPresetEdit->Add( m_buttonPropertyFormatsEdit, 0, wxALL, 0 );
	
	
	bSizerPropertyDefaultPresetEdit->Add( 2, 0, 0, wxEXPAND, 5 );
	
	
	bSizerPropertyFormats->Add( bSizerPropertyDefaultPresetEdit, 1, wxEXPAND, 5 );
	
	
	bSizerPropertiesRow2->Add( bSizerPropertyFormats, 1, wxEXPAND, 5 );
	
	
	bSizerProperties->Add( bSizerPropertiesRow2, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizerPropertiesRow3;
	bSizerPropertiesRow3 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizerPropertyUrl;
	bSizerPropertyUrl = new wxBoxSizer( wxVERTICAL );
	
	m_staticTextPropertyUrl = new wxStaticText( m_panelProperties, wxID_ANY, _("Download URL:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextPropertyUrl->Wrap( -1 );
	bSizerPropertyUrl->Add( m_staticTextPropertyUrl, 0, wxALL|wxEXPAND, 2 );
	
	m_textCtrlPropertyUrl = new wxTextCtrl( m_panelProperties, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrlPropertyUrl->SetValidator( wxTextValidator( wxFILTER_NONE, &m_PropertyUrl ) );
	
	bSizerPropertyUrl->Add( m_textCtrlPropertyUrl, 0, wxALL|wxEXPAND, 2 );
	
	
	bSizerPropertiesRow3->Add( bSizerPropertyUrl, 1, wxEXPAND, 5 );
	
	
	bSizerProperties->Add( bSizerPropertiesRow3, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizerPropertiesRow4;
	bSizerPropertiesRow4 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizerPropertyFile;
	bSizerPropertyFile = new wxBoxSizer( wxVERTICAL );
	
	m_staticTextPropertyFile = new wxStaticText( m_panelProperties, wxID_ANY, _("Download file name:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextPropertyFile->Wrap( -1 );
	bSizerPropertyFile->Add( m_staticTextPropertyFile, 0, wxALL|wxEXPAND, 2 );
	
	m_textCtrlPropertyFile = new wxTextCtrl( m_panelProperties, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrlPropertyFile->SetValidator( wxTextValidator( wxFILTER_NONE, &m_PropertyFile ) );
	
	bSizerPropertyFile->Add( m_textCtrlPropertyFile, 0, wxALL|wxEXPAND, 2 );
	
	
	bSizerPropertiesRow4->Add( bSizerPropertyFile, 1, wxEXPAND, 5 );
	
	
	bSizerProperties->Add( bSizerPropertiesRow4, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizerPropertiesRow5;
	bSizerPropertiesRow5 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizerPropertyExtract;
	bSizerPropertyExtract = new wxBoxSizer( wxVERTICAL );
	
	m_staticTextPropertyExtract = new wxStaticText( m_panelProperties, wxID_ANY, _("Extract method:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextPropertyExtract->Wrap( -1 );
	bSizerPropertyExtract->Add( m_staticTextPropertyExtract, 0, wxALL|wxEXPAND, 2 );
	
	m_textCtrlPropertyExtract = new wxTextCtrl( m_panelProperties, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrlPropertyExtract->SetValidator( wxTextValidator( wxFILTER_NONE, &m_PropertyExtract ) );
	
	bSizerPropertyExtract->Add( m_textCtrlPropertyExtract, 0, wxALL|wxEXPAND, 2 );
	
	
	bSizerPropertiesRow5->Add( bSizerPropertyExtract, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizerPropertyPath;
	bSizerPropertyPath = new wxBoxSizer( wxVERTICAL );
	
	m_staticTextPropertyPath = new wxStaticText( m_panelProperties, wxID_ANY, _("Extract path:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextPropertyPath->Wrap( -1 );
	bSizerPropertyPath->Add( m_staticTextPropertyPath, 0, wxALL|wxEXPAND, 2 );
	
	m_textCtrlPropertyPath = new wxTextCtrl( m_panelProperties, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrlPropertyPath->SetValidator( wxTextValidator( wxFILTER_NONE, &m_PropertyPath ) );
	
	bSizerPropertyPath->Add( m_textCtrlPropertyPath, 0, wxALL|wxEXPAND, 2 );
	
	
	bSizerPropertiesRow5->Add( bSizerPropertyPath, 1, wxEXPAND, 5 );
	
	
	bSizerProperties->Add( bSizerPropertiesRow5, 1, wxEXPAND, 5 );
	
	
	m_panelProperties->SetSizer( bSizerProperties );
	m_panelProperties->Layout();
	bSizerProperties->Fit( m_panelProperties );
	bSizerMain->Add( m_panelProperties, 0, wxEXPAND | wxALL, 5 );
	
	m_panelBottom = new wxPanel( m_panelContent, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerBottom;
	bSizerBottom = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizerBottomLeft;
	bSizerBottomLeft = new wxBoxSizer( wxHORIZONTAL );
	
	m_buttonImport = new wxButton( m_panelBottom, wxID_ANY, _("&Import"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerBottomLeft->Add( m_buttonImport, 0, wxALL, 2 );
	
	m_buttonExport = new wxButton( m_panelBottom, wxID_ANY, _("E&xport"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerBottomLeft->Add( m_buttonExport, 0, wxALL, 2 );
	
	
	bSizerBottom->Add( bSizerBottomLeft, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizerBottomMiddle;
	bSizerBottomMiddle = new wxBoxSizer( wxHORIZONTAL );
	
	
	bSizerBottom->Add( bSizerBottomMiddle, 1, wxEXPAND|wxRESERVE_SPACE_EVEN_IF_HIDDEN, 5 );
	
	wxBoxSizer* bSizerBottomRight;
	bSizerBottomRight = new wxBoxSizer( wxHORIZONTAL );
	
	m_buttonOK = new wxButton( m_panelBottom, wxID_ANY, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerBottomRight->Add( m_buttonOK, 0, wxALL, 2 );
	
	m_buttonCancel = new wxButton( m_panelBottom, wxID_ANY, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonCancel->SetDefault(); 
	bSizerBottomRight->Add( m_buttonCancel, 0, wxALL, 2 );
	
	
	bSizerBottom->Add( bSizerBottomRight, 0, wxEXPAND, 5 );
	
	
	m_panelBottom->SetSizer( bSizerBottom );
	m_panelBottom->Layout();
	bSizerBottom->Fit( m_panelBottom );
	bSizerMain->Add( m_panelBottom, 0, wxEXPAND | wxALL, 5 );
	
	
	m_panelContent->SetSizer( bSizerMain );
	m_panelContent->Layout();
	bSizerMain->Fit( m_panelContent );
	bSizerContent->Add( m_panelContent, 1, wxEXPAND | wxALL, 0 );
	
	
	this->SetSizer( bSizerContent );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_INIT_DIALOG, wxInitDialogEventHandler( ToolsDialog::ToolsDialogOnInitDialog ) );
	m_buttonDownloadSelected->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ToolsDialog::m_buttonDownloadSelectedOnButtonClick ), NULL, this );
	m_buttonSetSelectedPaths->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ToolsDialog::m_buttonSetSelectedPathsOnButtonClick ), NULL, this );
	m_buttonSetX86Paths->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ToolsDialog::m_buttonSetX86PathsOnButtonClick ), NULL, this );
	m_buttonSetX64Paths->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ToolsDialog::m_buttonSetX64PathsOnButtonClick ), NULL, this );
	m_listCtrlItems->Connect( wxEVT_UPDATE_UI, wxUpdateUIEventHandler( ToolsDialog::m_listCtrlItemsOnUpdateUI ), NULL, this );
	this->Connect( m_menuItemItemsDuplicate->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( ToolsDialog::m_menuItemItemsDuplicateOnMenuSelection ) );
	this->Connect( m_menuItemItemsDeleteAll->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( ToolsDialog::m_menuItemItemsDeleteAllOnMenuSelection ) );
	this->Connect( m_menuItemItemsDelete->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( ToolsDialog::m_menuItemItemsDeleteOnMenuSelection ) );
	this->Connect( m_menuItemItemsAdd->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( ToolsDialog::m_menuItemItemsAddOnMenuSelection ) );
	m_buttonDuplicate->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ToolsDialog::m_buttonDuplicateOnButtonClick ), NULL, this );
	m_buttonDeleteAll->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ToolsDialog::m_buttonDeleteAllOnButtonClick ), NULL, this );
	m_buttonDelete->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ToolsDialog::m_buttonDeleteOnButtonClick ), NULL, this );
	m_buttonAdd->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ToolsDialog::m_buttonAddOnButtonClick ), NULL, this );
	m_textCtrlPropertyName->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( ToolsDialog::m_textCtrlPropertyNameOnText ), NULL, this );
	m_textCtrlPropertyPlatform->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( ToolsDialog::m_textCtrlPropertyPlatformOnText ), NULL, this );
	m_spinCtrlPropertyPriority->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( ToolsDialog::m_spinCtrlPropertyPriorityOnSpinCtrl ), NULL, this );
	m_spinCtrlPropertyPriority->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( ToolsDialog::m_spinCtrlPropertyPriorityOnSpinCtrlText ), NULL, this );
	m_textCtrlPropertyFormats->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( ToolsDialog::m_textCtrlPropertyFormatsOnText ), NULL, this );
	m_buttonPropertyFormatsEdit->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ToolsDialog::m_buttonPropertyFormatsEditOnButtonClick ), NULL, this );
	m_textCtrlPropertyUrl->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( ToolsDialog::m_textCtrlPropertyUrlOnText ), NULL, this );
	m_textCtrlPropertyFile->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( ToolsDialog::m_textCtrlPropertyFileOnText ), NULL, this );
	m_textCtrlPropertyExtract->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( ToolsDialog::m_textCtrlPropertyExtractOnText ), NULL, this );
	m_textCtrlPropertyPath->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( ToolsDialog::m_textCtrlPropertyPathOnText ), NULL, this );
	m_buttonImport->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ToolsDialog::m_buttonImportOnButtonClick ), NULL, this );
	m_buttonExport->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ToolsDialog::m_buttonExportOnButtonClick ), NULL, this );
	m_buttonOK->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ToolsDialog::m_buttonOKOnButtonClick ), NULL, this );
	m_buttonCancel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ToolsDialog::m_buttonCancelOnButtonClick ), NULL, this );
}

ToolsDialog::~ToolsDialog()
{
	// Disconnect Events
	this->Disconnect( wxEVT_INIT_DIALOG, wxInitDialogEventHandler( ToolsDialog::ToolsDialogOnInitDialog ) );
	m_buttonDownloadSelected->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ToolsDialog::m_buttonDownloadSelectedOnButtonClick ), NULL, this );
	m_buttonSetSelectedPaths->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ToolsDialog::m_buttonSetSelectedPathsOnButtonClick ), NULL, this );
	m_buttonSetX86Paths->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ToolsDialog::m_buttonSetX86PathsOnButtonClick ), NULL, this );
	m_buttonSetX64Paths->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ToolsDialog::m_buttonSetX64PathsOnButtonClick ), NULL, this );
	m_listCtrlItems->Disconnect( wxEVT_UPDATE_UI, wxUpdateUIEventHandler( ToolsDialog::m_listCtrlItemsOnUpdateUI ), NULL, this );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( ToolsDialog::m_menuItemItemsDuplicateOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( ToolsDialog::m_menuItemItemsDeleteAllOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( ToolsDialog::m_menuItemItemsDeleteOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( ToolsDialog::m_menuItemItemsAddOnMenuSelection ) );
	m_buttonDuplicate->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ToolsDialog::m_buttonDuplicateOnButtonClick ), NULL, this );
	m_buttonDeleteAll->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ToolsDialog::m_buttonDeleteAllOnButtonClick ), NULL, this );
	m_buttonDelete->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ToolsDialog::m_buttonDeleteOnButtonClick ), NULL, this );
	m_buttonAdd->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ToolsDialog::m_buttonAddOnButtonClick ), NULL, this );
	m_textCtrlPropertyName->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( ToolsDialog::m_textCtrlPropertyNameOnText ), NULL, this );
	m_textCtrlPropertyPlatform->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( ToolsDialog::m_textCtrlPropertyPlatformOnText ), NULL, this );
	m_spinCtrlPropertyPriority->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( ToolsDialog::m_spinCtrlPropertyPriorityOnSpinCtrl ), NULL, this );
	m_spinCtrlPropertyPriority->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( ToolsDialog::m_spinCtrlPropertyPriorityOnSpinCtrlText ), NULL, this );
	m_textCtrlPropertyFormats->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( ToolsDialog::m_textCtrlPropertyFormatsOnText ), NULL, this );
	m_buttonPropertyFormatsEdit->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ToolsDialog::m_buttonPropertyFormatsEditOnButtonClick ), NULL, this );
	m_textCtrlPropertyUrl->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( ToolsDialog::m_textCtrlPropertyUrlOnText ), NULL, this );
	m_textCtrlPropertyFile->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( ToolsDialog::m_textCtrlPropertyFileOnText ), NULL, this );
	m_textCtrlPropertyExtract->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( ToolsDialog::m_textCtrlPropertyExtractOnText ), NULL, this );
	m_textCtrlPropertyPath->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( ToolsDialog::m_textCtrlPropertyPathOnText ), NULL, this );
	m_buttonImport->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ToolsDialog::m_buttonImportOnButtonClick ), NULL, this );
	m_buttonExport->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ToolsDialog::m_buttonExportOnButtonClick ), NULL, this );
	m_buttonOK->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ToolsDialog::m_buttonOKOnButtonClick ), NULL, this );
	m_buttonCancel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ToolsDialog::m_buttonCancelOnButtonClick ), NULL, this );
	
	delete m_menuListItems; 
}

PathsDialog::PathsDialog( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizerContent;
	bSizerContent = new wxBoxSizer( wxVERTICAL );
	
	m_panelContent = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerMain;
	bSizerMain = new wxBoxSizer( wxVERTICAL );
	
	m_panelTop = new wxPanel( m_panelContent, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_panelTop->Hide();
	
	wxBoxSizer* bSizerTop;
	bSizerTop = new wxBoxSizer( wxHORIZONTAL );
	
	
	m_panelTop->SetSizer( bSizerTop );
	m_panelTop->Layout();
	bSizerTop->Fit( m_panelTop );
	bSizerMain->Add( m_panelTop, 0, wxEXPAND | wxALL, 5 );
	
	m_panelList = new wxPanel( m_panelContent, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	bSizerList = new wxBoxSizer( wxHORIZONTAL );
	
	m_listCtrlItems = new ItemsList( m_panelList, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_EDIT_LABELS|wxLC_HRULES|wxLC_REPORT|wxLC_VIRTUAL|wxLC_VRULES );
	m_menuListItems = new wxMenu();
	wxMenuItem* m_menuItemItemsDuplicate;
	m_menuItemItemsDuplicate = new wxMenuItem( m_menuListItems, wxID_ANY, wxString( _("Du&plicate") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuListItems->Append( m_menuItemItemsDuplicate );
	
	m_menuListItems->AppendSeparator();
	
	wxMenuItem* m_menuItemItemsMoveUp;
	m_menuItemItemsMoveUp = new wxMenuItem( m_menuListItems, wxID_ANY, wxString( _("move &Up") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuListItems->Append( m_menuItemItemsMoveUp );
	
	wxMenuItem* m_menuItemItemsMoveDown;
	m_menuItemItemsMoveDown = new wxMenuItem( m_menuListItems, wxID_ANY, wxString( _("move Dow&n") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuListItems->Append( m_menuItemItemsMoveDown );
	
	m_menuListItems->AppendSeparator();
	
	wxMenuItem* m_menuItemItemsDeleteAll;
	m_menuItemItemsDeleteAll = new wxMenuItem( m_menuListItems, wxID_ANY, wxString( _("Dele&te All") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuListItems->Append( m_menuItemItemsDeleteAll );
	
	m_menuListItems->AppendSeparator();
	
	wxMenuItem* m_menuItemItemsDelete;
	m_menuItemItemsDelete = new wxMenuItem( m_menuListItems, wxID_ANY, wxString( _("&Delete") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuListItems->Append( m_menuItemItemsDelete );
	
	m_menuListItems->AppendSeparator();
	
	wxMenuItem* m_menuItemItemsAdd;
	m_menuItemItemsAdd = new wxMenuItem( m_menuListItems, wxID_ANY, wxString( _("&Add") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuListItems->Append( m_menuItemItemsAdd );
	
	m_listCtrlItems->Connect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( PathsDialog::m_listCtrlItemsOnContextMenu ), NULL, this ); 
	
	bSizerList->Add( m_listCtrlItems, 1, wxALL|wxEXPAND, 2 );
	
	wxBoxSizer* bSizerButtons;
	bSizerButtons = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizerButtonsTop;
	bSizerButtonsTop = new wxBoxSizer( wxVERTICAL );
	
	m_buttonDuplicate = new wxButton( m_panelList, wxID_ANY, _("Du&plicate"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerButtonsTop->Add( m_buttonDuplicate, 0, wxALL, 2 );
	
	m_buttonMoveUp = new wxButton( m_panelList, wxID_ANY, _("move &Up"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerButtonsTop->Add( m_buttonMoveUp, 0, wxALL, 2 );
	
	m_buttonMoveDown = new wxButton( m_panelList, wxID_ANY, _("move Dow&n"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerButtonsTop->Add( m_buttonMoveDown, 0, wxALL, 2 );
	
	
	bSizerButtons->Add( bSizerButtonsTop, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizerButtonsMiddle;
	bSizerButtonsMiddle = new wxBoxSizer( wxVERTICAL );
	
	
	bSizerButtons->Add( bSizerButtonsMiddle, 1, wxEXPAND|wxRESERVE_SPACE_EVEN_IF_HIDDEN, 5 );
	
	wxBoxSizer* bSizerButtonsBottom;
	bSizerButtonsBottom = new wxBoxSizer( wxVERTICAL );
	
	m_buttonDeleteAll = new wxButton( m_panelList, wxID_ANY, _("Dele&te All"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerButtonsBottom->Add( m_buttonDeleteAll, 0, wxALL, 2 );
	
	m_buttonDelete = new wxButton( m_panelList, wxID_ANY, _("&Delete"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerButtonsBottom->Add( m_buttonDelete, 0, wxALL, 2 );
	
	m_buttonAdd = new wxButton( m_panelList, wxID_ANY, _("&Add"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerButtonsBottom->Add( m_buttonAdd, 0, wxALL, 2 );
	
	
	bSizerButtons->Add( bSizerButtonsBottom, 0, wxEXPAND, 5 );
	
	
	bSizerList->Add( bSizerButtons, 0, wxEXPAND, 5 );
	
	
	m_panelList->SetSizer( bSizerList );
	m_panelList->Layout();
	bSizerList->Fit( m_panelList );
	bSizerMain->Add( m_panelList, 1, wxEXPAND | wxALL, 5 );
	
	m_panelProperties = new wxPanel( m_panelContent, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerProperties;
	bSizerProperties = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizerPropertyPath;
	bSizerPropertyPath = new wxBoxSizer( wxVERTICAL );
	
	m_staticTextPropertyPath = new wxStaticText( m_panelProperties, wxID_ANY, _("Path:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextPropertyPath->Wrap( -1 );
	bSizerPropertyPath->Add( m_staticTextPropertyPath, 0, wxALL|wxEXPAND, 2 );
	
	m_textCtrlPropertyPath = new wxTextCtrl( m_panelProperties, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrlPropertyPath->SetValidator( wxTextValidator( wxFILTER_NONE, &m_PropertyPath ) );
	
	bSizerPropertyPath->Add( m_textCtrlPropertyPath, 0, wxALL|wxEXPAND, 2 );
	
	
	bSizerProperties->Add( bSizerPropertyPath, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizerPropertySize;
	bSizerPropertySize = new wxBoxSizer( wxVERTICAL );
	
	m_staticTextPropertySize = new wxStaticText( m_panelProperties, wxID_ANY, _("Size:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextPropertySize->Wrap( -1 );
	bSizerPropertySize->Add( m_staticTextPropertySize, 0, wxALL|wxEXPAND, 2 );
	
	wxBoxSizer* bSizerPropertySizeBrowse;
	bSizerPropertySizeBrowse = new wxBoxSizer( wxHORIZONTAL );
	
	m_textCtrlPropertySize = new wxTextCtrl( m_panelProperties, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrlPropertySize->SetValidator( wxGenericValidator( &m_PropertySize ) );
	
	bSizerPropertySizeBrowse->Add( m_textCtrlPropertySize, 1, wxALL|wxEXPAND, 2 );
	
	
	bSizerPropertySizeBrowse->Add( 2, 0, 0, wxEXPAND, 5 );
	
	m_buttonPropertySizeBrowse = new wxButton( m_panelProperties, wxID_ANY, _("&..."), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerPropertySizeBrowse->Add( m_buttonPropertySizeBrowse, 0, wxALL, 0 );
	
	
	bSizerPropertySizeBrowse->Add( 2, 0, 0, wxEXPAND, 5 );
	
	
	bSizerPropertySize->Add( bSizerPropertySizeBrowse, 1, wxEXPAND, 5 );
	
	
	bSizerProperties->Add( bSizerPropertySize, 1, wxEXPAND, 5 );
	
	
	m_panelProperties->SetSizer( bSizerProperties );
	m_panelProperties->Layout();
	bSizerProperties->Fit( m_panelProperties );
	bSizerMain->Add( m_panelProperties, 0, wxEXPAND | wxALL, 5 );
	
	m_panelBottom = new wxPanel( m_panelContent, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerBottom;
	bSizerBottom = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizerBottomLeft;
	bSizerBottomLeft = new wxBoxSizer( wxHORIZONTAL );
	
	m_buttonImport = new wxButton( m_panelBottom, wxID_ANY, _("&Import"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerBottomLeft->Add( m_buttonImport, 0, wxALL, 2 );
	
	m_buttonExport = new wxButton( m_panelBottom, wxID_ANY, _("E&xport"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerBottomLeft->Add( m_buttonExport, 0, wxALL, 2 );
	
	
	bSizerBottom->Add( bSizerBottomLeft, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizerBottomMiddle;
	bSizerBottomMiddle = new wxBoxSizer( wxHORIZONTAL );
	
	
	bSizerBottom->Add( bSizerBottomMiddle, 1, wxEXPAND|wxRESERVE_SPACE_EVEN_IF_HIDDEN, 5 );
	
	wxBoxSizer* bSizerBottomRight;
	bSizerBottomRight = new wxBoxSizer( wxHORIZONTAL );
	
	m_buttonOK = new wxButton( m_panelBottom, wxID_ANY, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerBottomRight->Add( m_buttonOK, 0, wxALL, 2 );
	
	m_buttonCancel = new wxButton( m_panelBottom, wxID_ANY, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonCancel->SetDefault(); 
	bSizerBottomRight->Add( m_buttonCancel, 0, wxALL, 2 );
	
	
	bSizerBottom->Add( bSizerBottomRight, 0, wxEXPAND, 5 );
	
	
	m_panelBottom->SetSizer( bSizerBottom );
	m_panelBottom->Layout();
	bSizerBottom->Fit( m_panelBottom );
	bSizerMain->Add( m_panelBottom, 0, wxEXPAND | wxALL, 5 );
	
	
	m_panelContent->SetSizer( bSizerMain );
	m_panelContent->Layout();
	bSizerMain->Fit( m_panelContent );
	bSizerContent->Add( m_panelContent, 1, wxEXPAND | wxALL, 0 );
	
	
	this->SetSizer( bSizerContent );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_INIT_DIALOG, wxInitDialogEventHandler( PathsDialog::PathsDialogOnInitDialog ) );
	m_listCtrlItems->Connect( wxEVT_UPDATE_UI, wxUpdateUIEventHandler( PathsDialog::m_listCtrlItemsOnUpdateUI ), NULL, this );
	this->Connect( m_menuItemItemsDuplicate->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PathsDialog::m_menuItemItemsDuplicateOnMenuSelection ) );
	this->Connect( m_menuItemItemsMoveUp->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PathsDialog::m_menuItemItemsMoveUpOnMenuSelection ) );
	this->Connect( m_menuItemItemsMoveDown->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PathsDialog::m_menuItemItemsMoveDownOnMenuSelection ) );
	this->Connect( m_menuItemItemsDeleteAll->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PathsDialog::m_menuItemItemsDeleteAllOnMenuSelection ) );
	this->Connect( m_menuItemItemsDelete->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PathsDialog::m_menuItemItemsDeleteOnMenuSelection ) );
	this->Connect( m_menuItemItemsAdd->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PathsDialog::m_menuItemItemsAddOnMenuSelection ) );
	m_buttonDuplicate->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PathsDialog::m_buttonDuplicateOnButtonClick ), NULL, this );
	m_buttonMoveUp->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PathsDialog::m_buttonMoveUpOnButtonClick ), NULL, this );
	m_buttonMoveDown->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PathsDialog::m_buttonMoveDownOnButtonClick ), NULL, this );
	m_buttonDeleteAll->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PathsDialog::m_buttonDeleteAllOnButtonClick ), NULL, this );
	m_buttonDelete->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PathsDialog::m_buttonDeleteOnButtonClick ), NULL, this );
	m_buttonAdd->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PathsDialog::m_buttonAddOnButtonClick ), NULL, this );
	m_textCtrlPropertyPath->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( PathsDialog::m_textCtrlPropertyPathOnText ), NULL, this );
	m_textCtrlPropertySize->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( PathsDialog::m_textCtrlPropertySizeOnText ), NULL, this );
	m_buttonPropertySizeBrowse->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PathsDialog::m_buttonPropertySizeBrowseOnButtonClick ), NULL, this );
	m_buttonImport->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PathsDialog::m_buttonImportOnButtonClick ), NULL, this );
	m_buttonExport->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PathsDialog::m_buttonExportOnButtonClick ), NULL, this );
	m_buttonOK->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PathsDialog::m_buttonOKOnButtonClick ), NULL, this );
	m_buttonCancel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PathsDialog::m_buttonCancelOnButtonClick ), NULL, this );
}

PathsDialog::~PathsDialog()
{
	// Disconnect Events
	this->Disconnect( wxEVT_INIT_DIALOG, wxInitDialogEventHandler( PathsDialog::PathsDialogOnInitDialog ) );
	m_listCtrlItems->Disconnect( wxEVT_UPDATE_UI, wxUpdateUIEventHandler( PathsDialog::m_listCtrlItemsOnUpdateUI ), NULL, this );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PathsDialog::m_menuItemItemsDuplicateOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PathsDialog::m_menuItemItemsMoveUpOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PathsDialog::m_menuItemItemsMoveDownOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PathsDialog::m_menuItemItemsDeleteAllOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PathsDialog::m_menuItemItemsDeleteOnMenuSelection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PathsDialog::m_menuItemItemsAddOnMenuSelection ) );
	m_buttonDuplicate->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PathsDialog::m_buttonDuplicateOnButtonClick ), NULL, this );
	m_buttonMoveUp->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PathsDialog::m_buttonMoveUpOnButtonClick ), NULL, this );
	m_buttonMoveDown->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PathsDialog::m_buttonMoveDownOnButtonClick ), NULL, this );
	m_buttonDeleteAll->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PathsDialog::m_buttonDeleteAllOnButtonClick ), NULL, this );
	m_buttonDelete->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PathsDialog::m_buttonDeleteOnButtonClick ), NULL, this );
	m_buttonAdd->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PathsDialog::m_buttonAddOnButtonClick ), NULL, this );
	m_textCtrlPropertyPath->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( PathsDialog::m_textCtrlPropertyPathOnText ), NULL, this );
	m_textCtrlPropertySize->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( PathsDialog::m_textCtrlPropertySizeOnText ), NULL, this );
	m_buttonPropertySizeBrowse->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PathsDialog::m_buttonPropertySizeBrowseOnButtonClick ), NULL, this );
	m_buttonImport->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PathsDialog::m_buttonImportOnButtonClick ), NULL, this );
	m_buttonExport->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PathsDialog::m_buttonExportOnButtonClick ), NULL, this );
	m_buttonOK->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PathsDialog::m_buttonOKOnButtonClick ), NULL, this );
	m_buttonCancel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PathsDialog::m_buttonCancelOnButtonClick ), NULL, this );
	
	delete m_menuListItems; 
}

AboutDialog::AboutDialog( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 640,200 ), wxSize( 640,200 ) );
	
	wxBoxSizer* bSizerContent;
	bSizerContent = new wxBoxSizer( wxHORIZONTAL );
	
	m_panelContent = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerMain;
	bSizerMain = new wxBoxSizer( wxVERTICAL );
	
	m_panelTop = new wxPanel( m_panelContent, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_panelTop->Hide();
	
	wxBoxSizer* bSizerTop;
	bSizerTop = new wxBoxSizer( wxHORIZONTAL );
	
	
	m_panelTop->SetSizer( bSizerTop );
	m_panelTop->Layout();
	bSizerTop->Fit( m_panelTop );
	bSizerMain->Add( m_panelTop, 0, wxEXPAND | wxALL, 5 );
	
	m_panelAbout = new wxPanel( m_panelContent, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerAbout;
	bSizerAbout = new wxBoxSizer( wxVERTICAL );
	
	m_staticApplicationName = new wxStaticText( m_panelAbout, wxID_ANY, _("BatchEncoder (Audio Conversion GUI)"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE );
	m_staticApplicationName->Wrap( -1 );
	m_staticApplicationName->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxEmptyString ) );
	
	bSizerAbout->Add( m_staticApplicationName, 0, wxALL|wxEXPAND, 5 );
	
	m_hyperlinkApplicationWebsite = new wxHyperlinkCtrl( m_panelAbout, wxID_ANY, _("Website"), wxEmptyString, wxDefaultPosition, wxDefaultSize, wxHL_ALIGN_CENTRE|wxHL_DEFAULT_STYLE );
	bSizerAbout->Add( m_hyperlinkApplicationWebsite, 0, wxALIGN_CENTER|wxALL, 5 );
	
	m_hyperlinkApplicationEmail = new wxHyperlinkCtrl( m_panelAbout, wxID_ANY, _("E-mail"), wxEmptyString, wxDefaultPosition, wxDefaultSize, wxHL_ALIGN_CENTRE|wxHL_DEFAULT_STYLE );
	bSizerAbout->Add( m_hyperlinkApplicationEmail, 0, wxALIGN_CENTER|wxALL, 5 );
	
	m_staticApplicationLicense = new wxStaticText( m_panelAbout, wxID_ANY, _("Licensed under the MIT license. See LICENSE file in the application root for full license information."), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE );
	m_staticApplicationLicense->Wrap( 1000 );
	bSizerAbout->Add( m_staticApplicationLicense, 0, wxALL|wxEXPAND, 5 );
	
	
	m_panelAbout->SetSizer( bSizerAbout );
	m_panelAbout->Layout();
	bSizerAbout->Fit( m_panelAbout );
	bSizerMain->Add( m_panelAbout, 1, wxEXPAND | wxALL, 5 );
	
	m_panelBottom = new wxPanel( m_panelContent, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerBottom;
	bSizerBottom = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizerBottomMiddle;
	bSizerBottomMiddle = new wxBoxSizer( wxHORIZONTAL );
	
	
	bSizerBottom->Add( bSizerBottomMiddle, 1, wxEXPAND|wxRESERVE_SPACE_EVEN_IF_HIDDEN, 5 );
	
	wxBoxSizer* bSizerBottomRight;
	bSizerBottomRight = new wxBoxSizer( wxHORIZONTAL );
	
	m_buttonOK = new wxButton( m_panelBottom, wxID_ANY, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonOK->SetDefault(); 
	bSizerBottomRight->Add( m_buttonOK, 0, wxALL, 2 );
	
	
	bSizerBottom->Add( bSizerBottomRight, 0, wxEXPAND, 5 );
	
	
	m_panelBottom->SetSizer( bSizerBottom );
	m_panelBottom->Layout();
	bSizerBottom->Fit( m_panelBottom );
	bSizerMain->Add( m_panelBottom, 0, wxEXPAND | wxALL, 5 );
	
	
	m_panelContent->SetSizer( bSizerMain );
	m_panelContent->Layout();
	bSizerMain->Fit( m_panelContent );
	bSizerContent->Add( m_panelContent, 1, wxALL|wxEXPAND, 0 );
	
	
	this->SetSizer( bSizerContent );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_INIT_DIALOG, wxInitDialogEventHandler( AboutDialog::AboutDialogOnInitDialog ) );
	m_hyperlinkApplicationWebsite->Connect( wxEVT_COMMAND_HYPERLINK, wxHyperlinkEventHandler( AboutDialog::m_hyperlinkApplicationWebsiteOnHyperlink ), NULL, this );
	m_hyperlinkApplicationEmail->Connect( wxEVT_COMMAND_HYPERLINK, wxHyperlinkEventHandler( AboutDialog::m_hyperlinkApplicationEmailOnHyperlink ), NULL, this );
	m_buttonOK->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AboutDialog::m_buttonOKOnButtonClick ), NULL, this );
}

AboutDialog::~AboutDialog()
{
	// Disconnect Events
	this->Disconnect( wxEVT_INIT_DIALOG, wxInitDialogEventHandler( AboutDialog::AboutDialogOnInitDialog ) );
	m_hyperlinkApplicationWebsite->Disconnect( wxEVT_COMMAND_HYPERLINK, wxHyperlinkEventHandler( AboutDialog::m_hyperlinkApplicationWebsiteOnHyperlink ), NULL, this );
	m_hyperlinkApplicationEmail->Disconnect( wxEVT_COMMAND_HYPERLINK, wxHyperlinkEventHandler( AboutDialog::m_hyperlinkApplicationEmailOnHyperlink ), NULL, this );
	m_buttonOK->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AboutDialog::m_buttonOKOnButtonClick ), NULL, this );
	
}
