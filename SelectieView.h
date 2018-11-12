#if !defined(AFX_SELECTIEVIEW_H__7FE5FCC6_01CD_11D5_BC1D_006097638FC1__INCLUDED_)
#define AFX_SELECTIEVIEW_H__7FE5FCC6_01CD_11D5_BC1D_006097638FC1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// SelectieView.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CSelectieView form view

#ifndef __AFXEXT_H__
#include <afxext.h>
#endif

class CSelectieView : public CFormView
{
protected:
	CSelectieView();           // protected constructor used by dynamic creation
	DECLARE_DYNCREATE(CSelectieView)

// Form Data
public:
	//{{AFX_DATA(CSelectieView)
	enum { IDD = IDD_SELECTIE };
	CString	m_advmob;
	CString	m_afmdattot;
	CString	m_afmdatvan;
	CString	m_afmred;
	CString	m_agddatetot;
	CString	m_agddatevan;
	CString	m_agdred;
	CString	m_anmdattot;
	CString	m_anmdatvan;
	CString	m_anmred;
	CString	m_contsrt;
	CString	m_datumtot;
	CString	m_datumvan;
	CString	m_gebdatvan;
	CString	m_hdvbtyp;
	CString	m_hfaccod;
	CString	m_hfunomv;
	CString	m_match;
	CString	m_projnrtot;
	CString	m_projnrvan;
	CString	m_rubriek;
	CString	m_sexe;
	CString	m_traject;
	CString	m_wpobp;
	CString	m_gebdattot;
	CString	m_kndsta;
	CString	m_hsalsch;
	CString	m_projnruitz;
	CString	m_afmdattotuitz;
	CString	m_afmdatvanuitz;
	CString	m_afmreduitz;
	CString	m_agdreduitz;
	CString	m_anmreduitz;
	CString	m_trajectuitz;
	CString	m_kndstauitz;
	//}}AFX_DATA

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSelectieView)
	public:
	virtual void OnInitialUpdate();
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~CSelectieView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	// Generated message map functions
	//{{AFX_MSG(CSelectieView)
	afx_msg void OnOverzichtButton();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SELECTIEVIEW_H__7FE5FCC6_01CD_11D5_BC1D_006097638FC1__INCLUDED_)
