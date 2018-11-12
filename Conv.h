// Conv.h: interface for the CConv class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_CONV_H__6CC661A0_0274_11D5_BC1D_006097638FC1__INCLUDED_)
#define AFX_CONV_H__6CC661A0_0274_11D5_BC1D_006097638FC1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "ikand.h"
#include "corresp.h"
#include "codes.h"

class CConv  
{
public:
	CConv();
	virtual ~CConv();

	FILE *in;
	CIkand m_setikand;
	CCorresp m_setcorresp;
	CCodes m_setcodes;
	char waarde[30];

	CString m_id;
	CString m_projnr;
	CString m_kndsta;
	CString m_match;
	CString m_gebdat;
	CString m_sexe;
	CString m_hdvbtyp;
	CString m_hsalsch;
	CString m_hfaccod;
	CString m_hfunomv;
	CString m_wpobp;
	CString m_anmdat;
	CString m_anmred;
	CString m_advmob;
	CString m_afmred;
	CString m_afmdat;
	CString m_agdred;
	CString m_agddate;
	CString m_nwdvbtyp;
	CString m_traject;
	CString m_pid;
	CString m_rubriek;
	CString m_contsrt;
	CString m_datum;
	CString m_code;
	CString m_omschrijf;

	conversie();
	ikand();
	corresp();
	codes();
	lees_ikand();
	schr_ikand();
	lees_corresp();
	schr_corresp();
	lees_codes();
	schr_codes();
	lees_waarde();
};

#endif // !defined(AFX_CONV_H__6CC661A0_0274_11D5_BC1D_006097638FC1__INCLUDED_)
