// Codes.cpp : implementation file
//

#include "stdafx.h"
#include "overz.h"
#include "Codes.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCodes

IMPLEMENT_DYNAMIC(CCodes, CRecordset)

CCodes::CCodes(CDatabase* pdb)
	: CRecordset(pdb)
{
	//{{AFX_FIELD_INIT(CCodes)
	m_rubriek = _T("");
	m_code = _T("");
	m_omschrijf = _T("");
	m_nFields = 3;
	//}}AFX_FIELD_INIT
	m_nDefaultType = dynaset;
}


CString CCodes::GetDefaultConnect()
{
	return _T("ODBC;DSN=overzmentor");
}

CString CCodes::GetDefaultSQL()
{
	return _T("[CODES]");
}

void CCodes::DoFieldExchange(CFieldExchange* pFX)
{
	//{{AFX_FIELD_MAP(CCodes)
	pFX->SetFieldType(CFieldExchange::outputColumn);
	RFX_Text(pFX, _T("[rubriek]"), m_rubriek);
	RFX_Text(pFX, _T("[code]"), m_code);
	RFX_Text(pFX, _T("[omschrijf]"), m_omschrijf);
	//}}AFX_FIELD_MAP
}

/////////////////////////////////////////////////////////////////////////////
// CCodes diagnostics

#ifdef _DEBUG
void CCodes::AssertValid() const
{
	CRecordset::AssertValid();
}

void CCodes::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG
