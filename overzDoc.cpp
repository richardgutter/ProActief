// overzDoc.cpp : implementation of the COverzDoc class
//

#include "stdafx.h"
#include "overz.h"

#include "overzDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// COverzDoc

IMPLEMENT_DYNCREATE(COverzDoc, CDocument)

BEGIN_MESSAGE_MAP(COverzDoc, CDocument)
	//{{AFX_MSG_MAP(COverzDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// COverzDoc construction/destruction

COverzDoc::COverzDoc()
{
	// TODO: add one-time construction code here

}

COverzDoc::~COverzDoc()
{
}

BOOL COverzDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// COverzDoc serialization

void COverzDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// COverzDoc diagnostics

#ifdef _DEBUG
void COverzDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void COverzDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// COverzDoc commands
