#if !defined(AFX_IKAND_H__CFD539A0_0CB1_11D5_BC1D_006097638FC1__INCLUDED_)
#define AFX_IKAND_H__CFD539A0_0CB1_11D5_BC1D_006097638FC1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Ikand.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CIkand recordset

class CIkand : public CRecordset
{
public:
	CIkand(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(CIkand)

// Field/Param Data
	//{{AFX_FIELD(CIkand, CRecordset)
	CString	m_id;
	CString	m_projnr;
	CString	m_kndsta;
	CString	m_match;
	CString	m_gebdat;
	CString	m_sexe;
	CString	m_hdvbtyp;
	CString	m_hsalsch;
	CString	m_hfaccod;
	CString	m_hfunomv;
	CString	m_wpobp;
	CString	m_anmdat;
	CString	m_anmred;
	CString	m_advmob;
	CString	m_afmred;
	CString	m_afmdat;
	CString	m_agdred;
	CString	m_agddate;
	CString	m_traject;
	//}}AFX_FIELD


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CIkand)
	public:
	virtual CString GetDefaultConnect();    // Default connection string
	virtual CString GetDefaultSQL();    // Default SQL for Recordset
	virtual void DoFieldExchange(CFieldExchange* pFX);  // RFX support
	//}}AFX_VIRTUAL

// Implementation
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_IKAND_H__CFD539A0_0CB1_11D5_BC1D_006097638FC1__INCLUDED_)
