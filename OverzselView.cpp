// OverzselView.cpp : implementation file
//

#include "stdafx.h"
#include "overz.h"
#include "OverzselView.h"

#include "ikand.h"
#include "corresp.h"
#include "codes.h"
#include <stdio.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// COverzselView

IMPLEMENT_DYNCREATE(COverzselView, CScrollView)

COverzselView::COverzselView()
{
}

COverzselView::~COverzselView()
{
}


BEGIN_MESSAGE_MAP(COverzselView, CScrollView)
	//{{AFX_MSG_MAP(COverzselView)
	ON_COMMAND(ID_FILE_BESTANDCSV, OnFileBestandcsv)
	ON_COMMAND(ID_FILE_BESTANDTXT, OnFileBestandtxt)
	//}}AFX_MSG_MAP
	ON_COMMAND(ID_FILE_PRINT, CScrollView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CScrollView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CScrollView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// COverzselView drawing

extern COverzApp theApp;

void COverzselView::OnInitialUpdate()
{
	BeginWaitCursor();
	CScrollView::OnInitialUpdate();

	CSize sizeTotal;
	// TODO: calculate the total size of this view
	sizeTotal.cx = sizeTotal.cy = 100;
	SetScrollSizes(MM_TEXT, sizeTotal);
	GetDocument()->SetTitle("Overzicht selectie");

	m_advmob = theApp.m_advmob;
	m_afmdattot = theApp.m_afmdattot;
	m_afmdatvan = theApp.m_afmdatvan;
	m_afmdattotuitz = theApp.m_afmdattotuitz;
	m_afmdatvanuitz = theApp.m_afmdatvanuitz;
	m_afmred = theApp.m_afmred;
	m_afmreduitz = theApp.m_afmreduitz;
	m_agddatetot = theApp.m_agddatetot;
	m_agddatevan = theApp.m_agddatevan;
	m_agdred = theApp.m_agdred;
	m_agdreduitz = theApp.m_agdreduitz;
	m_anmdattot = theApp.m_anmdattot;
	m_anmdatvan = theApp.m_anmdatvan;
	m_anmred = theApp.m_anmred;
	m_anmreduitz = theApp.m_anmreduitz;
	m_contsrt = theApp.m_contsrt;
	m_datumtot = theApp.m_datumtot;
	m_datumvan = theApp.m_datumvan;
	m_gebdatvan = theApp.m_gebdatvan;
	m_hdvbtyp = theApp.m_hdvbtyp;
	m_hfaccod = theApp.m_hfaccod;
	m_hfunomv = theApp.m_hfunomv;
	m_match = theApp.m_match;
	m_projnrtot = theApp.m_projnrtot;
	m_projnrvan = theApp.m_projnrvan;
	m_projnruitz = theApp.m_projnruitz;
	m_rubriek = theApp.m_rubriek;
	m_sexe = theApp.m_sexe;
	m_traject = theApp.m_traject;
	m_trajectuitz = theApp.m_trajectuitz;
	m_wpobp = theApp.m_wpobp;
	m_gebdattot = theApp.m_gebdattot;
	m_kndsta = theApp.m_kndsta;
	m_kndstauitz = theApp.m_kndstauitz;
	m_hsalsch = theApp.m_hsalsch;

	CString gebdatvan;
	CString gebdattot;
	CString anmdatvan;
	CString anmdattot;
	CString afmdatvan;
	CString afmdattot;
	CString afmdatvanuitz;
	CString afmdattotuitz;
	CString agddatevan;
	CString agddatetot;
	CString datumvan;
	CString datumtot;
	
	gebdatvan = m_gebdatvan;
	gebdattot = m_gebdattot;
	anmdatvan = m_anmdatvan;
	anmdattot = m_anmdattot;
	afmdatvan = m_afmdatvan;
	afmdattot = m_afmdattot;
	afmdatvanuitz = m_afmdatvanuitz;
	afmdattotuitz = m_afmdattotuitz;
	agddatevan = m_agddatevan;
	agddatetot = m_agddatetot;
	datumvan = m_datumvan;
	datumtot = m_datumtot;

	if (m_gebdatvan != "")
		m_gebdatvan = m_gebdatvan.Right(4) + m_gebdatvan.Mid(3, 2) + m_gebdatvan.Left(2);
	if (m_gebdattot != "")
		m_gebdattot = m_gebdattot.Right(4) + m_gebdattot.Mid(3, 2) + m_gebdattot.Left(2);
	if (m_anmdattot != "")
		m_anmdattot = m_anmdattot.Right(4) + m_anmdattot.Mid(3, 2) + m_anmdattot.Left(2);
	if (m_anmdatvan != "")
		m_anmdatvan = m_anmdatvan.Right(4) + m_anmdatvan.Mid(3, 2) + m_anmdatvan.Left(2);
	if (m_afmdattot != "")
		m_afmdattot = m_afmdattot.Right(4) + m_afmdattot.Mid(3, 2) + m_afmdattot.Left(2);
	if (m_afmdatvan != "")
		m_afmdatvan = m_afmdatvan.Right(4) + m_afmdatvan.Mid(3, 2) + m_afmdatvan.Left(2);
	if (m_afmdattotuitz != "")
		m_afmdattotuitz = m_afmdattotuitz.Right(4) + m_afmdattotuitz.Mid(3, 2) + m_afmdattotuitz.Left(2);
	if (m_afmdatvanuitz != "")
		m_afmdatvanuitz = m_afmdatvanuitz.Right(4) + m_afmdatvanuitz.Mid(3, 2) + m_afmdatvanuitz.Left(2);
	if (m_agddatetot != "")
		m_agddatetot = m_agddatetot.Right(4) + m_agddatetot.Mid(3, 2) + m_agddatetot.Left(2);
	if (m_agddatevan != "")
		m_agddatevan = m_agddatevan.Right(4) + m_agddatevan.Mid(3, 2) + m_agddatevan.Left(2);
	if (m_datumtot != "")
		m_datumtot = m_datumtot.Right(4) + m_datumtot.Mid(3, 2) + m_datumtot.Left(2);
	if (m_datumvan != "")
		m_datumvan = m_datumvan.Right(4) + m_datumvan.Mid(3, 2) + m_datumvan.Left(2);


	coderingen();	
	
	CString m_zoekwaarde;
	CString m_zoekwaarde2;

	CString m_str_deel;
	char m_char_deel[7];
	int lengte, i, j, begin;
	BOOL klaar, stoppen, eerste;

	m_zoekwaarde   = "";
	m_zoekwaarde2  = "";
	m_extra_regels = 0;

	if (m_projnrvan != "")
	{
		m_extra_regels++;

		m_zoekwaarde += "projnr >= '" + m_projnrvan + "'";
	}

	if (m_projnrtot != "")
	{
		if (m_projnrvan == "")
			m_extra_regels++;

		if (m_zoekwaarde != "") 
			m_zoekwaarde += " and ";
		m_zoekwaarde += "projnr <= '" + m_projnrtot + "'";
	}

	if (m_projnruitz != "")
	{
		m_extra_regels++;

		if (m_zoekwaarde != "") 
			m_zoekwaarde += " and ";

		lengte = m_projnruitz.GetLength();
		eerste = TRUE;
		begin = 0;

		klaar = FALSE;
		while (!klaar)
		{
			j = 0;
			stoppen = FALSE;
			for (i = begin; i < lengte && !stoppen; i++)
			{
				m_char_deel[j] = m_projnruitz[i];
				if (m_char_deel[j] == ';')
				{
					m_char_deel[j] = '\0';
					stoppen = TRUE;
				}
				j++;
			}
			if (i == lengte)
			{
				m_char_deel[j] = '\0';
				stoppen = TRUE;
			}

			begin = i;

			m_str_deel = (CString) m_char_deel;
			if (eerste)
			{
				eerste = FALSE;
				m_zoekwaarde += "projnr <> '" + m_str_deel + "'";
			}
			else
				m_zoekwaarde += " and projnr <> '" + m_str_deel + "'";

			klaar = (i == lengte);
		}
	}

	if (m_kndsta != "")
	{
		m_extra_regels++;

		if (m_zoekwaarde != "") 
			m_zoekwaarde += " and ";

		lengte = m_kndsta.GetLength();
		eerste = TRUE;
		begin = 0;

		klaar = FALSE;
		while (!klaar)
		{
			j = 0;
			stoppen = FALSE;
			for (i = begin; i < lengte && !stoppen; i++)
			{
				m_char_deel[j] = m_kndsta[i];
				if (m_char_deel[j] == ';')
				{
					m_char_deel[j] = '\0';
					stoppen = TRUE;
				}
				j++;
			}
			if (i == lengte)
			{
				m_char_deel[j] = '\0';
				stoppen = TRUE;
			}

			begin = i;

			m_str_deel = (CString) m_char_deel;
			if (eerste)
			{
				eerste = FALSE;
				m_zoekwaarde += "(kndsta = '" + m_str_deel + "'";
			}
			else
				m_zoekwaarde += " or kndsta = '" + m_str_deel + "'";

			klaar = (i == lengte);
		}
		m_zoekwaarde += ")";
	}

	if (m_kndstauitz != "")
	{
		m_extra_regels++;

		if (m_zoekwaarde != "") 
			m_zoekwaarde += " and ";

		lengte = m_kndstauitz.GetLength();
		eerste = TRUE;
		begin = 0;

		klaar = FALSE;
		while (!klaar)
		{
			j = 0;
			stoppen = FALSE;
			for (i = begin; i < lengte && !stoppen; i++)
			{
				m_char_deel[j] = m_kndstauitz[i];
				if (m_char_deel[j] == ';')
				{
					m_char_deel[j] = '\0';
					stoppen = TRUE;
				}
				j++;
			}
			if (i == lengte)
			{
				m_char_deel[j] = '\0';
				stoppen = TRUE;
			}

			begin = i;

			m_str_deel = (CString) m_char_deel;
			if (eerste)
			{
				eerste = FALSE;
				m_zoekwaarde += "kndsta <> '" + m_str_deel + "'";
			}
			else
				m_zoekwaarde += " and kndsta <> '" + m_str_deel + "'";

			klaar = (i == lengte);
		}
	}

	if (m_match != "")
	{
		m_extra_regels++;

		if (m_zoekwaarde != "") 
			m_zoekwaarde += " and ";
		m_zoekwaarde += "match = '" + m_match + "'";
	}

	if (m_gebdattot != "")
	{
		if (m_gebdatvan == "")
			m_extra_regels++;

		if (m_zoekwaarde != "") 
			m_zoekwaarde += " and ";
		m_zoekwaarde += "gebdat <= '" + m_gebdattot + "'";
	}

	if (m_gebdatvan != "")
	{
		m_extra_regels++;

		if (m_zoekwaarde != "") 
			m_zoekwaarde += " and ";
		m_zoekwaarde += "gebdat >= '" + m_gebdatvan + "'";
	}

	if (m_sexe != "")
	{
		m_extra_regels++;

		if (m_zoekwaarde != "") 
			m_zoekwaarde += " and ";
		m_zoekwaarde += "sexe = '" + m_sexe + "'";
	}

	if (m_hdvbtyp != "")
	{
		m_extra_regels++;

		if (m_zoekwaarde != "") 
			m_zoekwaarde += " and ";

		lengte = m_hdvbtyp.GetLength();
		eerste = TRUE;
		begin = 0;

		klaar = FALSE;
		while (!klaar)
		{
			j = 0;
			stoppen = FALSE;
			for (i = begin; i < lengte && !stoppen; i++)
			{
				m_char_deel[j] = m_hdvbtyp[i];
				if (m_char_deel[j] == ';')
				{
					m_char_deel[j] = '\0';
					stoppen = TRUE;
				}
				j++;
			}
			if (i == lengte)
			{
				m_char_deel[j] = '\0';
				stoppen = TRUE;
			}

			begin = i;

			m_str_deel = (CString) m_char_deel;
			if (eerste)
			{
				eerste = FALSE;
				m_zoekwaarde += "(hdvbtyp = '" + m_str_deel + "'";
			}
			else
				m_zoekwaarde += " or hdvbtyp = '" + m_str_deel + "'";

			klaar = (i == lengte);
		}
		m_zoekwaarde += ")";
	}

	if (m_hsalsch != "")
	{
		m_extra_regels++;

		if (m_zoekwaarde != "") 
			m_zoekwaarde += " and ";

		lengte = m_hsalsch.GetLength();
		eerste = TRUE;
		begin = 0;

		klaar = FALSE;
		while (!klaar)
		{
			j = 0;
			stoppen = FALSE;
			for (i = begin; i < lengte && !stoppen; i++)
			{
				m_char_deel[j] = m_hsalsch[i];
				if (m_char_deel[j] == ';')
				{
					m_char_deel[j] = '\0';
					stoppen = TRUE;
				}
				j++;
			}
			if (i == lengte)
			{
				m_char_deel[j] = '\0';
				stoppen = TRUE;
			}

			begin = i;

			m_str_deel = (CString) m_char_deel;
			if (eerste)
			{
				eerste = FALSE;
				m_zoekwaarde += "(hsalsch = '" + m_str_deel + "'";
			}
			else
				m_zoekwaarde += " or hsalsch = '" + m_str_deel + "'";

			klaar = (i == lengte);
		}
		m_zoekwaarde += ")";
	}

	if (m_hfaccod != "")
	{
		m_extra_regels++;

		if (m_zoekwaarde != "") 
			m_zoekwaarde += " and ";

		lengte = m_hfaccod.GetLength();
		eerste = TRUE;
		begin = 0;

		klaar = FALSE;
		while (!klaar)
		{
			j = 0;
			stoppen = FALSE;
			for (i = begin; i < lengte && !stoppen; i++)
			{
				m_char_deel[j] = m_hfaccod[i];
				if (m_char_deel[j] == ';')
				{
					m_char_deel[j] = '\0';
					stoppen = TRUE;
				}
				j++;
			}
			if (i == lengte)
			{
				m_char_deel[j] = '\0';
				stoppen = TRUE;
			}

			begin = i;

			m_str_deel = (CString) m_char_deel;
			if (eerste)
			{
				eerste = FALSE;
				m_zoekwaarde += "(hfaccod = '" + m_str_deel + "'";
			}
			else
				m_zoekwaarde += " or hfaccod = '" + m_str_deel + "'";

			klaar = (i == lengte);
		}
		m_zoekwaarde += ")";
	}

	if (m_hfunomv != "")
	{
		m_extra_regels++;

		if (m_zoekwaarde != "") 
			m_zoekwaarde += " and ";
		m_zoekwaarde += "hfunomv = '" + m_hfunomv + "'";
	}

	if (m_wpobp != "")
	{
		m_extra_regels++;

		if (m_zoekwaarde != "") 
			m_zoekwaarde += " and ";

		lengte = m_wpobp.GetLength();
		eerste = TRUE;
		begin = 0;

		klaar = FALSE;
		while (!klaar)
		{
			j = 0;
			stoppen = FALSE;
			for (i = begin; i < lengte && !stoppen; i++)
			{
				m_char_deel[j] = m_wpobp[i];
				if (m_char_deel[j] == ';')
				{
					m_char_deel[j] = '\0';
					stoppen = TRUE;
				}
				j++;
			}
			if (i == lengte)
			{
				m_char_deel[j] = '\0';
				stoppen = TRUE;
			}

			begin = i;

			m_str_deel = (CString) m_char_deel;
			if (eerste)
			{
				eerste = FALSE;
				m_zoekwaarde += "(wpobp = '" + m_str_deel + "'";
			}
			else
				m_zoekwaarde += " or wpobp = '" + m_str_deel + "'";

			klaar = (i == lengte);
		}
		m_zoekwaarde += ")";
	}

	if (m_anmdatvan != "")
	{
		m_extra_regels++;

		if (m_zoekwaarde != "") 
			m_zoekwaarde += " and ";
		m_zoekwaarde += "anmdat >= '" + m_anmdatvan + "'";
	}

	if (m_anmdattot != "")
	{
		if (m_anmdatvan == "")
			m_extra_regels++;

		if (m_zoekwaarde != "") 
			m_zoekwaarde += " and ";
		m_zoekwaarde += "anmdat <= '" + m_anmdattot + "'";
	}

	if (m_anmred != "")
	{
		m_extra_regels++;

		if (m_zoekwaarde != "") 
			m_zoekwaarde += " and ";

		lengte = m_anmred.GetLength();
		eerste = TRUE;
		begin = 0;

		klaar = FALSE;
		while (!klaar)
		{
			j = 0;
			stoppen = FALSE;
			for (i = begin; i < lengte && !stoppen; i++)
			{
				m_char_deel[j] = m_anmred[i];
				if (m_char_deel[j] == ';')
				{
					m_char_deel[j] = '\0';
					stoppen = TRUE;
				}
				j++;
			}
			if (i == lengte)
			{
				m_char_deel[j] = '\0';
				stoppen = TRUE;
			}

			begin = i;

			m_str_deel = (CString) m_char_deel;
			if (eerste)
			{
				eerste = FALSE;
				m_zoekwaarde += "(anmred = '" + m_str_deel + "'";
			}
			else
				m_zoekwaarde += " or anmred = '" + m_str_deel + "'";

			klaar = (i == lengte);
		}
		m_zoekwaarde += ")";
	}

	if (m_anmreduitz != "")
	{
		m_extra_regels++;

		if (m_zoekwaarde != "") 
			m_zoekwaarde += " and ";

		lengte = m_anmreduitz.GetLength();
		eerste = TRUE;
		begin = 0;

		klaar = FALSE;
		while (!klaar)
		{
			j = 0;
			stoppen = FALSE;
			for (i = begin; i < lengte && !stoppen; i++)
			{
				m_char_deel[j] = m_anmreduitz[i];
				if (m_char_deel[j] == ';')
				{
					m_char_deel[j] = '\0';
					stoppen = TRUE;
				}
				j++;
			}
			if (i == lengte)
			{
				m_char_deel[j] = '\0';
				stoppen = TRUE;
			}

			begin = i;

			m_str_deel = (CString) m_char_deel;
			if (eerste)
			{
				eerste = FALSE;
				m_zoekwaarde += "anmred <> '" + m_str_deel + "'";
			}
			else
				m_zoekwaarde += " and anmred <> '" + m_str_deel + "'";

			klaar = (i == lengte);
		}
	}

	if (m_afmdatvan != "")
	{
		m_extra_regels++;

		if (m_zoekwaarde != "") 
			m_zoekwaarde += " and ";
		m_zoekwaarde += "afmdat >= '" + m_afmdatvan + "'";
	}

	if (m_afmdattot != "")
	{
		if (m_afmdatvan == "")
			m_extra_regels++;

		if (m_zoekwaarde != "") 
			m_zoekwaarde += " and ";
		m_zoekwaarde += "afmdat <= '" + m_afmdattot + "'";
	}

	if (m_afmdatvanuitz != "" && m_afmdattotuitz != "")
	{
		m_extra_regels++;

		if (m_zoekwaarde != "") 
			m_zoekwaarde += " and ";
		m_zoekwaarde += "(afmdat <= '" + m_afmdatvanuitz + "'";
		m_zoekwaarde += " or afmdat >= '" + m_afmdattotuitz + "')";
	}
	else if (m_afmdatvanuitz != "")
	{
		m_extra_regels++;

		if (m_zoekwaarde != "") 
			m_zoekwaarde += " and ";
		m_zoekwaarde += "afmdat <= '" + m_afmdatvanuitz + "'";
	}
	else if (m_afmdattotuitz != "")
	{
		m_extra_regels++;

		if (m_zoekwaarde != "") 
			m_zoekwaarde += " and ";
		m_zoekwaarde += "afmdat >= '" + m_afmdattotuitz + "'";
	}

	if (m_afmred != "")
	{
		m_extra_regels++;

		if (m_zoekwaarde != "") 
			m_zoekwaarde += " and ";

		lengte = m_afmred.GetLength();
		eerste = TRUE;
		begin = 0;

		klaar = FALSE;
		while (!klaar)
		{
			j = 0;
			stoppen = FALSE;
			for (i = begin; i < lengte && !stoppen; i++)
			{
				m_char_deel[j] = m_afmred[i];
				if (m_char_deel[j] == ';')
				{
					m_char_deel[j] = '\0';
					stoppen = TRUE;
				}
				j++;
			}
			if (i == lengte)
			{
				m_char_deel[j] = '\0';
				stoppen = TRUE;
			}

			begin = i;

			m_str_deel = (CString) m_char_deel;
			if (eerste)
			{
				eerste = FALSE;
				m_zoekwaarde += "(afmred = '" + m_str_deel + "'";
			}
			else
				m_zoekwaarde += " or afmred = '" + m_str_deel + "'";

			klaar = (i == lengte);
		}
		m_zoekwaarde += ")";
	}

	if (m_afmreduitz != "")
	{
		m_extra_regels++;

		if (m_zoekwaarde != "") 
			m_zoekwaarde += " and ";

		lengte = m_afmreduitz.GetLength();
		eerste = TRUE;
		begin = 0;

		klaar = FALSE;
		while (!klaar)
		{
			j = 0;
			stoppen = FALSE;
			for (i = begin; i < lengte && !stoppen; i++)
			{
				m_char_deel[j] = m_afmreduitz[i];
				if (m_char_deel[j] == ';')
				{
					m_char_deel[j] = '\0';
					stoppen = TRUE;
				}
				j++;
			}
			if (i == lengte)
			{
				m_char_deel[j] = '\0';
				stoppen = TRUE;
			}

			begin = i;

			m_str_deel = (CString) m_char_deel;
			if (eerste)
			{
				eerste = FALSE;
				m_zoekwaarde += "afmred <> '" + m_str_deel + "'";
			}
			else
				m_zoekwaarde += " and afmred <> '" + m_str_deel + "'";

			klaar = (i == lengte);
		}
	}

	if (m_agddatevan != "")
	{
		m_extra_regels++;

		if (m_zoekwaarde != "") 
			m_zoekwaarde += " and ";
		m_zoekwaarde += "agddate >= '" + m_agddatevan + "'";
	}

	if (m_agddatetot != "")
	{
		if (m_agddatevan == "")
			m_extra_regels++;

		if (m_zoekwaarde != "") 
			m_zoekwaarde += " and ";
		m_zoekwaarde += "agddate <= '" + m_agddatetot + "'";
	}

	if (m_agdred != "")
	{
		m_extra_regels++;

		if (m_zoekwaarde != "") 
			m_zoekwaarde += " and ";

		lengte = m_agdred.GetLength();
		eerste = TRUE;
		begin = 0;

		klaar = FALSE;
		while (!klaar)
		{
			j = 0;
			stoppen = FALSE;
			for (i = begin; i < lengte && !stoppen; i++)
			{
				m_char_deel[j] = m_agdred[i];
				if (m_char_deel[j] == ';')
				{
					m_char_deel[j] = '\0';
					stoppen = TRUE;
				}
				j++;
			}
			if (i == lengte)
			{
				m_char_deel[j] = '\0';
				stoppen = TRUE;
			}

			begin = i;

			m_str_deel = (CString) m_char_deel;
			if (eerste)
			{
				eerste = FALSE;
				m_zoekwaarde += "(agdred = '" + m_str_deel + "'";
			}
			else
				m_zoekwaarde += " or agdred = '" + m_str_deel + "'";

			klaar = (i == lengte);
		}
		m_zoekwaarde += ")";
	}

	if (m_agdreduitz != "")
	{
		m_extra_regels++;

		if (m_zoekwaarde != "") 
			m_zoekwaarde += " and ";

		lengte = m_agdreduitz.GetLength();
		eerste = TRUE;
		begin = 0;

		klaar = FALSE;
		while (!klaar)
		{
			j = 0;
			stoppen = FALSE;
			for (i = begin; i < lengte && !stoppen; i++)
			{
				m_char_deel[j] = m_agdreduitz[i];
				if (m_char_deel[j] == ';')
				{
					m_char_deel[j] = '\0';
					stoppen = TRUE;
				}
				j++;
			}
			if (i == lengte)
			{
				m_char_deel[j] = '\0';
				stoppen = TRUE;
			}

			begin = i;

			m_str_deel = (CString) m_char_deel;
			if (eerste)
			{
				eerste = FALSE;
				m_zoekwaarde += "agdred <> '" + m_str_deel + "'";
			}
			else
				m_zoekwaarde += " and agdred <> '" + m_str_deel + "'";

			klaar = (i == lengte);
		}
	}

	if (m_advmob != "")
	{
		m_extra_regels++;

		if (m_zoekwaarde != "") 
			m_zoekwaarde += " and ";

		lengte = m_advmob.GetLength();
		eerste = TRUE;
		begin = 0;

		klaar = FALSE;
		while (!klaar)
		{
			j = 0;
			stoppen = FALSE;
			for (i = begin; i < lengte && !stoppen; i++)
			{
				m_char_deel[j] = m_advmob[i];
				if (m_char_deel[j] == ';')
				{
					m_char_deel[j] = '\0';
					stoppen = TRUE;
				}
				j++;
			}
			if (i == lengte)
			{
				m_char_deel[j] = '\0';
				stoppen = TRUE;
			}

			begin = i;

			m_str_deel = (CString) m_char_deel;
			if (eerste)
			{
				eerste = FALSE;
				m_zoekwaarde += "(advmob = '" + m_str_deel + "'";
			}
			else
				m_zoekwaarde += " or advmob = '" + m_str_deel + "'";

			klaar = (i == lengte);
		}
		m_zoekwaarde += ")";
	}

	if (m_traject != "")
	{
		m_extra_regels++;

		if (m_zoekwaarde != "") 
			m_zoekwaarde += " and ";

		lengte = m_traject.GetLength();
		eerste = TRUE;
		begin = 0;

		klaar = FALSE;
		while (!klaar)
		{
			j = 0;
			stoppen = FALSE;
			for (i = begin; i < lengte && !stoppen; i++)
			{
				m_char_deel[j] = m_traject[i];
				if (m_char_deel[j] == ';')
				{
					m_char_deel[j] = '\0';
					stoppen = TRUE;
				}
				j++;
			}
			if (i == lengte)
			{
				m_char_deel[j] = '\0';
				stoppen = TRUE;
			}

			begin = i;

			m_str_deel = (CString) m_char_deel;
			if (eerste)
			{
				eerste = FALSE;
				m_zoekwaarde += "(traject = '" + m_str_deel + "'";
			}
			else
				m_zoekwaarde += " or traject = '" + m_str_deel + "'";

			klaar = (i == lengte);
		}
		m_zoekwaarde += ")";
	}

	if (m_trajectuitz != "")
	{
		m_extra_regels++;

		if (m_zoekwaarde != "") 
			m_zoekwaarde += " and ";

		lengte = m_trajectuitz.GetLength();
		eerste = TRUE;
		begin = 0;

		klaar = FALSE;
		while (!klaar)
		{
			j = 0;
			stoppen = FALSE;
			for (i = begin; i < lengte && !stoppen; i++)
			{
				m_char_deel[j] = m_trajectuitz[i];
				if (m_char_deel[j] == ';')
				{
					m_char_deel[j] = '\0';
					stoppen = TRUE;
				}
				j++;
			}
			if (i == lengte)
			{
				m_char_deel[j] = '\0';
				stoppen = TRUE;
			}

			begin = i;

			m_str_deel = (CString) m_char_deel;
			if (eerste)
			{
				eerste = FALSE;
				m_zoekwaarde += "traject <> '" + m_str_deel + "'";
			}
			else
				m_zoekwaarde += " and traject <> '" + m_str_deel + "'";

			klaar = (i == lengte);
		}
	}

	if (m_rubriek != "")
	{
		m_extra_regels++;

		lengte = m_rubriek.GetLength();
		eerste = TRUE;
		begin = 0;

		klaar = FALSE;
		while (!klaar)
		{
			j = 0;
			stoppen = FALSE;
			for (i = begin; i < lengte && !stoppen; i++)
			{
				m_char_deel[j] = m_rubriek[i];
				if (m_char_deel[j] == ';')
				{
					m_char_deel[j] = '\0';
					stoppen = TRUE;
				}
				j++;
			}
			if (i == lengte)
			{
				m_char_deel[j] = '\0';
				stoppen = TRUE;
			}

			begin = i;

			m_str_deel = (CString) m_char_deel;
			if (eerste)
			{
				eerste = FALSE;
				m_zoekwaarde2 += "(rubriek = '" + m_str_deel + "'";
			}
			else
				m_zoekwaarde2 += " or rubriek = '" + m_str_deel + "'";

			klaar = (i == lengte);
		}
		m_zoekwaarde2 += ")";
	}

	if (m_contsrt != "")
	{
		m_extra_regels++;

		if (m_zoekwaarde2 != "") 
			m_zoekwaarde2 += " and ";

		lengte = m_contsrt.GetLength();
		eerste = TRUE;
		begin = 0;

		klaar = FALSE;
		while (!klaar)
		{
			j = 0;
			stoppen = FALSE;
			for (i = begin; i < lengte && !stoppen; i++)
			{
				m_char_deel[j] = m_contsrt[i];
				if (m_char_deel[j] == ';')
				{
					m_char_deel[j] = '\0';
					stoppen = TRUE;
				}
				j++;
			}
			if (i == lengte)
			{
				m_char_deel[j] = '\0';
				stoppen = TRUE;
			}

			begin = i;

			m_str_deel = (CString) m_char_deel;
			if (eerste)
			{
				eerste = FALSE;
				m_zoekwaarde2 += "(contsrt = '" + m_str_deel + "'";
			}
			else
				m_zoekwaarde2 += " or contsrt = '" + m_str_deel + "'";

			klaar = (i == lengte);
		}
		m_zoekwaarde2 += ")";
	}

	if (m_datumvan != "")
	{
		m_extra_regels++;

		if (m_zoekwaarde2 != "") 
			m_zoekwaarde2 += " and ";
		m_zoekwaarde2 += "datum >= '" + m_datumvan + "'";
	}

	if (m_datumtot != "")
	{
		if (m_datumvan == "")
			m_extra_regels++;

		if (m_zoekwaarde2 != "") 
			m_zoekwaarde2 += " and ";
		m_zoekwaarde2 += "datum <= '" + m_datumtot + "'";
	}

	m_gebdatvan = gebdatvan;
	m_gebdattot = gebdattot;
	m_anmdatvan = anmdatvan;
	m_anmdattot = anmdattot;
	m_afmdatvan = afmdatvan;
	m_afmdattot = afmdattot;
	m_afmdatvanuitz = afmdatvanuitz;
	m_afmdattotuitz = afmdattotuitz;
	m_agddatevan = agddatevan;
	m_agddatetot = agddatetot;
	m_datumvan = datumvan;
	m_datumtot = datumtot;

	m_selcorresp = (m_zoekwaarde2 != "");

	m_setikand.m_strSort   = "id";
	m_setikand.m_strFilter = m_zoekwaarde;
	m_setikand.Open();

	m_setcorresp.m_strSort   = "pid, teller";
	m_setcorresp.m_strFilter = m_zoekwaarde2;
	m_setcorresp.Open();
	
	statistiek();

	m_setikand.Close();
	m_setcorresp.Close();


	SIZE m_size;

	m_aantal_regels = max_soort + max_bemiddelaar + max_salschaal + max_status +
		max_faculteit + max_traject + max_wpobp + max_afmreden + max_geslacht + max_match;
	m_aantal_regels += 120;
	if (m_extra_regels)
		m_aantal_regels += 3;
	m_aantal_regels += m_extra_regels;

	m_size.cx = 1000;
	m_size.cy = m_aantal_regels * 15;
	
	SetScrollSizes(MM_TEXT, m_size);
	EndWaitCursor();
}

void COverzselView::coderingen()
{
	max_soort = 0;
	max_bemiddelaar = 0;
	max_salschaal = 0;
	max_status = 0;
	max_faculteit = 0;
	max_traject = 0;
	max_wpobp = 0;
	max_afmreden = 0;
	max_geslacht = 0;
	max_match = 0;

	m_setcodes.Open();

	while (!m_setcodes.IsEOF())
	{
		if (m_setcodes.m_rubriek == "921")
		{
			max_soort++;
			c_soort[max_soort] = m_setcodes.m_code.Left(4);
			n_soort[max_soort] = m_setcodes.m_omschrijf;
		}
		else if (m_setcodes.m_rubriek == "  4")
		{
			max_bemiddelaar++;
			c_bemiddelaar[max_bemiddelaar] = m_setcodes.m_code.Left(4);
			n_bemiddelaar[max_bemiddelaar] = m_setcodes.m_omschrijf;
		}
		else if (m_setcodes.m_rubriek == "  8")
		{
			max_status++;
			c_status[max_status] = m_setcodes.m_code.Left(1);
			n_status[max_status] = m_setcodes.m_omschrijf;
		}
		else if (m_setcodes.m_rubriek == " 11")
		{
			max_faculteit++;
			c_faculteit[max_faculteit] = m_setcodes.m_code.Left(6);
			n_faculteit[max_faculteit] = m_setcodes.m_omschrijf;
		}
		else if (m_setcodes.m_rubriek == " 14")
		{
			max_traject++;
			c_traject[max_traject] = m_setcodes.m_code.Left(4);
			n_traject[max_traject] = m_setcodes.m_omschrijf;
		}
		else if (m_setcodes.m_rubriek == " 21")
		{
			max_wpobp++;
			c_wpobp[max_wpobp] = m_setcodes.m_code.Left(1);
			n_wpobp[max_wpobp] = m_setcodes.m_omschrijf;
		}
		else if (m_setcodes.m_rubriek == "102")
		{
			max_afmreden++;
			c_afmreden[max_afmreden] = m_setcodes.m_code.Left(4);
			n_afmreden[max_afmreden] = m_setcodes.m_omschrijf;
		}
		else if (m_setcodes.m_rubriek == "901")
		{
			max_geslacht++;
			c_geslacht[max_geslacht] = m_setcodes.m_code.Left(1);
			n_geslacht[max_geslacht] = m_setcodes.m_omschrijf;
		}
		else if (m_setcodes.m_rubriek == "904")
		{
			max_match++;
			c_match[max_match] = m_setcodes.m_code.Left(1);
			n_match[max_match] = m_setcodes.m_omschrijf;
		}

		m_setcodes.MoveNext();
	}
	
	m_setcodes.Close();
}

void COverzselView::statistiek()
{
	COleDateTime m_vandaag, m_gebdat;
	COleDateTimeSpan verschil;
	int i;
	double aantal_jaren;
	CString m_strgebdat, m_tekst;

	m_vandaag = COleDateTime::GetCurrentTime();

	for (i = 1; i <= max_bemiddelaar; i++)
		a_bemiddelaar[i] = 0;

	for (i = 0; i <= 6; i++)
		a_salschaal[i] = 0;

	vast      = 0;
	tijdelijk = 0;

	for (i = 1; i <= max_status; i++)
		a_status[i] = 0;

	for (i = 1; i <= max_faculteit; i++)
		a_faculteit[i] = 0;

	for (i = 1; i <= max_traject; i++)
		a_traject[i] = 0;

	for (i = 1; i <= max_wpobp; i++)
		a_wpobp[i] = 0;

	for (i = 1; i <= max_afmreden; i++)
		a_afmreden[i] = 0;

	for (i = 1; i <= max_geslacht; i++)
		a_geslacht[i] = 0;

	for (i = 1; i <= max_match; i++)
		a_match[i] = 0;

	for (i = 1; i <= max_soort; i++)
		a_soort[i] = 0;

	for (i = 0; i <= 10; i++)
		a_leeftijd[i] = 0;

	tot_bemiddelaar = 0;
	tot_salschaal   = 0;
	tot_status      = 0;
	tot_type        = 0;
	tot_faculteit   = 0;
	tot_traject     = 0;
	tot_wpobp       = 0;
	tot_afmreden    = 0;
	tot_geslacht    = 0;
	tot_match       = 0;
	tot_soort       = 0;
	tot_leeftijd    = 0;
	som_leeftijd    = 0;

	m_records = 0;
	m_contacten = 0;
	while (!m_setikand.IsEOF())
	{
		while (m_setcorresp.m_pid < m_setikand.m_id && !m_setcorresp.IsEOF())
			m_setcorresp.MoveNext();

		if (!m_selcorresp || (m_setcorresp.m_pid == m_setikand.m_id && !m_setcorresp.IsEOF()))
		{
		m_records++;

		m_strgebdat = m_setikand.m_gebdat;
		if (m_strgebdat != "        ")
		{
			m_strgebdat = m_strgebdat.Right(2) + "-" + m_strgebdat.Mid(4, 2) + "-" + m_strgebdat.Left(4);
			m_gebdat.ParseDateTime(m_strgebdat, VAR_DATEVALUEONLY);
			verschil = m_vandaag - m_gebdat;
			aantal_jaren = (double) verschil.GetTotalDays() / 365.25;

			if      (aantal_jaren < 20)
				a_leeftijd[0]++;
			else if (aantal_jaren < 25)
				a_leeftijd[1]++;
			else if (aantal_jaren < 30)
				a_leeftijd[2]++;
			else if (aantal_jaren < 35)
				a_leeftijd[3]++;
			else if (aantal_jaren < 40)
				a_leeftijd[4]++;
			else if (aantal_jaren < 45)
				a_leeftijd[5]++;
			else if (aantal_jaren < 50)
				a_leeftijd[6]++;
			else if (aantal_jaren < 55)
				a_leeftijd[7]++;
			else if (aantal_jaren < 60)
				a_leeftijd[8]++;
			else if (aantal_jaren < 65)
				a_leeftijd[9]++;
			else
				a_leeftijd[10]++;

			tot_leeftijd++;
			som_leeftijd += aantal_jaren;
		}

		if (m_setikand.m_hdvbtyp != " ")
		{
			if (m_setikand.m_hdvbtyp == "1")
				tijdelijk++;
			else
				vast++;

			tot_type++;
		}

		if (m_setikand.m_hsalsch != "  ")
		{
			if (m_setikand.m_hsalsch == "04" ||  
					m_setikand.m_hsalsch == "05" || 
					m_setikand.m_hsalsch == "06")
				a_salschaal[0]++;
			else if (m_setikand.m_hsalsch == "07" ||  
					m_setikand.m_hsalsch == "08" || 
					m_setikand.m_hsalsch == "09")
				a_salschaal[1]++;
			else if (m_setikand.m_hsalsch == "10")
				a_salschaal[2]++;
			else if (m_setikand.m_hsalsch == "11")
				a_salschaal[3]++;
			else if (m_setikand.m_hsalsch == "12")
				a_salschaal[4]++;
			else if (m_setikand.m_hsalsch == "13" ||  
					m_setikand.m_hsalsch == "14" || 
					m_setikand.m_hsalsch == "15" || 
					m_setikand.m_hsalsch == "16" || 
					m_setikand.m_hsalsch == "17" || 
					m_setikand.m_hsalsch == "18")
				a_salschaal[5]++;
			else if (m_setikand.m_hsalsch == "0 " ||  
					m_setikand.m_hsalsch == "1 " || 
					m_setikand.m_hsalsch == "2 " || 
					m_setikand.m_hsalsch == "3 ")
				a_salschaal[6]++;

			tot_salschaal++;
		}

		i = 1;
		while (i <= max_bemiddelaar && c_bemiddelaar[i] != m_setikand.m_advmob)
			i++;
		if (c_bemiddelaar[i] == m_setikand.m_advmob)
		{
			a_bemiddelaar[i]++;
			tot_bemiddelaar++;
		}

		i = 1;
		while (i <= max_status && c_status[i] != m_setikand.m_kndsta)
			i++;
		if (c_status[i] == m_setikand.m_kndsta)
		{
			a_status[i]++;
			tot_status++;
		}

		i = 1;
		while (i <= max_faculteit && c_faculteit[i] != m_setikand.m_hfaccod)
			i++;
		if (c_faculteit[i] == m_setikand.m_hfaccod)
		{
			a_faculteit[i]++;
			tot_faculteit++;
		}

		i = 1;
		while (i <= max_traject && c_traject[i] != m_setikand.m_traject)
			i++;
		if (c_traject[i] == m_setikand.m_traject)
		{
			a_traject[i]++;
			tot_traject++;
		}

		i = 1;
		while (i <= max_wpobp && c_wpobp[i] != m_setikand.m_wpobp)
			i++;
		if (c_wpobp[i] == m_setikand.m_wpobp)
		{
			a_wpobp[i]++;
			tot_wpobp++;
		}

		i = 1;
		while (i <= max_afmreden && c_afmreden[i] != m_setikand.m_afmred)
			i++;
		if (c_afmreden[i] == m_setikand.m_afmred)
		{
			a_afmreden[i]++;
			tot_afmreden++;
		}

		i = 1;
		while (i <= max_geslacht && c_geslacht[i] != m_setikand.m_sexe)
			i++;
		if (c_geslacht[i] == m_setikand.m_sexe)
		{
			a_geslacht[i]++;
			tot_geslacht++;
		}

		i = 1;
		while (i <= max_match && c_match[i] != m_setikand.m_match)
			i++;
		if (c_match[i] == m_setikand.m_match)
		{
			a_match[i]++;
			tot_match++;
		}

		while (m_setcorresp.m_pid == m_setikand.m_id && !m_setcorresp.IsEOF())
		{
			m_contacten++;

			i = 1;
			while (i <= max_soort && c_soort[i] != m_setcorresp.m_contsrt)
				i++;
			if (c_soort[i] == m_setcorresp.m_contsrt)
			{
				a_soort[i]++;
				tot_soort++;
			}
			m_setcorresp.MoveNext();
		}
		}
		m_setikand.MoveNext();
	}

	if (m_records)
	{
		if (tot_bemiddelaar)
			for (i = 1; i <= max_bemiddelaar; i++)
				perc_bemiddelaar[i] = 100 * (double) a_bemiddelaar[i] / tot_bemiddelaar;
		else
			for (i = 1; i <= max_bemiddelaar; i++)
				perc_bemiddelaar[i] = 0;

		if (tot_type)
		{
			perc_vast = 100 * (double) vast / tot_type;
			perc_tijdelijk = 100 * (double) tijdelijk / tot_type;
		}
		else
		{
			perc_vast = 0;
			perc_tijdelijk = 0;
		}

		if (tot_salschaal)
			for (i = 0; i <= 6; i++)
				perc_salschaal[i] = 100 * (double) a_salschaal[i] / tot_salschaal;
		else
			for (i = 0; i <= 6; i++)
				perc_salschaal[i] = 0;

		if (tot_status)
			for (i = 1; i <= max_status; i++)
				perc_status[i] = 100 * (double) a_status[i] / tot_status;
		else
			for (i = 1; i <= max_status; i++)
				perc_status[i] = 0;

		if (tot_faculteit)
			for (i = 1; i <= max_faculteit; i++)
				perc_faculteit[i] = 100 * (double) a_faculteit[i] / tot_faculteit;
		else
			for (i = 1; i <= max_faculteit; i++)
				perc_faculteit[i] = 0;

		if (tot_traject)
			for (i = 1; i <= max_traject; i++)
				perc_traject[i] = 100 * (double) a_traject[i] / tot_traject;
		else
			for (i = 1; i <= max_traject; i++)
				perc_traject[i] = 0;

		if (tot_wpobp)
			for (i = 1; i <= max_wpobp; i++)
				perc_wpobp[i] = 100 * (double) a_wpobp[i] / tot_wpobp;
		else
			for (i = 1; i <= max_wpobp; i++)
				perc_wpobp[i] = 0;

		if (tot_afmreden)
			for (i = 1; i <= max_afmreden; i++)
				perc_afmreden[i] = 100 * (double) a_afmreden[i] / tot_afmreden;
		else
			for (i = 1; i <= max_afmreden; i++)
				perc_afmreden[i] = 0;

		if (tot_geslacht)
			for (i = 1; i <= max_geslacht; i++)
				perc_geslacht[i] = 100 * (double) a_geslacht[i] / tot_geslacht;
		else
			for (i = 1; i <= max_geslacht; i++)
				perc_geslacht[i] = 0;

		if (tot_match)
			for (i = 1; i <= max_match; i++)
				perc_match[i] = 100 * (double) a_match[i] / tot_match;
		else
			for (i = 1; i <= max_match; i++)
				perc_match[i] = 0;

		if (tot_soort)
			for (i = 1; i <= max_soort; i++)
				perc_soort[i] = 100 * (double) a_soort[i] / tot_soort;
		else
			for (i = 1; i <= max_soort; i++)
				perc_soort[i] = 0;

		if (tot_leeftijd)
			for (i = 0; i <= 10; i++)
				perc_leeftijd[i] = 100 * (double) a_leeftijd[i] / tot_leeftijd;
		else
			for (i = 0; i <= 10; i++)
				perc_leeftijd[i] = 0;

		gem_leeftijd = som_leeftijd / tot_leeftijd;
	}
	else
	{
		for (i = 1; i <= max_bemiddelaar; i++)
			perc_bemiddelaar[i] = 0;

		for (i = 0; i <= 6; i++)
			perc_salschaal[i] = 0;

		for (i = 1; i <= max_status; i++)
			perc_status[i] = 0;

		for (i = 1; i <= max_faculteit; i++)
			perc_faculteit[i] = 0;

		for (i = 1; i <= max_traject; i++)
			perc_traject[i] = 0;

		for (i = 1; i <= max_wpobp; i++)
			perc_wpobp[i] = 0;

		for (i = 1; i <= max_afmreden; i++)
			perc_afmreden[i] = 0;

		for (i = 1; i <= max_geslacht; i++)
			perc_geslacht[i] = 0;

		for (i = 1; i <= max_match; i++)
			perc_match[i] = 0;

		for (i = 1; i <= max_soort; i++)
			perc_soort[i] = 0;

		for (i = 0; i <= 10; i++)
			perc_leeftijd[i] = 0;

		gem_leeftijd = 0;
		perc_vast = 0;
		perc_tijdelijk = 0;
	}

}

void COverzselView::OnDraw(CDC* pDC)
{
	CDocument* pDoc = GetDocument();
	// TODO: add draw code here

	LOGFONT m_logfont;
		
	m_logfont.lfCharSet = ANSI_CHARSET;

	if (!pDC->IsPrinting())
		m_logfont.lfHeight  = 15;
	else
		m_logfont.lfHeight  = 100;

	m_logfont.lfWidth = 0;
	m_logfont.lfEscapement = 0;
	m_logfont.lfOrientation = 0;
	m_logfont.lfWeight = FW_NORMAL;
	m_logfont.lfItalic = 0;
	m_logfont.lfUnderline = 0;
	m_logfont.lfStrikeOut = 0;
	m_logfont.lfOutPrecision = OUT_DEFAULT_PRECIS;
	m_logfont.lfClipPrecision = CLIP_DEFAULT_PRECIS;
	m_logfont.lfQuality = PROOF_QUALITY;
	m_logfont.lfPitchAndFamily = VARIABLE_PITCH |FF_ROMAN;
	strcpy(m_logfont.lfFaceName, "Times New Roman");

	CFont* m_font = new CFont();
	m_font->CreateFontIndirect(&m_logfont);
	CFont* m_oldfont = pDC->SelectObject(m_font);

	if (!pDC->IsPrinting())
		ovz(pDC, 1);
	else
		prnt(pDC, 0.5);

	pDC->SelectObject(m_oldfont);
	delete m_font;
}

void COverzselView::ovz(CDC* pDC, double factor)
{
	COleDateTime m_vandaag;
	CString m_dag, m_tekst;
	int i;
	int y = 0;
	double perc;

	m_vandaag = COleDateTime::GetCurrentTime();
	m_dag = m_vandaag.Format("%d-%m-%Y");
	
	pDC->TextOut(factor * 5, y, "STATISTISCH  OVERZICHT  MENTOR (" + m_dag + ")");
	y += 30;
	m_tekst.Format("%d", m_records);
	pDC->TextOut(factor * 5, y, "Interne kandidaten, aantal geselecteerd : " + m_tekst + ".");
	y += 30;

	if (m_extra_regels)
		pDC->TextOut(factor * 5, y, "Selectie:");
	else
		pDC->TextOut(factor * 5, y, "Selectie:  geen.");

	y += 30;

	if (m_projnrvan != "" && m_projnrtot != "")
	{
		pDC->TextOut(factor * 5, y, "Projectnummers van " + m_projnrvan + " t/m " + m_projnrtot + ".");
		y += 15;
	}
	else if (m_projnrvan != "")
	{
		pDC->TextOut(factor * 5, y, "Projectnummers van " + m_projnrvan + ".");
		y += 15;
	}
	else if (m_projnrtot != "")
	{
		pDC->TextOut(factor * 5, y, "Projectnummers t/m " + m_projnrtot + ".");
		y += 15;
	}

	if (m_projnruitz != "")
	{
		pDC->TextOut(factor * 5, y, "Uitgezonderde projectnummers: " + m_projnruitz + ".");
		y += 15;
	}

	if (m_gebdatvan != "" && m_gebdattot != "")
	{
		pDC->TextOut(factor * 5, y, "Geboortedatum van " + m_gebdatvan + " t/m " + m_gebdattot + ".");
		y += 15;
	}
	else if (m_gebdatvan != "")
	{
		pDC->TextOut(factor * 5, y, "Geboortedatum van " + m_gebdatvan + ".");
		y += 15;
	}
	else if (m_gebdattot != "")
	{
		pDC->TextOut(factor * 5, y, "Geboortedatum t/m " + m_gebdattot + ".");
		y += 15;
	}

	if (m_sexe != "")
	{
		pDC->TextOut(factor * 5, y, "Sexe: " + m_sexe + ".");
		y += 15;
	}

	if (m_hsalsch != "")
	{
		pDC->TextOut(factor * 5, y, "Salarisschaal: " + m_hsalsch + ".");
		y += 15;
	}

	if (m_hfunomv != "")
	{
		pDC->TextOut(factor * 5, y, "Huidige functieomvang: " + m_hfunomv + ".");
		y += 15;
	}

	if (m_hdvbtyp != "")
	{
		pDC->TextOut(factor * 5, y, "Huidig dienstverband: " + m_hdvbtyp + ".");
		y += 15;
	}

	if (m_anmdatvan != "" && m_anmdattot != "")
	{
		pDC->TextOut(factor * 5, y, "Aanmelddatum van " + m_anmdatvan + " t/m " + m_anmdattot + ".");
		y += 15;
	}
	else if (m_anmdatvan != "")
	{
		pDC->TextOut(factor * 5, y, "Aanmelddatum van " + m_anmdatvan + ".");
		y += 15;
	}
	else if (m_anmdattot != "")
	{
		pDC->TextOut(factor * 5, y, "Aanmelddatum t/m " + m_anmdattot + ".");
		y += 15;
	}

	if (m_anmred != "")
	{
		pDC->TextOut(factor * 5, y, "Aanmeldreden: " + m_anmred + ".");
		y += 15;
	}

	if (m_anmreduitz != "")
	{
		pDC->TextOut(factor * 5, y, "Uitgezonderde aanmeldreden: " + m_anmreduitz + ".");
		y += 15;
	}

	if (m_afmdatvan != "" && m_afmdattot != "")
	{
		pDC->TextOut(factor * 5, y, "Afmelddatum van " + m_afmdatvan + " t/m " + m_afmdattot + ".");
		y += 15;
	}
	else if (m_afmdatvan != "")
	{
		pDC->TextOut(factor * 5, y, "Afmelddatum van " + m_afmdatvan + ".");
		y += 15;
	}
	else if (m_afmdattot != "")
	{
		pDC->TextOut(factor * 5, y, "Afmelddatum t/m " + m_afmdattot + ".");
		y += 15;
	}

	if (m_afmdatvanuitz != "" && m_afmdattotuitz != "")
	{
		pDC->TextOut(factor * 5, y, "Afmelddatum uitgezonderde van " + m_afmdatvanuitz + " t/m " + m_afmdattotuitz + ".");
		y += 15;
	}
	else if (m_afmdatvanuitz != "")
	{
		pDC->TextOut(factor * 5, y, "Afmelddatum uitgezonderde van " + m_afmdatvanuitz + ".");
		y += 15;
	}
	else if (m_afmdattotuitz != "")
	{
		pDC->TextOut(factor * 5, y, "Afmelddatum uitgezonderde t/m " + m_afmdattotuitz + ".");
		y += 15;
	}

	if (m_afmred != "")
	{
		pDC->TextOut(factor * 5, y, "Afmeldreden: " + m_afmred + ".");
		y += 15;
	}

	if (m_afmreduitz != "")
	{
		pDC->TextOut(factor * 5, y, "Uitgezonderde afmeldreden: " + m_afmreduitz + ".");
		y += 15;
	}

	if (m_agddatevan != "" && m_agddatetot != "")
	{
		pDC->TextOut(factor * 5, y, "Agendadatum van " + m_agddatevan + " t/m " + m_agddatetot + ".");
		y += 15;
	}
	else if (m_agddatevan != "")
	{
		pDC->TextOut(factor * 5, y, "Agendadatum van " + m_agddatevan + ".");
		y += 15;
	}
	else if (m_agddatetot != "")
	{
		pDC->TextOut(factor * 5, y, "Agendadatum t/m " + m_agddatetot + ".");
		y += 15;
	}

	if (m_agdred != "")
	{
		pDC->TextOut(factor * 5, y, "Agendareden: " + m_agdred + ".");
		y += 15;
	}

	if (m_agdreduitz != "")
	{
		pDC->TextOut(factor * 5, y, "Uitgezonderde agendareden: " + m_agdreduitz + ".");
		y += 15;
	}

	if (m_hfaccod != "")
	{
		pDC->TextOut(factor * 5, y, "Faculteit: " + m_hfaccod + ".");
		y += 15;
	}

	if (m_wpobp != "")
	{
		pDC->TextOut(factor * 5, y, "WP / OPB: " + m_wpobp + ".");
		y += 15;
	}

	if (m_advmob != "")
	{
		pDC->TextOut(factor * 5, y, "Mobiliteitsfunctionaris: " + m_advmob + ".");
		y += 15;
	}

	if (m_match != "")
	{
		pDC->TextOut(factor * 5, y, "Match? " + m_match + ".");
		y += 15;
	}

	if (m_traject != "")
	{
		pDC->TextOut(factor * 5, y, "Traject: " + m_traject + ".");
		y += 15;
	}

	if (m_trajectuitz != "")
	{
		pDC->TextOut(factor * 5, y, "Uitgezonderde trajecten: " + m_trajectuitz + ".");
		y += 15;
	}

	if (m_kndsta != "")
	{
		pDC->TextOut(factor * 5, y, "Status: " + m_kndsta + ".");
		y += 15;
	}

	if (m_kndstauitz != "")
	{
		pDC->TextOut(factor * 5, y, "Uitgezonderde statussen: " + m_kndstauitz + ".");
		y += 15;
	}
	if (m_datumvan != "" && m_datumtot != "")
	{
		pDC->TextOut(factor * 5, y, "Contactdatum van " + m_datumvan + " t/m " + m_datumtot + ".");
		y += 15;
	}
	else if (m_datumvan != "")
	{
		pDC->TextOut(factor * 5, y, "Contactdatum van " + m_datumvan + ".");
		y += 15;
	}
	else if (m_datumtot != "")
	{
		pDC->TextOut(factor * 5, y, "Contactdatum t/m " + m_datumtot + ".");
		y += 15;
	}

	if (m_rubriek != "")
	{
		pDC->TextOut(factor * 5, y, "Contact rubriek: " + m_rubriek + ".");
		y += 15;
	}

	if (m_contsrt != "")
	{
		pDC->TextOut(factor * 5, y, "Contact soort: " + m_contsrt + ".");
		y += 15;
	}

	y += 15;
	if (m_extra_regels)
		y += 15;

	pDC->TextOut(factor * 5, y, "Persoon:  Geslacht");
	y += 30;
	pDC->TextOut(factor * 5, y, "Code");
	pDC->TextOut(factor * 100, y, "Omschrijving");
	pDC->TextOut(factor * 400, y, "Aantal");
	pDC->TextOut(factor * 500, y, "Percentage");
	y += 30;
	for (i = 1; i <= max_geslacht; i++)
	{
		pDC->TextOut(factor * 5, y, c_geslacht[i]);
		pDC->TextOut(factor * 100, y, n_geslacht[i]);
		m_tekst.Format("%d", a_geslacht[i]);
		pDC->TextOut(factor * 400, y, m_tekst);
		m_tekst.Format("%.1f", perc_geslacht[i]);
		pDC->TextOut(factor * 500, y, m_tekst + "%");
		y += 15;
	}
	y += 15;
	pDC->TextOut(factor * 5  , y, "Totaal:");
	m_tekst.Format("%d", tot_geslacht);
	perc = (double) 100 * tot_geslacht / m_records;
	if (perc < 95)
		pDC->TextOut(factor * 400, y, m_tekst + "?");
	else
		pDC->TextOut(factor * 400, y, m_tekst);

	y += 45;
	pDC->TextOut(factor * 5, y, "Persoon:  Status");
	y += 30;
	pDC->TextOut(factor * 5, y, "Code");
	pDC->TextOut(factor * 100, y, "Omschrijving");
	pDC->TextOut(factor * 400, y, "Aantal");
	pDC->TextOut(factor * 500, y, "Percentage");
	y += 30;
	for (i = 1; i <= max_status; i++)
	{
		pDC->TextOut(factor * 5, y, c_status[i]);
		pDC->TextOut(factor * 100, y, n_status[i]);
		m_tekst.Format("%d", a_status[i]);
		pDC->TextOut(factor * 400, y, m_tekst);
		m_tekst.Format("%.1f", perc_status[i]);
		pDC->TextOut(factor * 500, y, m_tekst + "%");
		y += 15;
	}
	y += 15;
	pDC->TextOut(factor * 5  , y, "Totaal:");
	m_tekst.Format("%d", tot_status);
	perc = (double) 100 * tot_status / m_records;
	if (perc < 95)
		pDC->TextOut(factor * 400, y, m_tekst + "?");
	else
		pDC->TextOut(factor * 400, y, m_tekst);

	y += 45;
	pDC->TextOut(factor * 5, y, "Persoon:  Leeftijd");
	y += 30;
	pDC->TextOut(factor * 5, y, "Omschrijving");
	pDC->TextOut(factor * 400, y, "Aantal");
	pDC->TextOut(factor * 500, y, "Percentage");
	y += 30;

	pDC->TextOut(factor * 5, y, "<  20");
	m_tekst.Format("%d", a_leeftijd[0]);
	pDC->TextOut(factor * 400, y, m_tekst);
	m_tekst.Format("%.1f", perc_leeftijd[0]);
	pDC->TextOut(factor * 500, y, m_tekst + "%");
	y += 15;
	pDC->TextOut(factor * 5, y, "20  t/m  24");
	m_tekst.Format("%d", a_leeftijd[1]);
	pDC->TextOut(factor * 400, y, m_tekst);
	m_tekst.Format("%.1f", perc_leeftijd[1]);
	pDC->TextOut(factor * 500, y, m_tekst + "%");
	y += 15;
	pDC->TextOut(factor * 5, y, "25  t/m  29");
	m_tekst.Format("%d", a_leeftijd[2]);
	pDC->TextOut(factor * 400, y, m_tekst);
	m_tekst.Format("%.1f", perc_leeftijd[2]);
	pDC->TextOut(factor * 500, y, m_tekst + "%");
	y += 15;
	pDC->TextOut(factor * 5, y, "30  t/m  34");
	m_tekst.Format("%d", a_leeftijd[3]);
	pDC->TextOut(factor * 400, y, m_tekst);
	m_tekst.Format("%.1f", perc_leeftijd[3]);
	pDC->TextOut(factor * 500, y, m_tekst + "%");
	y += 15;
	pDC->TextOut(factor * 5, y, "35  t/m  39");
	m_tekst.Format("%d", a_leeftijd[4]);
	pDC->TextOut(factor * 400, y, m_tekst);
	m_tekst.Format("%.1f", perc_leeftijd[4]);
	pDC->TextOut(factor * 500, y, m_tekst + "%");
	y += 15;
	pDC->TextOut(factor * 5, y, "40  t/m  44");
	m_tekst.Format("%d", a_leeftijd[5]);
	pDC->TextOut(factor * 400, y, m_tekst);
	m_tekst.Format("%.1f", perc_leeftijd[5]);
	pDC->TextOut(factor * 500, y, m_tekst + "%");
	y += 15;
	pDC->TextOut(factor * 5, y, "45  t/m  49");
	m_tekst.Format("%d", a_leeftijd[6]);
	pDC->TextOut(factor * 400, y, m_tekst);
	m_tekst.Format("%.1f", perc_leeftijd[6]);
	pDC->TextOut(factor * 500, y, m_tekst + "%");
	y += 15;
	pDC->TextOut(factor * 5, y, "50  t/m  54");
	m_tekst.Format("%d", a_leeftijd[7]);
	pDC->TextOut(factor * 400, y, m_tekst);
	m_tekst.Format("%.1f", perc_leeftijd[7]);
	pDC->TextOut(factor * 500, y, m_tekst + "%");
	y += 15;
	pDC->TextOut(factor * 5, y, "55  t/m  59");
	m_tekst.Format("%d", a_leeftijd[8]);
	pDC->TextOut(factor * 400, y, m_tekst);
	m_tekst.Format("%.1f", perc_leeftijd[8]);
	pDC->TextOut(factor * 500, y, m_tekst + "%");
	y += 15;
	pDC->TextOut(factor * 5, y, "60  t/m  64");
	m_tekst.Format("%d", a_leeftijd[9]);
	pDC->TextOut(factor * 400, y, m_tekst);
	m_tekst.Format("%.1f", perc_leeftijd[9]);
	pDC->TextOut(factor * 500, y, m_tekst + "%");
	y += 15;
	pDC->TextOut(factor * 5, y, "65 =>");
	m_tekst.Format("%d", a_leeftijd[10]);
	pDC->TextOut(factor * 400, y, m_tekst);
	m_tekst.Format("%.1f", perc_leeftijd[10]);
	pDC->TextOut(factor * 500, y, m_tekst + "%");

	y += 30;
	pDC->TextOut(factor * 5  , y, "Totaal:");
	m_tekst.Format("%.0f", tot_leeftijd);
	perc = (double) 100 * tot_leeftijd / m_records;
	if (perc < 95)
		pDC->TextOut(factor * 400, y, m_tekst + "?");
	else
		pDC->TextOut(factor * 400, y, m_tekst);

	y += 30;
	m_tekst.Format("%.1f", gem_leeftijd);
	pDC->TextOut(factor * 5, y, "Gemiddeld :  " + m_tekst);


	y += 45;
	pDC->TextOut(factor * 5, y, "Persoon:  Contractvorm");
	y += 30;
	pDC->TextOut(factor * 5, y, "Code");
	pDC->TextOut(factor * 100, y, "Omschrijving");
	pDC->TextOut(factor * 400, y, "Aantal");
	pDC->TextOut(factor * 500, y, "Percentage");
	y += 30;

	pDC->TextOut(factor * 5, y, "1");
	pDC->TextOut(factor * 100, y, "Tijdelijk");
	m_tekst.Format("%d", tijdelijk);
	pDC->TextOut(factor * 400, y, m_tekst);
	m_tekst.Format("%.1f", perc_tijdelijk);
	pDC->TextOut(factor * 500, y, m_tekst + "%");
	y += 15;
	pDC->TextOut(factor * 5, y, "2");
	pDC->TextOut(factor * 100, y, "Vast");
	m_tekst.Format("%d", vast);
	pDC->TextOut(factor * 400, y, m_tekst);
	m_tekst.Format("%.1f", perc_vast);
	pDC->TextOut(factor * 500, y, m_tekst + "%");

	y += 30;
	pDC->TextOut(factor * 5  , y, "Totaal:");
	m_tekst.Format("%d", tot_type);
	perc = (double) 100 * tot_type / m_records;
	if (perc < 95)
		pDC->TextOut(factor * 400, y, m_tekst + "?");
	else
		pDC->TextOut(factor * 400, y, m_tekst);


	y += 45;
	pDC->TextOut(factor * 5, y, "Persoon:  Salarisschaal");
	y += 30;
	pDC->TextOut(factor * 5, y, "Omschrijving");
	pDC->TextOut(factor * 400, y, "Aantal");
	pDC->TextOut(factor * 500, y, "Percentage");
	y += 30;

	pDC->TextOut(factor * 5, y, "4 t/m 6");
	m_tekst.Format("%d", a_salschaal[0]);
	pDC->TextOut(factor * 400, y, m_tekst);
	m_tekst.Format("%.1f", perc_salschaal[0]);
	pDC->TextOut(factor * 500, y, m_tekst + "%");
	y += 15;
	pDC->TextOut(factor * 5, y, "7 t/m 9");
	m_tekst.Format("%d", a_salschaal[1]);
	pDC->TextOut(factor * 400, y, m_tekst);
	m_tekst.Format("%.1f", perc_salschaal[1]);
	pDC->TextOut(factor * 500, y, m_tekst + "%");
	y += 15;
	pDC->TextOut(factor * 5, y, "10");
	m_tekst.Format("%d", a_salschaal[2]);
	pDC->TextOut(factor * 400, y, m_tekst);
	m_tekst.Format("%.1f", perc_salschaal[2]);
	pDC->TextOut(factor * 500, y, m_tekst + "%");
	y += 15;
	pDC->TextOut(factor * 5, y, "11");
	m_tekst.Format("%d", a_salschaal[3]);
	pDC->TextOut(factor * 400, y, m_tekst);
	m_tekst.Format("%.1f", perc_salschaal[3]);
	pDC->TextOut(factor * 500, y, m_tekst + "%");
	y += 15;
	pDC->TextOut(factor * 5, y, "12");
	m_tekst.Format("%d", a_salschaal[4]);
	pDC->TextOut(factor * 400, y, m_tekst);
	m_tekst.Format("%.1f", perc_salschaal[4]);
	pDC->TextOut(factor * 500, y, m_tekst + "%");
	y += 15;
	pDC->TextOut(factor * 5, y, "13 t/m 18");
	m_tekst.Format("%d", a_salschaal[5]);
	pDC->TextOut(factor * 400, y, m_tekst);
	m_tekst.Format("%.1f", perc_salschaal[5]);
	pDC->TextOut(factor * 500, y, m_tekst + "%");
	y += 15;
	pDC->TextOut(factor * 5, y, "promovendi");
	m_tekst.Format("%d", a_salschaal[6]);
	pDC->TextOut(factor * 400, y, m_tekst);
	m_tekst.Format("%.1f", perc_salschaal[6]);
	pDC->TextOut(factor * 500, y, m_tekst + "%");

	y += 30;
	pDC->TextOut(factor * 5  , y, "Totaal:");
	m_tekst.Format("%d", tot_salschaal);
	perc = (double) 100 * tot_salschaal / m_records;
	if (perc < 95)
		pDC->TextOut(factor * 400, y, m_tekst + "?");
	else
		pDC->TextOut(factor * 400, y, m_tekst);

	y += 45;
	pDC->TextOut(factor * 5, y, "Persoon:  Faculteit");
	y += 30;
	pDC->TextOut(factor * 5, y, "Code");
	pDC->TextOut(factor * 100, y, "Omschrijving");
	pDC->TextOut(factor * 400, y, "Aantal");
	pDC->TextOut(factor * 500, y, "Percentage");
	y += 30;
	for (i = 1; i <= max_faculteit; i++)
	{
		pDC->TextOut(factor * 5, y, c_faculteit[i]);
		pDC->TextOut(factor * 100, y, n_faculteit[i]);
		m_tekst.Format("%d", a_faculteit[i]);
		pDC->TextOut(factor * 400, y, m_tekst);
		m_tekst.Format("%.1f", perc_faculteit[i]);
		pDC->TextOut(factor * 500, y, m_tekst + "%");
		y += 15;
	}
	y += 15;
	pDC->TextOut(factor * 5  , y, "Totaal:");
	m_tekst.Format("%d", tot_faculteit);
	perc = (double) 100 * tot_faculteit / m_records;
	if (perc < 95)
		pDC->TextOut(factor * 400, y, m_tekst + "?");
	else
		pDC->TextOut(factor * 400, y, m_tekst);

	y += 45;
	pDC->TextOut(factor * 5, y, "Persoon: WP / OBP");
	y += 30;
	pDC->TextOut(factor * 5, y, "Code");
	pDC->TextOut(factor * 100, y, "Omschrijving");
	pDC->TextOut(factor * 400, y, "Aantal");
	pDC->TextOut(factor * 500, y, "Percentage");
	y += 30;
	for (i = 1; i <= max_wpobp; i++)
	{
		pDC->TextOut(factor * 5, y, c_wpobp[i]);
		pDC->TextOut(factor * 100, y, n_wpobp[i]);
		m_tekst.Format("%d", a_wpobp[i]);
		pDC->TextOut(factor * 400, y, m_tekst);
		m_tekst.Format("%.1f", perc_wpobp[i]);
		pDC->TextOut(factor * 500, y, m_tekst + "%");
		y += 15;
	}
	y += 15;
	pDC->TextOut(factor * 5  , y, "Totaal:");
	m_tekst.Format("%d", tot_wpobp);
	perc = (double) 100 * tot_wpobp / m_records;
	if (perc < 95)
		pDC->TextOut(factor * 400, y, m_tekst + "?");
	else
		pDC->TextOut(factor * 400, y, m_tekst);

	y += 45;
	pDC->TextOut(factor * 5, y, "Persoon:  Matchen");
	y += 30;
	pDC->TextOut(factor * 5, y, "Code");
	pDC->TextOut(factor * 100, y, "Omschrijving");
	pDC->TextOut(factor * 400, y, "Aantal");
	pDC->TextOut(factor * 500, y, "Percentage");
	y += 30;
	for (i = 1; i <= max_match; i++)
	{
		pDC->TextOut(factor * 5, y, c_match[i]);
		pDC->TextOut(factor * 100, y, n_match[i]);
		m_tekst.Format("%d", a_match[i]);
		pDC->TextOut(factor * 400, y, m_tekst);
		m_tekst.Format("%.1f", perc_match[i]);
		pDC->TextOut(factor * 500, y, m_tekst + "%");
		y += 15;
	}
	y += 15;
	pDC->TextOut(factor * 5  , y, "Totaal:");
	m_tekst.Format("%d", tot_match);
	perc = (double) 100 * tot_match / m_records;
	if (perc < 95)
		pDC->TextOut(factor * 400, y, m_tekst + "?");
	else
		pDC->TextOut(factor * 400, y, m_tekst);

	y += 45;
	pDC->TextOut(factor * 5, y, "Persoon:  Bemiddelaar");
	y += 30;
	pDC->TextOut(factor * 5, y, "Code");
	pDC->TextOut(factor * 100, y, "Omschrijving");
	pDC->TextOut(factor * 400, y, "Aantal");
	pDC->TextOut(factor * 500, y, "Percentage");
	y += 30;
	for (i = 1; i <= max_bemiddelaar; i++)
	{
		pDC->TextOut(factor * 5, y, c_bemiddelaar[i]);
		pDC->TextOut(factor * 100, y, n_bemiddelaar[i]);
		m_tekst.Format("%d", a_bemiddelaar[i]);
		pDC->TextOut(factor * 400, y, m_tekst);
		m_tekst.Format("%.1f", perc_bemiddelaar[i]);
		pDC->TextOut(factor * 500, y, m_tekst + "%");
		y += 15;
	}
	y += 15;
	pDC->TextOut(factor * 5  , y, "Totaal:");
	m_tekst.Format("%d", tot_bemiddelaar);
	perc = (double) 100 * tot_bemiddelaar / m_records;
	if (perc < 95)
		pDC->TextOut(factor * 400, y, m_tekst + "?");
	else
		pDC->TextOut(factor * 400, y, m_tekst);

	y += 45;
	pDC->TextOut(factor * 5, y, "Persoon:  Traject");
	y += 30;
	pDC->TextOut(factor * 5, y, "Code");
	pDC->TextOut(factor * 100, y, "Omschrijving");
	pDC->TextOut(factor * 400, y, "Aantal");
	pDC->TextOut(factor * 500, y, "Percentage");
	y += 30;
	for (i = 1; i <= max_traject; i++)
	{
		pDC->TextOut(factor * 5, y, c_traject[i]);
		pDC->TextOut(factor * 100, y, n_traject[i]);
		m_tekst.Format("%d", a_traject[i]);
		pDC->TextOut(factor * 400, y, m_tekst);
		m_tekst.Format("%.1f", perc_traject[i]);
		pDC->TextOut(factor * 500, y, m_tekst + "%");
		y += 15;
	}
	y += 15;
	pDC->TextOut(factor * 5  , y, "Totaal:");
	m_tekst.Format("%d", tot_traject);
	perc = (double) 100 * tot_traject / m_records;
	if (perc < 95)
		pDC->TextOut(factor * 400, y, m_tekst + "?");
	else
		pDC->TextOut(factor * 400, y, m_tekst);

	y += 45;
	pDC->TextOut(factor * 5, y, "Persoon:  Afmeldreden");
	y += 30;
	pDC->TextOut(factor * 5, y, "Code");
	pDC->TextOut(factor * 100, y, "Omschrijving");
	pDC->TextOut(factor * 400, y, "Aantal");
	pDC->TextOut(factor * 500, y, "Percentage");
	y += 30;
	for (i = 1; i <= max_afmreden; i++)
	{
		pDC->TextOut(factor * 5, y, c_afmreden[i]);
		pDC->TextOut(factor * 100, y, n_afmreden[i]);
		m_tekst.Format("%d", a_afmreden[i]);
		pDC->TextOut(factor * 400, y, m_tekst);
		m_tekst.Format("%.1f", perc_afmreden[i]);
		pDC->TextOut(factor * 500, y, m_tekst + "%");
		y += 15;
	}
	y += 15;
	pDC->TextOut(factor * 5  , y, "Totaal:");
	m_tekst.Format("%d", tot_afmreden);
	perc = (double) 100 * tot_afmreden / m_records;
	if (perc < 95)
		pDC->TextOut(factor * 400, y, m_tekst + "?");
	else
		pDC->TextOut(factor * 400, y, m_tekst);

	y += 45;
	pDC->TextOut(factor * 5, y, "Contact:  Soort");
	y += 30;
	pDC->TextOut(factor * 5, y, "Code");
	pDC->TextOut(factor * 100, y, "Omschrijving");
	pDC->TextOut(factor * 400, y, "Aantal");
	pDC->TextOut(factor * 500, y, "Percentage");
	y += 30;
	for (i = 1; i <= max_soort; i++)
	{
		pDC->TextOut(factor * 5, y, c_soort[i]);
		pDC->TextOut(factor * 100, y, n_soort[i]);
		m_tekst.Format("%d", a_soort[i]);
		pDC->TextOut(factor * 400, y, m_tekst);
		m_tekst.Format("%.1f", perc_soort[i]);
		pDC->TextOut(factor * 500, y, m_tekst + "%");
		y += 15;
	}
	y += 15;
	pDC->TextOut(factor * 5  , y, "Totaal:");
	m_tekst.Format("%d", tot_soort);
	pDC->TextOut(factor * 400, y, m_tekst);
}

void COverzselView::prnt(CDC* pDC, double factor)
{
	COleDateTime m_vandaag;
	CString m_dag, m_tekst;
	int i;
	int y = 0;
	double perc;

	m_vandaag = COleDateTime::GetCurrentTime();
	m_dag = m_vandaag.Format("%d-%m-%Y");
	
	pDC->TextOut(factor * 50, y, "STATISTISCH  OVERZICHT  MENTOR (" + m_dag + ")");
	y += 300;
	m_tekst.Format("%d", m_records);
	pDC->TextOut(factor * 50, y, "Interne kandidaten, aantal geselecteerd : " + m_tekst + ".");
	y += 300;
	pDC->TextOut(factor * 50, y, "Selectie:");
	y += 300;

	if (m_extra_regels)
		pDC->TextOut(factor * 50, y, "Selectie:");
	else
		pDC->TextOut(factor * 50, y, "Selectie:  geen.");

	y += 300;

	if (m_projnrvan != "" && m_projnrtot != "")
	{
		pDC->TextOut(factor * 50, y, "Projectnummers van " + m_projnrvan + " t/m " + m_projnrtot + ".");
		y += 150;
	}
	else if (m_projnrvan != "")
	{
		pDC->TextOut(factor * 50, y, "Projectnummers van " + m_projnrvan + ".");
		y += 150;
	}
	else if (m_projnrtot != "")
	{
		pDC->TextOut(factor * 50, y, "Projectnummers t/m " + m_projnrtot + ".");
		y += 150;
	}

	if (m_projnruitz != "")
	{
		pDC->TextOut(factor * 50, y, "Uitgezonderde projectnummers: " + m_projnruitz + ".");
		y += 150;
	}

	if (m_gebdatvan != "" && m_gebdattot != "")
	{
		pDC->TextOut(factor * 50, y, "Geboortedatum van " + m_gebdatvan + " t/m " + m_gebdattot + ".");
		y += 150;
	}
	else if (m_gebdatvan != "")
	{
		pDC->TextOut(factor * 50, y, "Geboortedatum van " + m_gebdatvan + ".");
		y += 150;
	}
	else if (m_gebdattot != "")
	{
		pDC->TextOut(factor * 50, y, "Geboortedatum t/m " + m_gebdattot + ".");
		y += 150;
	}

	if (m_sexe != "")
	{
		pDC->TextOut(factor * 50, y, "Sexe: " + m_sexe + ".");
		y += 150;
	}

	if (m_hsalsch != "")
	{
		pDC->TextOut(factor * 50, y, "Salarisschaal: " + m_hsalsch + ".");
		y += 150;
	}

	if (m_hfunomv != "")
	{
		pDC->TextOut(factor * 50, y, "Huidige functieomvang: " + m_hfunomv + ".");
		y += 150;
	}

	if (m_hdvbtyp != "")
	{
		pDC->TextOut(factor * 50, y, "Huidig dienstverband: " + m_hdvbtyp + ".");
		y += 150;
	}

	if (m_anmdatvan != "" && m_anmdattot != "")
	{
		pDC->TextOut(factor * 50, y, "Aanmelddatum van " + m_anmdatvan + " t/m " + m_anmdattot + ".");
		y += 150;
	}
	else if (m_anmdatvan != "")
	{
		pDC->TextOut(factor * 50, y, "Aanmelddatum van " + m_anmdatvan + ".");
		y += 150;
	}
	else if (m_anmdattot != "")
	{
		pDC->TextOut(factor * 50, y, "Aanmelddatum t/m " + m_anmdattot + ".");
		y += 150;
	}

	if (m_anmred != "")
	{
		pDC->TextOut(factor * 50, y, "Aanmeldreden: " + m_anmred + ".");
		y += 150;
	}

	if (m_anmreduitz != "")
	{
		pDC->TextOut(factor * 50, y, "Uitgezonderde aanmeldreden: " + m_anmreduitz + ".");
		y += 150;
	}

	if (m_afmdatvan != "" && m_afmdattot != "")
	{
		pDC->TextOut(factor * 50, y, "Afmelddatum van " + m_afmdatvan + " t/m " + m_afmdattot + ".");
		y += 150;
	}
	else if (m_afmdatvan != "")
	{
		pDC->TextOut(factor * 50, y, "Afmelddatum van " + m_afmdatvan + ".");
		y += 150;
	}
	else if (m_afmdattot != "")
	{
		pDC->TextOut(factor * 50, y, "Afmelddatum t/m " + m_afmdattot + ".");
		y += 150;
	}

	if (m_afmdatvanuitz != "" && m_afmdattotuitz != "")
	{
		pDC->TextOut(factor * 50, y, "Afmelddatum uitgezonderde van " + m_afmdatvanuitz + " t/m " + m_afmdattotuitz + ".");
		y += 150;
	}
	else if (m_afmdatvanuitz != "")
	{
		pDC->TextOut(factor * 50, y, "Afmelddatum uitgezonderde van " + m_afmdatvanuitz + ".");
		y += 150;
	}
	else if (m_afmdattotuitz != "")
	{
		pDC->TextOut(factor * 50, y, "Afmelddatum uitgezonderde t/m " + m_afmdattotuitz + ".");
		y += 150;
	}

	if (m_afmred != "")
	{
		pDC->TextOut(factor * 50, y, "Afmeldreden: " + m_afmred + ".");
		y += 150;
	}

	if (m_afmreduitz != "")
	{
		pDC->TextOut(factor * 50, y, "Uitgezonderde afmeldreden: " + m_afmreduitz + ".");
		y += 150;
	}

	if (m_agddatevan != "" && m_agddatetot != "")
	{
		pDC->TextOut(factor * 50, y, "Agendadatum van " + m_agddatevan + " t/m " + m_agddatetot + ".");
		y += 150;
	}
	else if (m_agddatevan != "")
	{
		pDC->TextOut(factor * 50, y, "Agendadatum van " + m_agddatevan + ".");
		y += 150;
	}
	else if (m_agddatetot != "")
	{
		pDC->TextOut(factor * 50, y, "Agendadatum t/m " + m_agddatetot + ".");
		y += 150;
	}

	if (m_agdred != "")
	{
		pDC->TextOut(factor * 50, y, "Agendareden: " + m_agdred + ".");
		y += 150;
	}

	if (m_agdreduitz != "")
	{
		pDC->TextOut(factor * 50, y, "Uitgezonderde agendareden: " + m_agdreduitz + ".");
		y += 150;
	}

	if (m_hfaccod != "")
	{
		pDC->TextOut(factor * 50, y, "Faculteit: " + m_hfaccod + ".");
		y += 150;
	}

	if (m_wpobp != "")
	{
		pDC->TextOut(factor * 50, y, "WP / OPB: " + m_wpobp + ".");
		y += 150;
	}

	if (m_advmob != "")
	{
		pDC->TextOut(factor * 50, y, "Mobiliteitsfunctionaris: " + m_advmob + ".");
		y += 150;
	}

	if (m_match != "")
	{
		pDC->TextOut(factor * 50, y, "Match? " + m_match + ".");
		y += 150;
	}

	if (m_traject != "")
	{
		pDC->TextOut(factor * 50, y, "Traject: " + m_traject + ".");
		y += 150;
	}

	if (m_trajectuitz != "")
	{
		pDC->TextOut(factor * 50, y, "Uitgezonderde trajecten: " + m_trajectuitz + ".");
		y += 150;
	}

	if (m_kndsta != "")
	{
		pDC->TextOut(factor * 50, y, "Status: " + m_kndsta + ".");
		y += 150;
	}

	if (m_kndstauitz != "")
	{
		pDC->TextOut(factor * 50, y, "Uitgezonderde statussen: " + m_kndstauitz + ".");
		y += 150;
	}
	if (m_datumvan != "" && m_datumtot != "")
	{
		pDC->TextOut(factor * 50, y, "Contactdatum van " + m_datumvan + " t/m " + m_datumtot + ".");
		y += 150;
	}
	else if (m_datumvan != "")
	{
		pDC->TextOut(factor * 50, y, "Contactdatum van " + m_datumvan + ".");
		y += 150;
	}
	else if (m_datumtot != "")
	{
		pDC->TextOut(factor * 50, y, "Contactdatum t/m " + m_datumtot + ".");
		y += 150;
	}

	if (m_rubriek != "")
	{
		pDC->TextOut(factor * 50, y, "Contact rubriek: " + m_rubriek + ".");
		y += 150;
	}

	if (m_contsrt != "")
	{
		pDC->TextOut(factor * 50, y, "Contact soort: " + m_contsrt + ".");
		y += 150;
	}

	y += 150;
	if (m_extra_regels)
		y += 150;
	pDC->TextOut(factor * 50, y, "Persoon:  Geslacht");
	y += 300;
	pDC->TextOut(factor * 50, y, "Code");
	pDC->TextOut(factor * 1000, y, "Omschrijving");
	pDC->TextOut(factor * 4000, y, "Aantal");
	pDC->TextOut(factor * 5000, y, "Percentage");
	y += 300;
	for (i = 1; i <= max_geslacht; i++)
	{
		pDC->TextOut(factor * 50, y, c_geslacht[i]);
		pDC->TextOut(factor * 1000, y, n_geslacht[i]);
		m_tekst.Format("%d", a_geslacht[i]);
		pDC->TextOut(factor * 4000, y, m_tekst);
		m_tekst.Format("%.1f", perc_geslacht[i]);
		pDC->TextOut(factor * 5000, y, m_tekst + "%");
		y += 150;
	}
	y += 150;
	pDC->TextOut(factor * 50 , y, "Totaal:");
	m_tekst.Format("%d", tot_geslacht);
	perc = (double) 100 * tot_geslacht / m_records;
	if (perc < 95)
		pDC->TextOut(factor * 4000, y, m_tekst + "?");
	else
		pDC->TextOut(factor * 4000, y, m_tekst);

	y += 300;
	pDC->TextOut(factor * 50, y, "Persoon:  Status");
	y += 300;
	pDC->TextOut(factor * 50, y, "Code");
	pDC->TextOut(factor * 1000, y, "Omschrijving");
	pDC->TextOut(factor * 4000, y, "Aantal");
	pDC->TextOut(factor * 5000, y, "Percentage");
	y += 300;
	for (i = 1; i <= max_status; i++)
	{
		pDC->TextOut(factor * 50, y, c_status[i]);
		pDC->TextOut(factor * 1000, y, n_status[i]);
		m_tekst.Format("%d", a_status[i]);
		pDC->TextOut(factor * 4000, y, m_tekst);
		m_tekst.Format("%.1f", perc_status[i]);
		pDC->TextOut(factor * 5000, y, m_tekst + "%");
		y += 150;
	}
	y += 150;
	pDC->TextOut(factor * 50 , y, "Totaal:");
	m_tekst.Format("%d", tot_status);
	perc = (double) 100 * tot_status / m_records;
	if (perc < 95)
		pDC->TextOut(factor * 4000, y, m_tekst + "?");
	else
		pDC->TextOut(factor * 4000, y, m_tekst);

	y += 300;
	pDC->TextOut(factor * 50, y, "Persoon:  Leeftijd");
	y += 300;
	pDC->TextOut(factor * 50, y, "Omschrijving");
	pDC->TextOut(factor * 4000, y, "Aantal");
	pDC->TextOut(factor * 5000, y, "Percentage");
	y += 300;

	pDC->TextOut(factor * 50, y, "<  20");
	m_tekst.Format("%d", a_leeftijd[0]);
	pDC->TextOut(factor * 4000, y, m_tekst);
	m_tekst.Format("%.1f", perc_leeftijd[0]);
	pDC->TextOut(factor * 5000, y, m_tekst + "%");
	y += 150;
	pDC->TextOut(factor * 50, y, "20  t/m  24");
	m_tekst.Format("%d", a_leeftijd[1]);
	pDC->TextOut(factor * 4000, y, m_tekst);
	m_tekst.Format("%.1f", perc_leeftijd[1]);
	pDC->TextOut(factor * 5000, y, m_tekst + "%");
	y += 150;
	pDC->TextOut(factor * 50, y, "25  t/m  29");
	m_tekst.Format("%d", a_leeftijd[2]);
	pDC->TextOut(factor * 4000, y, m_tekst);
	m_tekst.Format("%.1f", perc_leeftijd[2]);
	pDC->TextOut(factor * 5000, y, m_tekst + "%");
	y += 150;
	pDC->TextOut(factor * 50, y, "30  t/m  34");
	m_tekst.Format("%d", a_leeftijd[3]);
	pDC->TextOut(factor * 4000, y, m_tekst);
	m_tekst.Format("%.1f", perc_leeftijd[3]);
	pDC->TextOut(factor * 5000, y, m_tekst + "%");
	y += 150;
	pDC->TextOut(factor * 50, y, "35  t/m  39");
	m_tekst.Format("%d", a_leeftijd[4]);
	pDC->TextOut(factor * 4000, y, m_tekst);
	m_tekst.Format("%.1f", perc_leeftijd[4]);
	pDC->TextOut(factor * 5000, y, m_tekst + "%");
	y += 150;
	pDC->TextOut(factor * 50, y, "40  t/m  44");
	m_tekst.Format("%d", a_leeftijd[5]);
	pDC->TextOut(factor * 4000, y, m_tekst);
	m_tekst.Format("%.1f", perc_leeftijd[5]);
	pDC->TextOut(factor * 5000, y, m_tekst + "%");
	y += 150;
	pDC->TextOut(factor * 50, y, "45  t/m  49");
	m_tekst.Format("%d", a_leeftijd[6]);
	pDC->TextOut(factor * 4000, y, m_tekst);
	m_tekst.Format("%.1f", perc_leeftijd[6]);
	pDC->TextOut(factor * 5000, y, m_tekst + "%");
	y += 150;
	pDC->TextOut(factor * 50, y, "50  t/m  54");
	m_tekst.Format("%d", a_leeftijd[7]);
	pDC->TextOut(factor * 4000, y, m_tekst);
	m_tekst.Format("%.1f", perc_leeftijd[7]);
	pDC->TextOut(factor * 5000, y, m_tekst + "%");
	y += 150;
	pDC->TextOut(factor * 50, y, "55  t/m  59");
	m_tekst.Format("%d", a_leeftijd[8]);
	pDC->TextOut(factor * 4000, y, m_tekst);
	m_tekst.Format("%.1f", perc_leeftijd[8]);
	pDC->TextOut(factor * 5000, y, m_tekst + "%");
	y += 150;
	pDC->TextOut(factor * 50, y, "60  t/m  64");
	m_tekst.Format("%d", a_leeftijd[9]);
	pDC->TextOut(factor * 4000, y, m_tekst);
	m_tekst.Format("%.1f", perc_leeftijd[9]);
	pDC->TextOut(factor * 5000, y, m_tekst + "%");
	y += 150;
	pDC->TextOut(factor * 50, y, "65 =>");
	m_tekst.Format("%d", a_leeftijd[10]);
	pDC->TextOut(factor * 4000, y, m_tekst);
	m_tekst.Format("%.1f", perc_leeftijd[10]);
	pDC->TextOut(factor * 5000, y, m_tekst + "%");

	y += 300;
	pDC->TextOut(factor * 50 , y, "Totaal:");
	m_tekst.Format("%.0f", tot_leeftijd);
	perc = (double) 100 * tot_leeftijd / m_records;
	if (perc < 95)
		pDC->TextOut(factor * 4000, y, m_tekst + "?");
	else
		pDC->TextOut(factor * 4000, y, m_tekst);

	y += 300;
	m_tekst.Format("%.1f", gem_leeftijd);
	pDC->TextOut(factor * 50, y, "Gemiddeld :  " + m_tekst);


	y += 450;
	pDC->TextOut(factor * 50, y, "Persoon:  Contractvorm");
	y += 300;
	pDC->TextOut(factor * 50, y, "Code");
	pDC->TextOut(factor * 1000, y, "Omschrijving");
	pDC->TextOut(factor * 4000, y, "Aantal");
	pDC->TextOut(factor * 5000, y, "Percentage");
	y += 300;

	pDC->TextOut(factor * 50, y, "1");
	pDC->TextOut(factor * 1000, y, "Tijdelijk");
	m_tekst.Format("%d", tijdelijk);
	pDC->TextOut(factor * 4000, y, m_tekst);
	m_tekst.Format("%.1f", perc_tijdelijk);
	pDC->TextOut(factor * 5000, y, m_tekst + "%");
	y += 150;
	pDC->TextOut(factor * 50, y, "2");
	pDC->TextOut(factor * 1000, y, "Vast");
	m_tekst.Format("%d", vast);
	pDC->TextOut(factor * 4000, y, m_tekst);
	m_tekst.Format("%.1f", perc_vast);
	pDC->TextOut(factor * 5000, y, m_tekst + "%");

	y += 300;
	pDC->TextOut(factor * 50  , y, "Totaal:");
	m_tekst.Format("%d", tot_type);
	perc = (double) 100 * tot_type / m_records;
	if (perc < 95)
		pDC->TextOut(factor * 4000, y, m_tekst + "?");
	else
		pDC->TextOut(factor * 4000, y, m_tekst);


	y += 450;
	pDC->TextOut(factor * 50, y, "Persoon:  Salarisschaal");
	y += 300;
	pDC->TextOut(factor * 50, y, "Omschrijving");
	pDC->TextOut(factor * 4000, y, "Aantal");
	pDC->TextOut(factor * 5000, y, "Percentage");
	y += 300;

	pDC->TextOut(factor * 50, y, "4 t/m 6");
	m_tekst.Format("%d", a_salschaal[0]);
	pDC->TextOut(factor * 4000, y, m_tekst);
	m_tekst.Format("%.1f", perc_salschaal[0]);
	pDC->TextOut(factor * 5000, y, m_tekst + "%");
	y += 150;
	pDC->TextOut(factor * 50, y, "7 t/m 9");
	m_tekst.Format("%d", a_salschaal[1]);
	pDC->TextOut(factor * 4000, y, m_tekst);
	m_tekst.Format("%.1f", perc_salschaal[1]);
	pDC->TextOut(factor * 5000, y, m_tekst + "%");
	y += 150;
	pDC->TextOut(factor * 50, y, "10");
	m_tekst.Format("%d", a_salschaal[2]);
	pDC->TextOut(factor * 4000, y, m_tekst);
	m_tekst.Format("%.1f", perc_salschaal[2]);
	pDC->TextOut(factor * 5000, y, m_tekst + "%");
	y += 150;
	pDC->TextOut(factor * 50, y, "11");
	m_tekst.Format("%d", a_salschaal[3]);
	pDC->TextOut(factor * 4000, y, m_tekst);
	m_tekst.Format("%.1f", perc_salschaal[3]);
	pDC->TextOut(factor * 5000, y, m_tekst + "%");
	y += 150;
	pDC->TextOut(factor * 50, y, "12");
	m_tekst.Format("%d", a_salschaal[4]);
	pDC->TextOut(factor * 4000, y, m_tekst);
	m_tekst.Format("%.1f", perc_salschaal[4]);
	pDC->TextOut(factor * 5000, y, m_tekst + "%");
	y += 150;
	pDC->TextOut(factor * 50, y, "13 t/m 18");
	m_tekst.Format("%d", a_salschaal[5]);
	pDC->TextOut(factor * 4000, y, m_tekst);
	m_tekst.Format("%.1f", perc_salschaal[5]);
	pDC->TextOut(factor * 5000, y, m_tekst + "%");
	y += 150;
	pDC->TextOut(factor * 50, y, "promovendi");
	m_tekst.Format("%d", a_salschaal[6]);
	pDC->TextOut(factor * 4000, y, m_tekst);
	m_tekst.Format("%.1f", perc_salschaal[6]);
	pDC->TextOut(factor * 5000, y, m_tekst + "%");

	y += 300;
	pDC->TextOut(factor * 50 , y, "Totaal:");
	m_tekst.Format("%d", tot_salschaal);
	perc = (double) 100 * tot_salschaal / m_records;
	if (perc < 95)
		pDC->TextOut(factor * 4000, y, m_tekst + "?");
	else
		pDC->TextOut(factor * 4000, y, m_tekst);

	y += 300;
	pDC->TextOut(factor * 50, y, "Persoon:  Faculteit");
	y += 300;
	pDC->TextOut(factor * 50, y, "Code");
	pDC->TextOut(factor * 1000, y, "Omschrijving");
	pDC->TextOut(factor * 4000, y, "Aantal");
	pDC->TextOut(factor * 5000, y, "Percentage");
	y += 300;
	for (i = 1; i <= max_faculteit; i++)
	{
		pDC->TextOut(factor * 50, y, c_faculteit[i]);
		pDC->TextOut(factor * 1000, y, n_faculteit[i]);
		m_tekst.Format("%d", a_faculteit[i]);
		pDC->TextOut(factor * 4000, y, m_tekst);
		m_tekst.Format("%.1f", perc_faculteit[i]);
		pDC->TextOut(factor * 5000, y, m_tekst + "%");
		y += 150;
	}
	y += 150;
	pDC->TextOut(factor * 50 , y, "Totaal:");
	m_tekst.Format("%d", tot_faculteit);
	perc = (double) 100 * tot_faculteit / m_records;
	if (perc < 95)
		pDC->TextOut(factor * 4000, y, m_tekst + "?");
	else
		pDC->TextOut(factor * 4000, y, m_tekst);

	y += 300;
	pDC->TextOut(factor * 50, y, "Persoon: WP / OBP");
	y += 300;
	pDC->TextOut(factor * 50, y, "Code");
	pDC->TextOut(factor * 1000, y, "Omschrijving");
	pDC->TextOut(factor * 4000, y, "Aantal");
	pDC->TextOut(factor * 5000, y, "Percentage");
	y += 300;
	for (i = 1; i <= max_wpobp; i++)
	{
		pDC->TextOut(factor * 50, y, c_wpobp[i]);
		pDC->TextOut(factor * 1000, y, n_wpobp[i]);
		m_tekst.Format("%d", a_wpobp[i]);
		pDC->TextOut(factor * 4000, y, m_tekst);
		m_tekst.Format("%.1f", perc_wpobp[i]);
		pDC->TextOut(factor * 5000, y, m_tekst + "%");
		y += 150;
	}
	y += 150;
	pDC->TextOut(factor * 50 , y, "Totaal:");
	m_tekst.Format("%d", tot_wpobp);
	perc = (double) 100 * tot_wpobp / m_records;
	if (perc < 95)
		pDC->TextOut(factor * 4000, y, m_tekst + "?");
	else
		pDC->TextOut(factor * 4000, y, m_tekst);

	y += 300;
	pDC->TextOut(factor * 50, y, "Persoon:  Matchen");
	y += 300;
	pDC->TextOut(factor * 50, y, "Code");
	pDC->TextOut(factor * 1000, y, "Omschrijving");
	pDC->TextOut(factor * 4000, y, "Aantal");
	pDC->TextOut(factor * 5000, y, "Percentage");
	y += 300;
	for (i = 1; i <= max_match; i++)
	{
		pDC->TextOut(factor * 50, y, c_match[i]);
		pDC->TextOut(factor * 1000, y, n_match[i]);
		m_tekst.Format("%d", a_match[i]);
		pDC->TextOut(factor * 4000, y, m_tekst);
		m_tekst.Format("%.1f", perc_match[i]);
		pDC->TextOut(factor * 5000, y, m_tekst + "%");
		y += 150;
	}
	y += 150;
	pDC->TextOut(factor * 50 , y, "Totaal:");
	m_tekst.Format("%d", tot_match);
	perc = (double) 100 * tot_match / m_records;
	if (perc < 95)
		pDC->TextOut(factor * 4000, y, m_tekst + "?");
	else
		pDC->TextOut(factor * 4000, y, m_tekst);

	y += 300;
	pDC->TextOut(factor * 50, y, "Persoon:  Bemiddelaar");
	y += 300;
	pDC->TextOut(factor * 50, y, "Code");
	pDC->TextOut(factor * 1000, y, "Omschrijving");
	pDC->TextOut(factor * 4000, y, "Aantal");
	pDC->TextOut(factor * 5000, y, "Percentage");
	y += 300;
	for (i = 1; i <= max_bemiddelaar; i++)
	{
		pDC->TextOut(factor * 50, y, c_bemiddelaar[i]);
		pDC->TextOut(factor * 1000, y, n_bemiddelaar[i]);
		m_tekst.Format("%d", a_bemiddelaar[i]);
		pDC->TextOut(factor * 4000, y, m_tekst);
		m_tekst.Format("%.1f", perc_bemiddelaar[i]);
		pDC->TextOut(factor * 5000, y, m_tekst + "%");
		y += 150;
	}
	y += 150;
	pDC->TextOut(factor * 50 , y, "Totaal:");
	m_tekst.Format("%d", tot_bemiddelaar);
	perc = (double) 100 * tot_bemiddelaar / m_records;
	if (perc < 95)
		pDC->TextOut(factor * 4000, y, m_tekst + "?");
	else
		pDC->TextOut(factor * 4000, y, m_tekst);

	y += 300;
	pDC->TextOut(factor * 50, y, "Persoon:  Traject");
	y += 300;
	pDC->TextOut(factor * 50, y, "Code");
	pDC->TextOut(factor * 1000, y, "Omschrijving");
	pDC->TextOut(factor * 4000, y, "Aantal");
	pDC->TextOut(factor * 5000, y, "Percentage");
	y += 300;
	for (i = 1; i <= max_traject; i++)
	{
		pDC->TextOut(factor * 50, y, c_traject[i]);
		pDC->TextOut(factor * 1000, y, n_traject[i]);
		m_tekst.Format("%d", a_traject[i]);
		pDC->TextOut(factor * 4000, y, m_tekst);
		m_tekst.Format("%.1f", perc_traject[i]);
		pDC->TextOut(factor * 5000, y, m_tekst + "%");
		y += 150;
	}
	y += 150;
	pDC->TextOut(factor * 50 , y, "Totaal:");
	m_tekst.Format("%d", tot_traject);
	perc = (double) 100 * tot_traject / m_records;
	if (perc < 95)
		pDC->TextOut(factor * 4000, y, m_tekst + "?");
	else
		pDC->TextOut(factor * 4000, y, m_tekst);

	y += 300;
	pDC->TextOut(factor * 50, y, "Persoon:  Afmeldreden");
	y += 300;
	pDC->TextOut(factor * 50, y, "Code");
	pDC->TextOut(factor * 1000, y, "Omschrijving");
	pDC->TextOut(factor * 4000, y, "Aantal");
	pDC->TextOut(factor * 5000, y, "Percentage");
	y += 300;
	for (i = 1; i <= max_afmreden; i++)
	{
		pDC->TextOut(factor * 50, y, c_afmreden[i]);
		pDC->TextOut(factor * 1000, y, n_afmreden[i]);
		m_tekst.Format("%d", a_afmreden[i]);
		pDC->TextOut(factor * 4000, y, m_tekst);
		m_tekst.Format("%.1f", perc_afmreden[i]);
		pDC->TextOut(factor * 5000, y, m_tekst + "%");
		y += 150;
	}
	y += 150;
	pDC->TextOut(factor * 50 , y, "Totaal:");
	m_tekst.Format("%d", tot_afmreden);
	perc = (double) 100 * tot_afmreden / m_records;
	if (perc < 95)
		pDC->TextOut(factor * 4000, y, m_tekst + "?");
	else
		pDC->TextOut(factor * 4000, y, m_tekst);

	y += 300;
	pDC->TextOut(factor * 50, y, "Contact:  Soort");
	y += 300;
	pDC->TextOut(factor * 50, y, "Code");
	pDC->TextOut(factor * 1000, y, "Omschrijving");
	pDC->TextOut(factor * 4000, y, "Aantal");
	pDC->TextOut(factor * 5000, y, "Percentage");
	y += 300;
	for (i = 1; i <= max_soort; i++)
	{
		pDC->TextOut(factor * 50, y, c_soort[i]);
		pDC->TextOut(factor * 1000, y, n_soort[i]);
		m_tekst.Format("%d", a_soort[i]);
		pDC->TextOut(factor * 4000, y, m_tekst);
		m_tekst.Format("%.1f", perc_soort[i]);
		pDC->TextOut(factor * 5000, y, m_tekst + "%");
		y += 150;
	}
	y += 150;
	pDC->TextOut(factor * 50 , y, "Totaal:");
	m_tekst.Format("%d", tot_soort);
	pDC->TextOut(factor * 4000, y, m_tekst);
}

void COverzselView::OnFileBestandcsv() 
{
	// TODO: Add your command handler code here

	FILE *uit;
	int i;

	uit = fopen("excel.txt", "wt");

	fprintf(uit, "Geslacht;");
	fprintf(uit, "\n\n");

	for (i = 1; i <= max_geslacht; i++)
		fprintf(uit, "%s;%s;%d;%.1f\n",
			c_geslacht[i], n_geslacht[i], a_geslacht[i], perc_geslacht[i]);

	fprintf(uit, "\n\n");


	fprintf(uit, "Status;");
	fprintf(uit, "\n\n");

	for (i = 1; i <= max_status; i++)
		fprintf(uit, "%s;%s;%d;%.1f\n",
			c_status[i], n_status[i], a_status[i], perc_status[i]);

	fprintf(uit, "\n\n");


	fprintf(uit, "Leeftijd;");
	fprintf(uit, "\n\n");
	fprintf(uit, "<20;;%d;%.1f\n",
			a_leeftijd[0], perc_leeftijd[0]);
	fprintf(uit, "20  t/m  24;;%d;%.1f\n",
			a_leeftijd[1], perc_leeftijd[1]);
	fprintf(uit, "25  t/m  29;;%d;%.1f\n",
			a_leeftijd[2], perc_leeftijd[2]);
	fprintf(uit, "30  t/m  34;;%d;%.1f\n",
			a_leeftijd[3], perc_leeftijd[3]);
	fprintf(uit, "35  t/m  39;;%d;%.1f\n",
			a_leeftijd[4], perc_leeftijd[4]);
	fprintf(uit, "40  t/m  44;;%d;%.1f\n",
			a_leeftijd[5], perc_leeftijd[5]);
	fprintf(uit, "45  t/m  49;;%d;%.1f\n",
			a_leeftijd[6], perc_leeftijd[6]);
	fprintf(uit, "50  t/m  54;;%d;%.1f\n",
			a_leeftijd[7], perc_leeftijd[7]);
	fprintf(uit, "55  t/m  59;;%d;%.1f\n",
			a_leeftijd[8], perc_leeftijd[8]);
	fprintf(uit, "60  t/m  64;;%d;%.1f\n",
			a_leeftijd[9], perc_leeftijd[9]);
	fprintf(uit, "65 =>;;%d;%.1f\n",
			a_leeftijd[10], perc_leeftijd[10]);
	fprintf(uit, "\n\n");


	fprintf(uit, "Contractvorm;");
	fprintf(uit, "\n\n");

	fprintf(uit, "1;Tijdelijk;%d;%.1f\n",
			tijdelijk, perc_tijdelijk);
	fprintf(uit, "2;Vast;%d;%.1f\n",
			vast, perc_vast);

	fprintf(uit, "\n\n");


	fprintf(uit, "Salarisschaal;");
	fprintf(uit, "\n\n");

	fprintf(uit, "4 t/m 6;;%d;%.1f\n",
			a_salschaal[0], perc_salschaal[0]);
	fprintf(uit, "7 t/m 9;;%d;%.1f\n",
			a_salschaal[1], perc_salschaal[1]);
	fprintf(uit, "10;;%d;%.1f\n",
			a_salschaal[2], perc_salschaal[2]);
	fprintf(uit, "11;;%d;%.1f\n",
			a_salschaal[3], perc_salschaal[3]);
	fprintf(uit, "12;;%d;%.1f\n",
			a_salschaal[4], perc_salschaal[4]);
	fprintf(uit, "13 t/m 18;;%d;%.1f\n",
			a_salschaal[5], perc_salschaal[5]);
	fprintf(uit, "promovendi;;%d;%.1f\n",
			a_salschaal[6], perc_salschaal[6]);

	fprintf(uit, "\n\n");


	fprintf(uit, "Faculteit;");
	fprintf(uit, "\n\n");

	for (i = 1; i <= max_faculteit; i++)
		fprintf(uit, "%s;%s;%d;%.1f\n",
			c_faculteit[i], n_faculteit[i], a_faculteit[i], perc_faculteit[i]);

	fprintf(uit, "\n\n");


	fprintf(uit, "WP / OBP;");
	fprintf(uit, "\n\n");

	for (i = 1; i <= max_wpobp; i++)
		fprintf(uit, "%s;%s;%d;%.1f\n",
			c_wpobp[i], n_wpobp[i], a_wpobp[i], perc_wpobp[i]);

	fprintf(uit, "\n\n");


	fprintf(uit, "Matchen;");
	fprintf(uit, "\n\n");

	for (i = 1; i <= max_match; i++)
		fprintf(uit, "%s;%s;%d;%.1f\n",
			c_match[i], n_match[i], a_match[i], perc_match[i]);

	fprintf(uit, "\n\n");


	fprintf(uit, "Bemiddelaar;");
	fprintf(uit, "\n\n");

	for (i = 1; i <= max_bemiddelaar; i++)
		fprintf(uit, "%s;%s;%d;%.1f\n",
			c_bemiddelaar[i], n_bemiddelaar[i], a_bemiddelaar[i], perc_bemiddelaar[i]);

	fprintf(uit, "\n\n");


	fprintf(uit, "Traject;");
	fprintf(uit, "\n\n");

	for (i = 1; i <= max_traject; i++)
		fprintf(uit, "%s;%s;%d;%.1f\n",
			c_traject[i], n_traject[i], a_traject[i], perc_traject[i]);

	fprintf(uit, "\n\n");


	fprintf(uit, "Afmeldreden;");
	fprintf(uit, "\n\n");

	for (i = 1; i <= max_afmreden; i++)
		fprintf(uit, "%s;%s;%d;%.1f\n",
			c_afmreden[i], n_afmreden[i], a_afmreden[i], perc_afmreden[i]);

	fprintf(uit, "\n\n");


	fprintf(uit, "Soort;");
	fprintf(uit, "\n\n");

	for (i = 1; i <= max_soort; i++)
		fprintf(uit, "%s;%s;%d;%.1f\n",
			c_soort[i], n_soort[i], a_soort[i], perc_soort[i]);

	fclose(uit);
}

void COverzselView::OnFileBestandtxt() 
{
	// TODO: Add your command handler code here
	
	FILE *uit;
	COleDateTime m_vandaag;
	CString m_dag, m_tekst, m_tekst2;
	int i;
	double perc;

	uit = fopen("word.txt", "wt");
	m_vandaag = COleDateTime::GetCurrentTime();
	m_dag = m_vandaag.Format("%d-%m-%Y");

	fprintf(uit, "STATISTISCH OVERZICHT MENTOR (%s)", m_dag);
	fprintf(uit, "\n\n");
	fprintf(uit, "Interne kandidaten, aantal geselecteerd :  %d.", m_records);
	fprintf(uit, "\n\n");

	if (m_extra_regels)
		fprintf(uit, "Selectie:");
	else
		fprintf(uit, "Selectie: geen.");
	fprintf(uit, "\n\n");

	if (m_projnrvan != "" && m_projnrtot != "")
		fprintf(uit, "Projectnummers van %s t/m %s.\n", m_projnrvan, m_projnrtot);
	else if (m_projnrvan != "")
		fprintf(uit, "Projectnummers van %s.\n", m_projnrvan);
	else if (m_projnrtot != "")
		fprintf(uit, "Projectnummers t/m %s.\n", m_projnrtot);

	if (m_projnruitz != "")
		fprintf(uit, "Uitgezonderde projectnummers: %s.\n", m_projnruitz);

	if (m_gebdatvan != "" && m_gebdattot != "")
		fprintf(uit, "Geboortedatum van  %s t/m %s.\n", m_gebdatvan, m_gebdattot);
	else if (m_gebdatvan != "")
		fprintf(uit, "Geboortedatum van %s.\n", m_gebdatvan);
	else if (m_gebdattot != "")
		fprintf(uit, "Geboortedatum t/m %s.\n", m_gebdattot);

	if (m_sexe != "")
		fprintf(uit, "Sexe: %s.\n", m_sexe);

	if (m_hsalsch != "")
		fprintf(uit, "Salarisschaal: %s.\n", m_hsalsch);

	if (m_hfunomv != "")
		fprintf(uit, "Huidige functieomvang: %s.\n", m_hfunomv);

	if (m_hdvbtyp != "")
		fprintf(uit, "Huidig dienstverband:%s.\n", m_hdvbtyp);

	if (m_anmdatvan != "" && m_anmdattot != "")
		fprintf(uit, "Aanmelddatum van %s t/m %s.\n", m_anmdatvan, m_anmdattot);
	else if (m_anmdatvan != "")
		fprintf(uit, "Aanmelddatum van %s.\n", m_anmdatvan);
	else if (m_anmdattot != "")
		fprintf(uit, "Aanmelddatum t/m %s.\n", m_anmdattot);

	if (m_anmred != "")
		fprintf(uit, "Aanmeldreden: %s.\n", m_anmred);

	if (m_anmreduitz != "")
		fprintf(uit, "Uitgezonderde aanmeldreden: %s.\n", m_anmreduitz);

	if (m_afmdatvan != "" && m_afmdattot != "")
		fprintf(uit, "Afmelddatum van %s t/m %s.\n", m_afmdatvan, m_afmdattot);
	else if (m_afmdatvan != "")
		fprintf(uit, "Afmelddatum van %s.\n", m_afmdatvan);
	else if (m_afmdattot != "")
		fprintf(uit, "Afmelddatum t/m %s.\n", m_afmdattot);

	if (m_afmdatvanuitz != "" && m_afmdattotuitz != "")
		fprintf(uit, "Afmelddatum uitgezonderde van %s t/m %s.\n", m_afmdatvanuitz, m_afmdattotuitz);
	else if (m_afmdatvanuitz != "")
		fprintf(uit, "Afmelddatum uitgezonderde van %s.\n", m_afmdatvanuitz);
	else if (m_afmdattotuitz != "")
		fprintf(uit, "Afmelddatum uitgezonderde t/m %s.\n", m_afmdattotuitz);

	if (m_afmred != "")
		fprintf(uit, "Afmeldreden: %s.\n", m_afmred);

	if (m_afmreduitz != "")
		fprintf(uit, "Uitgezonderde afmeldreden: %s.\n", m_afmreduitz);

	if (m_agddatevan != "" && m_agddatetot != "")
		fprintf(uit, "Agendadatum van %s t/m %s.\n", m_agddatevan, m_agddatetot);
	else if (m_agddatevan != "")
		fprintf(uit, "Agendadatum van %s.\n", m_agddatevan);
	else if (m_agddatetot != "")
		fprintf(uit, "Agendadatum t/m %s.\n", m_agddatetot);

	if (m_agdred != "")
		fprintf(uit, "Agendareden: %s.\n", m_agdred);

	if (m_agdreduitz != "")
		fprintf(uit, "Uitgezonderde agendareden: %s.\n", m_agdreduitz);

	if (m_hfaccod != "")
		fprintf(uit, "Faculteit: %s.\n", m_hfaccod);

	if (m_wpobp != "")
		fprintf(uit, "WP / OPB: %s.\n", m_wpobp);

	if (m_advmob != "")
		fprintf(uit, "Mobiliteitsfunctionaris: %s.\n", m_advmob);

	if (m_match != "")
		fprintf(uit, "Match? %s.\n", m_match);

	if (m_traject != "")
		fprintf(uit, "Traject: %s.\n", m_traject);

	if (m_trajectuitz != "")
		fprintf(uit, "Uitgezonderde trajecten: %s.\n", m_trajectuitz);

	if (m_kndsta != "")
		fprintf(uit, "Status: %s.\n", m_kndsta);

	if (m_kndstauitz != "")
		fprintf(uit, "Uitgezonderde statussen: %s.\n", m_kndstauitz);

	if (m_datumvan != "" && m_datumtot != "")
		fprintf(uit, "Contactdatum van %s t/m %s.\n", m_datumvan, m_datumtot);
	else if (m_datumvan != "")
		fprintf(uit, "Contactdatum van %s.\n", m_datumvan);
	else if (m_datumtot != "")
		fprintf(uit, "Contactdatum t/m %s.\n", m_datumtot);

	if (m_rubriek != "")
		fprintf(uit, "Contact rubriek: %s.\n", m_rubriek);

	if (m_contsrt != "")
		fprintf(uit, "Contact soort: %s.\n", m_contsrt);

	fprintf(uit, "\n");
	if (m_extra_regels)
		fprintf(uit, "\n");

	fprintf(uit, "Persoon:  Geslacht");
	fprintf(uit, "\n\n");
	fprintf(uit, "Code        Omschrijving                              Aantal      Percentage");
	fprintf(uit, "\n\n");

	for (i = 1; i <= max_geslacht; i++)
	{
		m_tekst.Format("%d", a_geslacht[i]);
		if (a_geslacht[i] < 10)
			m_tekst = "  " + m_tekst;
		else if (a_geslacht[i] < 100)
			m_tekst = " " + m_tekst;
		m_tekst2.Format("%.1f", perc_geslacht[i]);
		if (perc_geslacht[i] < 10)
			m_tekst2 = "  " + m_tekst2;
		else if (perc_geslacht[i] < 100)
			m_tekst2 = " " + m_tekst2;
		fprintf(uit, "%s           %s               %s       %s%%\n",
			c_geslacht[i], n_geslacht[i], m_tekst, m_tekst2);
	}
	fprintf(uit, "\n");

	m_tekst.Format("%d", tot_geslacht);
	if (tot_geslacht < 10)
		m_tekst = "  " + m_tekst;
	else if (tot_geslacht < 100)
		m_tekst = " " + m_tekst;
	perc = (double) 100 * tot_geslacht / m_records;
	if (perc < 95)
		fprintf(uit, "Totaal:                                                  %s?\n", m_tekst);
	else
		fprintf(uit, "Totaal:                                                  %s\n", m_tekst);

	fprintf(uit, "\n\n");


	fprintf(uit, "Persoon:  Status");
	fprintf(uit, "\n\n");
	fprintf(uit, "Code        Omschrijving                              Aantal      Percentage");
	fprintf(uit, "\n\n");

	for (i = 1; i <= max_status; i++)
	{
		m_tekst.Format("%d", a_status[i]);
		if (a_status[i] < 10)
			m_tekst = "  " + m_tekst;
		else if (a_status[i] < 100)
			m_tekst = " " + m_tekst;
		m_tekst2.Format("%.1f", perc_status[i]);
		if (perc_status[i] < 10)
			m_tekst2 = "  " + m_tekst2;
		else if (perc_status[i] < 100)
			m_tekst2 = " " + m_tekst2;
		fprintf(uit, "%s           %s               %s       %s%%\n",
			c_status[i], n_status[i], m_tekst, m_tekst2);
	}
	fprintf(uit, "\n");

	m_tekst.Format("%d", tot_status);
	if (tot_status < 10)
		m_tekst = "  " + m_tekst;
	else if (tot_status < 100)
		m_tekst = " " + m_tekst;
	perc = (double) 100 * tot_status / m_records;
	if (perc < 95)
		fprintf(uit, "Totaal:                                                  %s?\n", m_tekst);
	else
		fprintf(uit, "Totaal:                                                  %s\n", m_tekst);

	fprintf(uit, "\n\n");


	fprintf(uit, "Persoon:  Leeftijd");
	fprintf(uit, "\n\n");
	fprintf(uit, "Omschrijving                                          Aantal      Percentage");
	fprintf(uit, "\n\n");

	m_tekst.Format("%d", a_leeftijd[0]);
	if (a_leeftijd[0] < 10)
		m_tekst = "  " + m_tekst;
	else if (a_leeftijd[0] < 100)
		m_tekst = " " + m_tekst;
	m_tekst2.Format("%.1f", perc_leeftijd[0]);
	if (perc_leeftijd[0] < 10)
		m_tekst2 = "  " + m_tekst2;
	else if (perc_leeftijd[0] < 100)
		m_tekst2 = " " + m_tekst2;

	fprintf(uit, "<20                                                      %s       %s%%\n",
			m_tekst, m_tekst2);

	m_tekst.Format("%d", a_leeftijd[1]);
	if (a_leeftijd[1] < 10)
		m_tekst = "  " + m_tekst;
	else if (a_leeftijd[1] < 100)
		m_tekst = " " + m_tekst;
	m_tekst2.Format("%.1f", perc_leeftijd[1]);
	if (perc_leeftijd[1] < 10)
		m_tekst2 = "  " + m_tekst2;
	else if (perc_leeftijd[1] < 100)
		m_tekst2 = " " + m_tekst2;

	fprintf(uit, "20  t/m  24                                              %s       %s%%\n",
			m_tekst, m_tekst2);

	m_tekst.Format("%d", a_leeftijd[2]);
	if (a_leeftijd[2] < 10)
		m_tekst = "  " + m_tekst;
	else if (a_leeftijd[2] < 100)
		m_tekst = " " + m_tekst;
	m_tekst2.Format("%.1f", perc_leeftijd[2]);
	if (perc_leeftijd[2] < 10)
		m_tekst2 = "  " + m_tekst2;
	else if (perc_leeftijd[2] < 100)
		m_tekst2 = " " + m_tekst2;

	fprintf(uit, "25  t/m  29                                              %s       %s%%\n",
			m_tekst, m_tekst2);

	m_tekst.Format("%d", a_leeftijd[3]);
	if (a_leeftijd[3] < 10)
		m_tekst = "  " + m_tekst;
	else if (a_leeftijd[3] < 100)
		m_tekst = " " + m_tekst;
	m_tekst2.Format("%.1f", perc_leeftijd[3]);
	if (perc_leeftijd[3] < 10)
		m_tekst2 = "  " + m_tekst2;
	else if (perc_leeftijd[3] < 100)
		m_tekst2 = " " + m_tekst2;

	fprintf(uit, "30  t/m  34                                              %s       %s%%\n",
			m_tekst, m_tekst2);

	m_tekst.Format("%d", a_leeftijd[4]);
	if (a_leeftijd[4] < 10)
		m_tekst = "  " + m_tekst;
	else if (a_leeftijd[4] < 100)
		m_tekst = " " + m_tekst;
	m_tekst2.Format("%.1f", perc_leeftijd[4]);
	if (perc_leeftijd[4] < 10)
		m_tekst2 = "  " + m_tekst2;
	else if (perc_leeftijd[4] < 100)
		m_tekst2 = " " + m_tekst2;

	fprintf(uit, "35  t/m  39                                              %s       %s%%\n",
			m_tekst, m_tekst2);

	m_tekst.Format("%d", a_leeftijd[5]);
	if (a_leeftijd[5] < 10)
		m_tekst = "  " + m_tekst;
	else if (a_leeftijd[5] < 100)
		m_tekst = " " + m_tekst;
	m_tekst2.Format("%.1f", perc_leeftijd[5]);
	if (perc_leeftijd[5] < 10)
		m_tekst2 = "  " + m_tekst2;
	else if (perc_leeftijd[5] < 100)
		m_tekst2 = " " + m_tekst2;

	fprintf(uit, "40  t/m  44                                              %s       %s%%\n",
			m_tekst, m_tekst2);

	m_tekst.Format("%d", a_leeftijd[6]);
	if (a_leeftijd[6] < 10)
		m_tekst = "  " + m_tekst;
	else if (a_leeftijd[6] < 100)
		m_tekst = " " + m_tekst;
	m_tekst2.Format("%.1f", perc_leeftijd[6]);
	if (perc_leeftijd[6] < 10)
		m_tekst2 = "  " + m_tekst2;
	else if (perc_leeftijd[6] < 100)
		m_tekst2 = " " + m_tekst2;

	fprintf(uit, "45  t/m  49                                              %s       %s%%\n",
			m_tekst, m_tekst2);

	m_tekst.Format("%d", a_leeftijd[7]);
	if (a_leeftijd[7] < 10)
		m_tekst = "  " + m_tekst;
	else if (a_leeftijd[7] < 100)
		m_tekst = " " + m_tekst;
	m_tekst2.Format("%.1f", perc_leeftijd[7]);
	if (perc_leeftijd[7] < 10)
		m_tekst2 = "  " + m_tekst2;
	else if (perc_leeftijd[7] < 100)
		m_tekst2 = " " + m_tekst2;

	fprintf(uit, "50  t/m  54                                              %s       %s%%\n",
			m_tekst, m_tekst2);

	m_tekst.Format("%d", a_leeftijd[8]);
	if (a_leeftijd[8] < 10)
		m_tekst = "  " + m_tekst;
	else if (a_leeftijd[8] < 100)
		m_tekst = " " + m_tekst;
	m_tekst2.Format("%.1f", perc_leeftijd[8]);
	if (perc_leeftijd[8] < 10)
		m_tekst2 = "  " + m_tekst2;
	else if (perc_leeftijd[8] < 100)
		m_tekst2 = " " + m_tekst2;

	fprintf(uit, "55  t/m  59                                              %s       %s%%\n",
			m_tekst, m_tekst2);

	m_tekst.Format("%d", a_leeftijd[9]);
	if (a_leeftijd[9] < 10)
		m_tekst = "  " + m_tekst;
	else if (a_leeftijd[9] < 100)
		m_tekst = " " + m_tekst;
	m_tekst2.Format("%.1f", perc_leeftijd[9]);
	if (perc_leeftijd[9] < 10)
		m_tekst2 = "  " + m_tekst2;
	else if (perc_leeftijd[9] < 100)
		m_tekst2 = " " + m_tekst2;

	fprintf(uit, "60  t/m  64                                              %s       %s%%\n",
			m_tekst, m_tekst2);

	m_tekst.Format("%d", a_leeftijd[10]);
	if (a_leeftijd[10] < 10)
		m_tekst = "  " + m_tekst;
	else if (a_leeftijd[10] < 100)
		m_tekst = " " + m_tekst;
	m_tekst2.Format("%.1f", perc_leeftijd[10]);
	if (perc_leeftijd[10] < 10)
		m_tekst2 = "  " + m_tekst2;
	else if (perc_leeftijd[10] < 100)
		m_tekst2 = " " + m_tekst2;

	fprintf(uit, "65 =>                                                    %s       %s%%\n",
			m_tekst, m_tekst2);
	fprintf(uit, "\n");

	m_tekst.Format("%.0f", tot_leeftijd);
	if (tot_leeftijd < 10)
		m_tekst = "  " + m_tekst;
	else if (tot_leeftijd < 100)
		m_tekst = " " + m_tekst;
	perc = (double) 100 * tot_leeftijd / m_records;
	if (perc < 95)
		fprintf(uit, "Totaal:                                                  %s?\n", m_tekst);
	else
		fprintf(uit, "Totaal:                                                  %s\n", m_tekst);
	fprintf(uit, "\n");

	fprintf(uit, "Gemiddeld :  %.1f", gem_leeftijd);
	fprintf(uit, "\n\n\n");

	
	fprintf(uit, "Persoon:  Contractvorm");
	fprintf(uit, "\n\n");
	fprintf(uit, "Code        Omschrijving                              Aantal      Percentage");
	fprintf(uit, "\n\n");

	m_tekst.Format("%d", tijdelijk);
	if (tijdelijk < 10)
		m_tekst = "  " + m_tekst;
	else if (tijdelijk < 100)
		m_tekst = " " + m_tekst;
	m_tekst2.Format("%.1f", perc_tijdelijk);
	if (perc_tijdelijk < 10)
		m_tekst2 = "  " + m_tekst2;
	else if (perc_tijdelijk < 100)
		m_tekst2 = " " + m_tekst2;

	fprintf(uit, "1           Tijdelijk                                    %s       %s%%\n",
			m_tekst, m_tekst2);

	m_tekst.Format("%d", vast);
	if (vast < 10)
		m_tekst = "  " + m_tekst;
	else if (vast < 100)
		m_tekst = " " + m_tekst;
	m_tekst2.Format("%.1f", perc_vast);
	if (perc_vast < 10)
		m_tekst2 = "  " + m_tekst2;
	else if (perc_vast < 100)
		m_tekst2 = " " + m_tekst2;

	fprintf(uit, "2           Vast                                         %s       %s%%\n",
			m_tekst, m_tekst2);

	fprintf(uit, "\n");

	m_tekst.Format("%d", tot_type);
	if (tot_type < 10)
		m_tekst = "  " + m_tekst;
	else if (tot_type < 100)
		m_tekst = " " + m_tekst;
	perc = (double) 100 * tot_type / m_records;
	if (perc < 95)
		fprintf(uit, "Totaal:                                                  %s?\n", m_tekst);
	else
		fprintf(uit, "Totaal:                                                  %s\n", m_tekst);

	fprintf(uit, "\n\n");



	fprintf(uit, "Persoon:  Salarisschaal");
	fprintf(uit, "\n\n");
	fprintf(uit, "Omschrijving                                          Aantal      Percentage");
	fprintf(uit, "\n\n");

	m_tekst.Format("%d", a_salschaal[0]);
	if (a_salschaal[0] < 10)
		m_tekst = "  " + m_tekst;
	else if (a_salschaal[0] < 100)
		m_tekst = " " + m_tekst;
	m_tekst2.Format("%.1f", perc_salschaal[0]);
	if (perc_salschaal[0] < 10)
		m_tekst2 = "  " + m_tekst2;
	else if (perc_salschaal[0] < 100)
		m_tekst2 = " " + m_tekst2;

	fprintf(uit, "4 t/m 6                                                  %s       %s%%\n",
			m_tekst, m_tekst2);

	m_tekst.Format("%d", a_salschaal[1]);
	if (a_salschaal[1] < 10)
		m_tekst = "  " + m_tekst;
	else if (a_salschaal[1] < 100)
		m_tekst = " " + m_tekst;
	m_tekst2.Format("%.1f", perc_salschaal[1]);
	if (perc_salschaal[1] < 10)
		m_tekst2 = "  " + m_tekst2;
	else if (perc_salschaal[1] < 100)
		m_tekst2 = " " + m_tekst2;

	fprintf(uit, "7 t/m 9                                                  %s       %s%%\n",
			m_tekst, m_tekst2);

	m_tekst.Format("%d", a_salschaal[2]);
	if (a_salschaal[2] < 10)
		m_tekst = "  " + m_tekst;
	else if (a_salschaal[2] < 100)
		m_tekst = " " + m_tekst;
	m_tekst2.Format("%.1f", perc_salschaal[2]);
	if (perc_salschaal[2] < 10)
		m_tekst2 = "  " + m_tekst2;
	else if (perc_salschaal[2] < 100)
		m_tekst2 = " " + m_tekst2;

	fprintf(uit, "10                                                       %s       %s%%\n",
			m_tekst, m_tekst2);

	m_tekst.Format("%d", a_salschaal[3]);
	if (a_salschaal[3] < 10)
		m_tekst = "  " + m_tekst;
	else if (a_salschaal[3] < 100)
		m_tekst = " " + m_tekst;
	m_tekst2.Format("%.1f", perc_salschaal[3]);
	if (perc_salschaal[3] < 10)
		m_tekst2 = "  " + m_tekst2;
	else if (perc_salschaal[3] < 100)
		m_tekst2 = " " + m_tekst2;

	fprintf(uit, "11                                                       %s       %s%%\n",
			m_tekst, m_tekst2);

	m_tekst.Format("%d", a_salschaal[4]);
	if (a_salschaal[4] < 10)
		m_tekst = "  " + m_tekst;
	else if (a_salschaal[4] < 100)
		m_tekst = " " + m_tekst;
	m_tekst2.Format("%.1f", perc_salschaal[4]);
	if (perc_salschaal[4] < 10)
		m_tekst2 = "  " + m_tekst2;
	else if (perc_salschaal[4] < 100)
		m_tekst2 = " " + m_tekst2;

	fprintf(uit, "12                                                       %s       %s%%\n",
			m_tekst, m_tekst2);

	m_tekst.Format("%d", a_salschaal[5]);
	if (a_salschaal[5] < 10)
		m_tekst = "  " + m_tekst;
	else if (a_salschaal[5] < 100)
		m_tekst = " " + m_tekst;
	m_tekst2.Format("%.1f", perc_salschaal[5]);
	if (perc_salschaal[5] < 10)
		m_tekst2 = "  " + m_tekst2;
	else if (perc_salschaal[5] < 100)
		m_tekst2 = " " + m_tekst2;

	fprintf(uit, "13 t/m 18                                                %s       %s%%\n",
			m_tekst, m_tekst2);

	m_tekst.Format("%d", a_salschaal[6]);
	if (a_salschaal[6] < 10)
		m_tekst = "  " + m_tekst;
	else if (a_salschaal[6] < 100)
		m_tekst = " " + m_tekst;
	m_tekst2.Format("%.1f", perc_salschaal[6]);
	if (perc_salschaal[6] < 10)
		m_tekst2 = "  " + m_tekst2;
	else if (perc_salschaal[6] < 100)
		m_tekst2 = " " + m_tekst2;

	fprintf(uit, "promovendi                                               %s       %s%%\n",
			m_tekst, m_tekst2);

	fprintf(uit, "\n");

	m_tekst.Format("%d", tot_salschaal);
	if (tot_salschaal < 10)
		m_tekst = "  " + m_tekst;
	else if (tot_salschaal < 100)
		m_tekst = " " + m_tekst;
	perc = (double) 100 * tot_salschaal / m_records;
	if (perc < 95)
		fprintf(uit, "Totaal:                                                  %s?\n", m_tekst);
	else
		fprintf(uit, "Totaal:                                                  %s\n", m_tekst);

	fprintf(uit, "\n\n");


	fprintf(uit, "Persoon:  Faculteit");
	fprintf(uit, "\n\n");
	fprintf(uit, "Code        Omschrijving                              Aantal      Percentage");
	fprintf(uit, "\n\n");

	for (i = 1; i <= max_faculteit; i++)
	{
		m_tekst.Format("%d", a_faculteit[i]);
		if (a_faculteit[i] < 10)
			m_tekst = "  " + m_tekst;
		else if (a_faculteit[i] < 100)
			m_tekst = " " + m_tekst;
		m_tekst2.Format("%.1f", perc_faculteit[i]);
		if (perc_faculteit[i] < 10)
			m_tekst2 = "  " + m_tekst2;
		else if (perc_faculteit[i] < 100)
			m_tekst2 = " " + m_tekst2;
		fprintf(uit, "%s      %s               %s       %s%%\n",
			c_faculteit[i], n_faculteit[i], m_tekst, m_tekst2);
	}
	fprintf(uit, "\n");

	m_tekst.Format("%d", tot_faculteit);
	if (tot_faculteit < 10)
		m_tekst = "  " + m_tekst;
	else if (tot_faculteit < 100)
		m_tekst = " " + m_tekst;
	perc = (double) 100 * tot_faculteit / m_records;
	if (perc < 95)
		fprintf(uit, "Totaal:                                                  %s?\n", m_tekst);
	else
		fprintf(uit, "Totaal:                                                  %s\n", m_tekst);

	fprintf(uit, "\n\n");


	fprintf(uit, "Persoon:  WP / OBP");
	fprintf(uit, "\n\n");
	fprintf(uit, "Code        Omschrijving                              Aantal      Percentage");
	fprintf(uit, "\n\n");

	for (i = 1; i <= max_wpobp; i++)
	{
		m_tekst.Format("%d", a_wpobp[i]);
		if (a_wpobp[i] < 10)
			m_tekst = "  " + m_tekst;
		else if (a_wpobp[i] < 100)
			m_tekst = " " + m_tekst;
		m_tekst2.Format("%.1f", perc_wpobp[i]);
		if (perc_wpobp[i] < 10)
			m_tekst2 = "  " + m_tekst2;
		else if (perc_wpobp[i] < 100)
			m_tekst2 = " " + m_tekst2;
		fprintf(uit, "%s           %s               %s       %s%%\n",
			c_wpobp[i], n_wpobp[i], m_tekst, m_tekst2);
	}
	fprintf(uit, "\n");

	m_tekst.Format("%d", tot_wpobp);
	if (tot_wpobp < 10)
		m_tekst = "  " + m_tekst;
	else if (tot_wpobp < 100)
		m_tekst = " " + m_tekst;
	perc = (double) 100 * tot_wpobp / m_records;
	if (perc < 95)
		fprintf(uit, "Totaal:                                                  %s?\n", m_tekst);
	else
		fprintf(uit, "Totaal:                                                  %s\n", m_tekst);

	fprintf(uit, "\n\n");


	fprintf(uit, "Persoon:  Matchen");
	fprintf(uit, "\n\n");
	fprintf(uit, "Code        Omschrijving                              Aantal      Percentage");
	fprintf(uit, "\n\n");

	for (i = 1; i <= max_match; i++)
	{
		m_tekst.Format("%d", a_match[i]);
		if (a_match[i] < 10)
			m_tekst = "  " + m_tekst;
		else if (a_match[i] < 100)
			m_tekst = " " + m_tekst;
		m_tekst2.Format("%.1f", perc_match[i]);
		if (perc_match[i] < 10)
			m_tekst2 = "  " + m_tekst2;
		else if (perc_match[i] < 100)
			m_tekst2 = " " + m_tekst2;
		fprintf(uit, "%s           %s               %s       %s%%\n",
			c_match[i], n_match[i], m_tekst, m_tekst2);
	}
	fprintf(uit, "\n");

	m_tekst.Format("%d", tot_match);
	if (tot_match < 10)
		m_tekst = "  " + m_tekst;
	else if (tot_match < 100)
		m_tekst = " " + m_tekst;
	perc = (double) 100 * tot_match / m_records;
	if (perc < 95)
		fprintf(uit, "Totaal:                                                  %s?\n", m_tekst);
	else
		fprintf(uit, "Totaal:                                                  %s\n", m_tekst);

	fprintf(uit, "\n\n");


	fprintf(uit, "Persoon:  Bemiddelaar");
	fprintf(uit, "\n\n");
	fprintf(uit, "Code        Omschrijving                              Aantal      Percentage");
	fprintf(uit, "\n\n");

	for (i = 1; i <= max_bemiddelaar; i++)
	{
		m_tekst.Format("%d", a_bemiddelaar[i]);
		if (a_bemiddelaar[i] < 10)
			m_tekst = "  " + m_tekst;
		else if (a_bemiddelaar[i] < 100)
			m_tekst = " " + m_tekst;
		m_tekst2.Format("%.1f", perc_bemiddelaar[i]);
		if (perc_bemiddelaar[i] < 10)
			m_tekst2 = "  " + m_tekst2;
		else if (perc_bemiddelaar[i] < 100)
			m_tekst2 = " " + m_tekst2;
		fprintf(uit, "%s        %s               %s       %s%%\n",
			c_bemiddelaar[i], n_bemiddelaar[i], m_tekst, m_tekst2);
	}
	fprintf(uit, "\n");

	m_tekst.Format("%d", tot_bemiddelaar);
	if (tot_bemiddelaar < 10)
		m_tekst = "  " + m_tekst;
	else if (tot_bemiddelaar < 100)
		m_tekst = " " + m_tekst;
	perc = (double) 100 * tot_bemiddelaar / m_records;
	if (perc < 95)
		fprintf(uit, "Totaal:                                                  %s?\n", m_tekst);
	else
		fprintf(uit, "Totaal:                                                  %s\n", m_tekst);

	fprintf(uit, "\n\n");


	fprintf(uit, "Persoon:  Traject");
	fprintf(uit, "\n\n");
	fprintf(uit, "Code        Omschrijving                              Aantal      Percentage");
	fprintf(uit, "\n\n");

	for (i = 1; i <= max_traject; i++)
	{
		m_tekst.Format("%d", a_traject[i]);
		if (a_traject[i] < 10)
			m_tekst = "  " + m_tekst;
		else if (a_traject[i] < 100)
			m_tekst = " " + m_tekst;
		m_tekst2.Format("%.1f", perc_traject[i]);
		if (perc_traject[i] < 10)
			m_tekst2 = "  " + m_tekst2;
		else if (perc_traject[i] < 100)
			m_tekst2 = " " + m_tekst2;
		fprintf(uit, "%s        %s               %s       %s%%\n",
			c_traject[i], n_traject[i], m_tekst, m_tekst2);
	}
	fprintf(uit, "\n");

	m_tekst.Format("%d", tot_traject);
	if (tot_traject < 10)
		m_tekst = "  " + m_tekst;
	else if (tot_traject < 100)
		m_tekst = " " + m_tekst;
	perc = (double) 100 * tot_traject / m_records;
	if (perc < 95)
		fprintf(uit, "Totaal:                                                  %s?\n", m_tekst);
	else
		fprintf(uit, "Totaal:                                                  %s\n", m_tekst);

	fprintf(uit, "\n\n");


	fprintf(uit, "Persoon:  Afmeldreden");
	fprintf(uit, "\n\n");
	fprintf(uit, "Code        Omschrijving                              Aantal      Percentage");
	fprintf(uit, "\n\n");

	for (i = 1; i <= max_afmreden; i++)
	{
		m_tekst.Format("%d", a_afmreden[i]);
		if (a_afmreden[i] < 10)
			m_tekst = "  " + m_tekst;
		else if (a_afmreden[i] < 100)
			m_tekst = " " + m_tekst;
		m_tekst2.Format("%.1f", perc_afmreden[i]);
		if (perc_afmreden[i] < 10)
			m_tekst2 = "  " + m_tekst2;
		else if (perc_afmreden[i] < 100)
			m_tekst2 = " " + m_tekst2;
		fprintf(uit, "%s        %s               %s       %s%%\n",
			c_afmreden[i], n_afmreden[i], m_tekst, m_tekst2);
	}
	fprintf(uit, "\n");

	m_tekst.Format("%d", tot_afmreden);
	if (tot_afmreden < 10)
		m_tekst = "  " + m_tekst;
	else if (tot_afmreden < 100)
		m_tekst = " " + m_tekst;
	perc = (double) 100 * tot_afmreden / m_records;
	if (perc < 95)
		fprintf(uit, "Totaal:                                                  %s?\n", m_tekst);
	else
		fprintf(uit, "Totaal:                                                  %s\n", m_tekst);

	fprintf(uit, "\n\n");


	fprintf(uit, "Contact:  Soort");
	fprintf(uit, "\n\n");
	fprintf(uit, "Code        Omschrijving                              Aantal      Percentage");
	fprintf(uit, "\n\n");

	for (i = 1; i <= max_soort; i++)
	{
		m_tekst.Format("%d", a_soort[i]);
		if (a_soort[i] < 10)
			m_tekst = "   " + m_tekst;
		else if (a_soort[i] < 100)
			m_tekst = "  " + m_tekst;
		else if (a_soort[i] < 1000)
			m_tekst = " " + m_tekst;
		m_tekst2.Format("%.1f", perc_soort[i]);
		if (perc_soort[i] < 10)
			m_tekst2 = "  " + m_tekst2;
		else if (perc_soort[i] < 100)
			m_tekst2 = " " + m_tekst2;
		fprintf(uit, "%s        %s              %s       %s%%\n",
			c_soort[i], n_soort[i], m_tekst, m_tekst2);
	}
	fprintf(uit, "\n");

	m_tekst.Format("%d", tot_soort);
	if (tot_soort < 10)
		m_tekst = "   " + m_tekst;
	else if (tot_soort < 100)
		m_tekst = "  " + m_tekst;
	else if (tot_soort < 1000)
		m_tekst = " " + m_tekst;
	fprintf(uit, "Totaal:                                                 %s\n", m_tekst);

	fclose(uit);
}

/////////////////////////////////////////////////////////////////////////////
// COverzselView message handlers

BOOL COverzselView::OnPreparePrinting(CPrintInfo* pInfo) 
{
	CDC* pDC;
	pDC = GetDC();
	long m_p_aantal_regels ;
	int m_pages;

	m_p_aantal_regels = pDC->GetDeviceCaps(VERTRES) / 150;
	m_aantal_regels -= 11;
	m_pages = m_aantal_regels / m_p_aantal_regels + 1;

	pInfo->SetMaxPage(m_pages);

	return DoPreparePrinting(pInfo);
}

void COverzselView::OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo) 
{
	// TODO: Add your specialized code here and/or call the base class
	int m_pages;
	long m_p_aantal_regels ;

	m_p_aantal_regels = pDC->GetDeviceCaps(VERTRES) / 150;
	m_aantal_regels -= 11;
	m_pages = m_aantal_regels / m_p_aantal_regels + 1;

	pInfo->SetMaxPage(m_pages);
}

void COverzselView::OnPrint(CDC* pDC, CPrintInfo* pInfo) 
{
	// TODO: Add your specialized code here and/or call the base class
	int paginahoogte = pDC->GetDeviceCaps(VERTRES);
	int begin        = paginahoogte * (pInfo->m_nCurPage - 1);

	pDC->SetViewportOrg(0, -begin);
	
	CScrollView::OnPrint(pDC, pInfo);
}

void COverzselView::OnEndPrinting(CDC* pDC, CPrintInfo* pInfo) 
{
	// TODO: Add your specialized code here and/or call the base class
	
	CScrollView::OnEndPrinting(pDC, pInfo);
}

BOOL COverzselView::OnScroll(UINT nScrollCode, UINT nPos, BOOL bDoScroll) 
{
	// TODO: Add your specialized code here and/or call the base class
	
	return CScrollView::OnScroll(nScrollCode, nPos, bDoScroll);
}

BOOL COverzselView::OnScrollBy(CSize sizeScroll, BOOL bDoScroll) 
{
	// TODO: Add your specialized code here and/or call the base class
	
	return CScrollView::OnScrollBy(sizeScroll, bDoScroll);
}

/////////////////////////////////////////////////////////////////////////////
// COverzselView diagnostics

#ifdef _DEBUG
void COverzselView::AssertValid() const
{
	CScrollView::AssertValid();
}

void COverzselView::Dump(CDumpContext& dc) const
{
	CScrollView::Dump(dc);
}
#endif //_DEBUG
