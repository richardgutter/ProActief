// Ikand.cpp : implementation file
//

#include "stdafx.h"
#include "overz.h"
#include "Ikand.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CIkand

IMPLEMENT_DYNAMIC(CIkand, CRecordset)

CIkand::CIkand(CDatabase* pdb)
	: CRecordset(pdb)
{
	//{{AFX_FIELD_INIT(CIkand)
	m_id = _T("");
	m_projnr = _T("");
	m_kndsta = _T("");
	m_match = _T("");
	m_gebdat = _T("");
	m_sexe = _T("");
	m_hdvbtyp = _T("");
	m_hsalsch = _T("");
	m_hfaccod = _T("");
	m_hfunomv = _T("");
	m_wpobp = _T("");
	m_anmdat = _T("");
	m_anmred = _T("");
	m_advmob = _T("");
	m_afmred = _T("");
	m_afmdat = _T("");
	m_agdred = _T("");
	m_agddate = _T("");
	m_traject = _T("");
	m_nFields = 19;
	//}}AFX_FIELD_INIT
	m_nDefaultType = dynaset;
}


CString CIkand::GetDefaultConnect()
{
	return _T("ODBC;DSN=overzmentor");
}

CString CIkand::GetDefaultSQL()
{
	return _T("[IKAND]");
}

void CIkand::DoFieldExchange(CFieldExchange* pFX)
{
	//{{AFX_FIELD_MAP(CIkand)
	pFX->SetFieldType(CFieldExchange::outputColumn);
	RFX_Text(pFX, _T("[id]"), m_id);
	RFX_Text(pFX, _T("[projnr]"), m_projnr);
	RFX_Text(pFX, _T("[kndsta]"), m_kndsta);
	RFX_Text(pFX, _T("[match]"), m_match);
	RFX_Text(pFX, _T("[gebdat]"), m_gebdat);
	RFX_Text(pFX, _T("[sexe]"), m_sexe);
	RFX_Text(pFX, _T("[hdvbtyp]"), m_hdvbtyp);
	RFX_Text(pFX, _T("[hsalsch]"), m_hsalsch);
	RFX_Text(pFX, _T("[hfaccod]"), m_hfaccod);
	RFX_Text(pFX, _T("[hfunomv]"), m_hfunomv);
	RFX_Text(pFX, _T("[wpobp]"), m_wpobp);
	RFX_Text(pFX, _T("[anmdat]"), m_anmdat);
	RFX_Text(pFX, _T("[anmred]"), m_anmred);
	RFX_Text(pFX, _T("[advmob]"), m_advmob);
	RFX_Text(pFX, _T("[afmred]"), m_afmred);
	RFX_Text(pFX, _T("[afmdat]"), m_afmdat);
	RFX_Text(pFX, _T("[agdred]"), m_agdred);
	RFX_Text(pFX, _T("[agddate]"), m_agddate);
	RFX_Text(pFX, _T("[traject]"), m_traject);
	//}}AFX_FIELD_MAP
}

/////////////////////////////////////////////////////////////////////////////
// CIkand diagnostics

#ifdef _DEBUG
void CIkand::AssertValid() const
{
	CRecordset::AssertValid();
}

void CIkand::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG
