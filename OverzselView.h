#if !defined(AFX_OVERZSELVIEW_H__6CC661B0_0274_11D5_BC1D_006097638FC1__INCLUDED_)
#define AFX_OVERZSELVIEW_H__6CC661B0_0274_11D5_BC1D_006097638FC1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// OverzselView.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// COverzselView view

#include "ikand.h"
#include "corresp.h"
#include "codes.h"

class COverzselView : public CScrollView
{
protected:
	COverzselView();           // protected constructor used by dynamic creation
	DECLARE_DYNCREATE(COverzselView)

	CIkand m_setikand;
	CCorresp m_setcorresp;
	CCodes m_setcodes;

	long m_aantal_regels;
	long m_extra_regels;
	long m_records;
	long m_contacten;
	BOOL m_selcorresp;

	void mk_overz(void);
	void prnt(CDC*, double);
	void ovz(CDC*, double);
	void coderingen(void);
	void statistiek(void);

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

	int max_geslacht;
	int tot_geslacht;
	double perc_geslacht[100];
	int a_geslacht[100];
	CString c_geslacht[100];
	CString n_geslacht[100];

	int max_status;
	int tot_status;
	double perc_status[100];
	int a_status[100];
	CString c_status[100];
	CString n_status[100];

	double gem_leeftijd;
	double tot_leeftijd;
	double som_leeftijd;
	double perc_leeftijd[11];
	int a_leeftijd[11];

	int vast;
	double perc_vast;
	int tijdelijk;
	double perc_tijdelijk;
	int tot_type;

	int max_salschaal;
	int tot_salschaal;
	double perc_salschaal[7];
	int a_salschaal[7];

	int max_faculteit;
	int tot_faculteit;
	double perc_faculteit[100];
	int a_faculteit[100];
	CString c_faculteit[100];
	CString n_faculteit[100];

	int max_wpobp;
	int tot_wpobp;
	double perc_wpobp[100];
	int a_wpobp[100];
	CString c_wpobp[100];
	CString n_wpobp[100];

	int max_match;
	int tot_match;
	double perc_match[100];
	int a_match[100];
	CString c_match[100];
	CString n_match[100];

	int max_bemiddelaar;
	int tot_bemiddelaar;
	double perc_bemiddelaar[100];
	int a_bemiddelaar[100];
	CString c_bemiddelaar[100];
	CString n_bemiddelaar[100];

	int max_traject;
	int tot_traject;
	double perc_traject[100];
	int a_traject[100];
	CString c_traject[100];
	CString n_traject[100];

	int max_afmreden;
	int tot_afmreden;
	double perc_afmreden[100];
	int a_afmreden[100];
	CString c_afmreden[100];
	CString n_afmreden[100];

	int max_soort;
	int tot_soort;
	double perc_soort[100];
	int a_soort[100];
	CString c_soort[100];
	CString n_soort[100];

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(COverzselView)
	public:
	virtual BOOL OnScroll(UINT nScrollCode, UINT nPos, BOOL bDoScroll = TRUE);
	protected:
	virtual void OnDraw(CDC* pDC);      // overridden to draw this view
	virtual void OnInitialUpdate();     // first time after construct
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnPrint(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual BOOL OnScrollBy(CSize sizeScroll, BOOL bDoScroll = TRUE);
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~COverzselView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	// Generated message map functions
	//{{AFX_MSG(COverzselView)
	afx_msg void OnFileBestandcsv();
	afx_msg void OnFileBestandtxt();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_OVERZSELVIEW_H__6CC661B0_0274_11D5_BC1D_006097638FC1__INCLUDED_)
