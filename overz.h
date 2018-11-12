// overz.h : main header file for the OVERZ application
//

#if !defined(AFX_OVERZ_H__E99920E4_0117_11D5_BC1D_006097638FC1__INCLUDED_)
#define AFX_OVERZ_H__E99920E4_0117_11D5_BC1D_006097638FC1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// COverzApp:
// See overz.cpp for the implementation of this class
//

class COverzApp : public CWinApp
{
public:
	CView * ShowView( const char * pszViewName);
	COverzApp();

	CString	m_advmob;
	CString	m_afmdattot;
	CString	m_afmdatvan;
	CString	m_afmdattotuitz;
	CString	m_afmdatvanuitz;
	CString	m_afmred;
	CString	m_afmreduitz;
	CString	m_agddatetot;
	CString	m_agddatevan;
	CString	m_agdred;
	CString	m_agdreduitz;
	CString	m_anmdattot;
	CString	m_anmdatvan;
	CString	m_anmred;
	CString	m_anmreduitz;
	CString	m_contsrt;
	CString	m_datumtot;
	CString	m_datumvan;
	CString	m_gebdatvan;
	CString	m_gebdattot;
	CString	m_hdvbtyp;
	CString	m_hfaccod;
	CString	m_hfunomv;
	CString	m_match;
	CString	m_projnrtot;
	CString	m_projnrvan;
	CString	m_projnruitz;
	CString	m_rubriek;
	CString	m_sexe;
	CString	m_traject;
	CString	m_trajectuitz;
	CString	m_wpobp;
	CString	m_kndsta;
	CString	m_kndstauitz;
	CString	m_hsalsch;

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(COverzApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(COverzApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_OVERZ_H__E99920E4_0117_11D5_BC1D_006097638FC1__INCLUDED_)
