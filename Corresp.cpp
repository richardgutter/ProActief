// Corresp.cpp : implementation file
//

#include "stdafx.h"
#include "overz.h"
#include "Corresp.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCorresp

IMPLEMENT_DYNAMIC(CCorresp, CRecordset)

CCorresp::CCorresp(CDatabase* pdb)
	: CRecordset(pdb)
{
	//{{AFX_FIELD_INIT(CCorresp)
	m_pid = _T("");
	m_teller = 0;
	m_rubriek = _T("");
	m_contsrt = _T("");
	m_datum = _T("");
	m_nFields = 5;
	//}}AFX_FIELD_INIT
	m_nDefaultType = dynaset;
}


CString CCorresp::GetDefaultConnect()
{
	return _T("ODBC;DSN=overzmentor");
}

CString CCorresp::GetDefaultSQL()
{
	return _T("[CORRESP]");
}

void CCorresp::DoFieldExchange(CFieldExchange* pFX)
{
	//{{AFX_FIELD_MAP(CCorresp)
	pFX->SetFieldType(CFieldExchange::outputColumn);
	RFX_Text(pFX, _T("[pid]"), m_pid);
	RFX_Long(pFX, _T("[teller]"), m_teller);
	RFX_Text(pFX, _T("[rubriek]"), m_rubriek);
	RFX_Text(pFX, _T("[contsrt]"), m_contsrt);
	RFX_Text(pFX, _T("[datum]"), m_datum);
	//}}AFX_FIELD_MAP
}

/////////////////////////////////////////////////////////////////////////////
// CCorresp diagnostics

#ifdef _DEBUG
void CCorresp::AssertValid() const
{
	CRecordset::AssertValid();
}

void CCorresp::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG
