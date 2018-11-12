// SelectieView.cpp : implementation file
//

#include "stdafx.h"
#include "overz.h"
#include "SelectieView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSelectieView

IMPLEMENT_DYNCREATE(CSelectieView, CFormView)

CSelectieView::CSelectieView()
	: CFormView(CSelectieView::IDD)
{
	//{{AFX_DATA_INIT(CSelectieView)
	m_advmob = _T("");
	m_afmdattot = _T("");
	m_afmdatvan = _T("");
	m_afmred = _T("");
	m_agddatetot = _T("");
	m_agddatevan = _T("");
	m_agdred = _T("");
	m_anmdattot = _T("");
	m_anmdatvan = _T("");
	m_anmred = _T("");
	m_contsrt = _T("");
	m_datumtot = _T("");
	m_datumvan = _T("");
	m_gebdatvan = _T("");
	m_hdvbtyp = _T("");
	m_hfaccod = _T("");
	m_hfunomv = _T("");
	m_match = _T("");
	m_projnrtot = _T("");
	m_projnrvan = _T("");
	m_rubriek = _T("");
	m_sexe = _T("");
	m_traject = _T("");
	m_wpobp = _T("");
	m_gebdattot = _T("");
	m_kndsta = _T("");
	m_hsalsch = _T("");
	m_projnruitz = _T("");
	m_afmdattotuitz = _T("");
	m_afmdatvanuitz = _T("");
	m_afmreduitz = _T("");
	m_agdreduitz = _T("");
	m_anmreduitz = _T("");
	m_trajectuitz = _T("");
	m_kndstauitz = _T("");
	//}}AFX_DATA_INIT
}

CSelectieView::~CSelectieView()
{
}

void CSelectieView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CSelectieView)
	DDX_Text(pDX, IDC_ADVMOB_EDIT, m_advmob);
	DDX_Text(pDX, IDC_AFMDATTOT_EDIT, m_afmdattot);
	DDV_MaxChars(pDX, m_afmdattot, 10);
	DDX_Text(pDX, IDC_AFMDATVAN_EDIT, m_afmdatvan);
	DDV_MaxChars(pDX, m_afmdatvan, 10);
	DDX_Text(pDX, IDC_AFMRED_EDIT, m_afmred);
	DDX_Text(pDX, IDC_AGDDATETOT_EDIT, m_agddatetot);
	DDV_MaxChars(pDX, m_agddatetot, 10);
	DDX_Text(pDX, IDC_AGDDATEVAN_EDIT, m_agddatevan);
	DDV_MaxChars(pDX, m_agddatevan, 10);
	DDX_Text(pDX, IDC_AGDRED_EDIT, m_agdred);
	DDX_Text(pDX, IDC_ANMDATTOT_EDIT, m_anmdattot);
	DDV_MaxChars(pDX, m_anmdattot, 10);
	DDX_Text(pDX, IDC_ANMDATVAN_EDIT, m_anmdatvan);
	DDV_MaxChars(pDX, m_anmdatvan, 10);
	DDX_Text(pDX, IDC_ANMRED_EDIT, m_anmred);
	DDX_Text(pDX, IDC_CONTSRT_EDIT, m_contsrt);
	DDX_Text(pDX, IDC_DATUMTOT_EDIT, m_datumtot);
	DDV_MaxChars(pDX, m_datumtot, 10);
	DDX_Text(pDX, IDC_DATUMVAN_EDIT, m_datumvan);
	DDV_MaxChars(pDX, m_datumvan, 10);
	DDX_Text(pDX, IDC_GEBDATVAN_EDIT, m_gebdatvan);
	DDV_MaxChars(pDX, m_gebdatvan, 10);
	DDX_Text(pDX, IDC_HDVBTYP_EDIT, m_hdvbtyp);
	DDX_Text(pDX, IDC_HFACCOD_EDIT, m_hfaccod);
	DDX_Text(pDX, IDC_HFUNOMV_EDIT, m_hfunomv);
	DDX_Text(pDX, IDC_MATCH_EDIT, m_match);
	DDV_MaxChars(pDX, m_match, 1);
	DDX_Text(pDX, IDC_PROJNRTOT_EDIT, m_projnrtot);
	DDV_MaxChars(pDX, m_projnrtot, 8);
	DDX_Text(pDX, IDC_PROJNRVAN_EDIT, m_projnrvan);
	DDV_MaxChars(pDX, m_projnrvan, 8);
	DDX_Text(pDX, IDC_RUBRIEK_EDIT, m_rubriek);
	DDX_Text(pDX, IDC_SEXE_EDIT, m_sexe);
	DDV_MaxChars(pDX, m_sexe, 1);
	DDX_Text(pDX, IDC_TRAJECT_EDIT, m_traject);
	DDX_Text(pDX, IDC_WPOBP_EDIT, m_wpobp);
	DDX_Text(pDX, IDC_GEBDATTOT_EDIT, m_gebdattot);
	DDV_MaxChars(pDX, m_gebdattot, 10);
	DDX_Text(pDX, IDC_KNDSTA_EDIT, m_kndsta);
	DDX_Text(pDX, IDC_HSALSCH_EDIT, m_hsalsch);
	DDX_Text(pDX, IDC_PROJNRUITZ_EDIT, m_projnruitz);
	DDX_Text(pDX, IDC_AFMDATTOTUITZ_EDIT, m_afmdattotuitz);
	DDX_Text(pDX, IDC_AFMDATVANUITZ_EDIT, m_afmdatvanuitz);
	DDX_Text(pDX, IDC_AFMREDUITZ_EDIT, m_afmreduitz);
	DDX_Text(pDX, IDC_AGDREDUITZ_EDIT, m_agdreduitz);
	DDX_Text(pDX, IDC_ANMREDUITZ_EDIT, m_anmreduitz);
	DDX_Text(pDX, IDC_TRAJECTUITZ_EDIT, m_trajectuitz);
	DDX_Text(pDX, IDC_KNDSTAUITZ_EDIT, m_kndstauitz);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CSelectieView, CFormView)
	//{{AFX_MSG_MAP(CSelectieView)
	ON_BN_CLICKED(IDC_OVERZICHT_BUTTON, OnOverzichtButton)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSelectieView diagnostics

#ifdef _DEBUG
void CSelectieView::AssertValid() const
{
	CFormView::AssertValid();
}

void CSelectieView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CSelectieView message handlers

extern COverzApp theApp;

void CSelectieView::OnInitialUpdate() 
{
	// TODO: Add your specialized code here and/or call the base class
	
	GetDocument()->SetTitle("Selectie");
	CFormView::OnInitialUpdate();
	ResizeParentToFit(false);
}

void CSelectieView::OnOverzichtButton() 
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);

	theApp.m_advmob = m_advmob;
	theApp.m_afmdattot = m_afmdattot;
	theApp.m_afmdatvan = m_afmdatvan;
	theApp.m_afmdattotuitz = m_afmdattotuitz;
	theApp.m_afmdatvanuitz = m_afmdatvanuitz;
	theApp.m_afmred = m_afmred;
	theApp.m_afmreduitz = m_afmreduitz;
	theApp.m_agddatetot = m_agddatetot;
	theApp.m_agddatevan = m_agddatevan;
	theApp.m_agdred = m_agdred;
	theApp.m_agdreduitz = m_agdreduitz;
	theApp.m_anmdattot = m_anmdattot;
	theApp.m_anmdatvan = m_anmdatvan;
	theApp.m_anmred = m_anmred;
	theApp.m_anmreduitz = m_anmreduitz;
	theApp.m_contsrt = m_contsrt;
	theApp.m_datumtot = m_datumtot;
	theApp.m_datumvan = m_datumvan;
	theApp.m_gebdatvan = m_gebdatvan;
	theApp.m_hdvbtyp = m_hdvbtyp;
	theApp.m_hfaccod = m_hfaccod;
	theApp.m_hfunomv = m_hfunomv;
	theApp.m_match = m_match;
	theApp.m_projnrtot = m_projnrtot;
	theApp.m_projnrvan = m_projnrvan;
	theApp.m_projnruitz = m_projnruitz;
	theApp.m_rubriek = m_rubriek;
	theApp.m_sexe = m_sexe;
	theApp.m_traject = m_traject;
	theApp.m_trajectuitz = m_trajectuitz;
	theApp.m_wpobp = m_wpobp;
	theApp.m_gebdattot = m_gebdattot;
	theApp.m_kndsta = m_kndsta;
	theApp.m_kndstauitz = m_kndstauitz;
	theApp.m_hsalsch = m_hsalsch;

	theApp.ShowView("COverzselView");
}
