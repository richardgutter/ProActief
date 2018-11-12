#if !defined(AFX_CODES_H__6CC661AF_0274_11D5_BC1D_006097638FC1__INCLUDED_)
#define AFX_CODES_H__6CC661AF_0274_11D5_BC1D_006097638FC1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Codes.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CCodes recordset

class CCodes : public CRecordset
{
public:
	CCodes(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(CCodes)

// Field/Param Data
	//{{AFX_FIELD(CCodes, CRecordset)
	CString	m_rubriek;
	CString	m_code;
	CString	m_omschrijf;
	//}}AFX_FIELD


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCodes)
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

#endif // !defined(AFX_CODES_H__6CC661AF_0274_11D5_BC1D_006097638FC1__INCLUDED_)
