#if !defined(AFX_CORRESP_H__C44E9F4D_0333_11D5_BC1D_006097638FC1__INCLUDED_)
#define AFX_CORRESP_H__C44E9F4D_0333_11D5_BC1D_006097638FC1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Corresp.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CCorresp recordset

class CCorresp : public CRecordset
{
public:
	CCorresp(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(CCorresp)

// Field/Param Data
	//{{AFX_FIELD(CCorresp, CRecordset)
	CString	m_pid;
	long	m_teller;
	CString	m_rubriek;
	CString	m_contsrt;
	CString	m_datum;
	//}}AFX_FIELD


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCorresp)
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

#endif // !defined(AFX_CORRESP_H__C44E9F4D_0333_11D5_BC1D_006097638FC1__INCLUDED_)
