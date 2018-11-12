// overz.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "overz.h"

#include "MainFrm.h"
#include "ChildFrm.h"
#include "overzDoc.h"
#include "overzView.h"

#include "selectieView.h"
#include "overzselView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// COverzApp

BEGIN_MESSAGE_MAP(COverzApp, CWinApp)
	//{{AFX_MSG_MAP(COverzApp)
	ON_COMMAND(ID_APP_ABOUT, OnAppAbout)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard file based document commands
	ON_COMMAND(ID_FILE_NEW, CWinApp::OnFileNew)
	ON_COMMAND(ID_FILE_OPEN, CWinApp::OnFileOpen)
	// Standard print setup command
	ON_COMMAND(ID_FILE_PRINT_SETUP, CWinApp::OnFilePrintSetup)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// COverzApp construction

COverzApp::COverzApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}

/////////////////////////////////////////////////////////////////////////////
// The one and only COverzApp object

COverzApp theApp;

/////////////////////////////////////////////////////////////////////////////
// COverzApp initialization

#define REGISTER_VIEW( view_id, view_name)\
	pDocTemplate = new CMultiDocTemplate(\
		view_id,\
		RUNTIME_CLASS(COverzDoc),\
		RUNTIME_CLASS(CChildFrame),\
		RUNTIME_CLASS(view_name));\
	AddDocTemplate(pDocTemplate);


BOOL COverzApp::InitInstance()
{
	AfxEnableControlContainer();

	// Standard initialization
	// If you are not using these features and wish to reduce the size
	//  of your final executable, you should remove from the following
	//  the specific initialization routines you do not need.

#ifdef _AFXDLL
	Enable3dControls();			// Call this when using MFC in a shared DLL
#else
	Enable3dControlsStatic();	// Call this when linking to MFC statically
#endif

	// Change the registry key under which our settings are stored.
	// TODO: You should modify this string to be something appropriate
	// such as the name of your company or organization.
	SetRegistryKey(_T("Van Hoorn"));

	LoadStdProfileSettings();  // Load standard INI file options (including MRU)


	// Register the application's document templates.  Document templates
	//  serve as the connection between documents, frame windows and views.

	CMultiDocTemplate* pDocTemplate;
	REGISTER_VIEW(IDR_SELECTIE, CSelectieView) // register CAgentsView
	REGISTER_VIEW(IDR_OVERZSEL, COverzselView) // register CAgentsView

	// create main MDI Frame window
	CMainFrame* pMainFrame = new CMainFrame;
	if (!pMainFrame->LoadFrame(IDR_MAINFRAME))
		return FALSE;
	m_pMainWnd = pMainFrame;

	// Parse command line for standard shell commands, DDE, file open
//	CCommandLineInfo cmdInfo;
//	ParseCommandLine(cmdInfo);

	// Dispatch commands specified on the command line
//	if (!ProcessShellCommand(cmdInfo))
//		return FALSE;

	// The main window has been initialized, so show and update it.
	pMainFrame->ShowWindow(SW_SHOWMAXIMIZED);
	pMainFrame->UpdateWindow();

	return TRUE;
}


/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
		// No message handlers
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

// App command to run the dialog
void COverzApp::OnAppAbout()
{
	CAboutDlg aboutDlg;
	aboutDlg.DoModal();
}

/////////////////////////////////////////////////////////////////////////////
// COverzApp message handlers

CView * COverzApp::ShowView(const char *pszViewName)
{
	CString strTypeName;

	POSITION pos = m_pDocManager->GetFirstDocTemplatePosition();
	while (pos != NULL)
	{
		CDocTemplate* pTemplate = (CDocTemplate*)m_pDocManager->GetNextDocTemplate( pos);
		
		strTypeName = "";
		if (pTemplate->GetDocString(strTypeName, CDocTemplate::fileNewName) &&
		   !strTypeName.IsEmpty()
		   && strTypeName.CompareNoCase(pszViewName) == 0)
		{
			// we have found what we're looking for, so open it
			CDocument * pDoc = pTemplate->OpenDocumentFile(NULL);
			POSITION viewPos = pDoc->GetFirstViewPosition();
			return pDoc->GetNextView(viewPos);
		}
	}

	// if we come here there is a fault
	TRACE1("Error: ViewName '%s' is not known.\n", pszViewName);
	ASSERT(FALSE);
	return 0;
}

