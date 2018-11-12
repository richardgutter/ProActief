// Conv.cpp: implementation of the CConv class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "overz.h"
#include "Conv.h"

#include <stdio.h>

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CConv::CConv()
{

}

CConv::~CConv()
{

}

CConv::conversie()
{
	ikand();
	corresp();
	codes();
}

CConv::ikand()
{
    char ch;

	m_setikand.Open();

	while (!m_setikand.IsBOF())
	{
		m_setikand.Delete();
		m_setikand.MoveFirst();
	}

	in = fopen("ikand.txt", "rt");
	ch = fgetc(in);
    while (!feof(in))
    {
		lees_ikand();
		schr_ikand();
		ch = fgetc(in);
		ch = fgetc(in);
    }
	fclose(in);
	m_setikand.Close();
}

CConv::lees_ikand()
{
	lees_waarde();
	m_id = (CString) waarde;
	lees_waarde();
	m_projnr = (CString) waarde;
	lees_waarde();
	m_kndsta = (CString) waarde;
	lees_waarde();
	m_match = (CString) waarde;
	lees_waarde();
	m_gebdat = (CString) waarde;
	lees_waarde();
	m_sexe = (CString) waarde;
	lees_waarde();
	m_hdvbtyp = (CString) waarde;
	lees_waarde();
	m_hsalsch = (CString) waarde;
	lees_waarde();
	m_hfaccod = (CString) waarde;
	lees_waarde();
	m_hfunomv = (CString) waarde;
	lees_waarde();
	m_wpobp = (CString) waarde;
	lees_waarde();
	m_anmdat = (CString) waarde;
	lees_waarde();
	m_anmred = (CString) waarde;
	lees_waarde();
	m_advmob = (CString) waarde;
	lees_waarde();
	m_afmred = (CString) waarde;
	lees_waarde();
	m_afmdat = (CString) waarde;
	lees_waarde();
	m_agdred = (CString) waarde;
	lees_waarde();
	m_agddate = (CString) waarde;
	lees_waarde();
	m_traject = (CString) waarde;
}

CConv::schr_ikand()
{
	m_setikand.AddNew();
	m_setikand.m_id      = m_id;
	m_setikand.m_projnr  = m_projnr;
	m_setikand.m_kndsta  = m_kndsta;
	m_setikand.m_match   = m_match;
	m_setikand.m_gebdat  = m_gebdat;
	m_setikand.m_sexe    = m_sexe;
	m_setikand.m_hdvbtyp = m_hdvbtyp;
	m_setikand.m_hsalsch = m_hsalsch;
	m_setikand.m_hfaccod = m_hfaccod;
	m_setikand.m_hfunomv = m_hfunomv;
	m_setikand.m_wpobp   = m_wpobp;
	m_setikand.m_anmdat  = m_anmdat;
	m_setikand.m_anmred  = m_anmred;
	m_setikand.m_advmob  = m_advmob;
	m_setikand.m_afmred  = m_afmred;
	m_setikand.m_afmdat  = m_afmdat;
	m_setikand.m_agdred  = m_agdred;
	m_setikand.m_agddate = m_agddate;
	m_setikand.m_traject = m_traject;
	m_setikand.Update();
}

CConv::corresp()
{
    char ch;

	m_setcorresp.Open();
	while (!m_setcorresp.IsBOF())
	{
		m_setcorresp.Delete();
		m_setcorresp.MoveFirst();
	}

	in = fopen("corresp.txt", "rt");
	ch = fgetc(in);
    while (!feof(in))
    {
		lees_corresp();
		schr_corresp();
		ch = fgetc(in);
		ch = fgetc(in);
    }
	fclose(in);
	m_setcorresp.Close();
}

CConv::lees_corresp()
{
	lees_waarde();
	m_pid = (CString) waarde;
	lees_waarde();
	m_rubriek = (CString) waarde;
	lees_waarde();
	m_contsrt = (CString) waarde;
	lees_waarde();
	m_datum = (CString) waarde;
}

CConv::schr_corresp()
{
	if (m_pid.Left(1) == " " || m_pid.Left(1) == "#")
	{
		m_setcorresp.AddNew();
		m_setcorresp.m_pid     = m_pid;
		m_setcorresp.m_rubriek = m_rubriek;
		m_setcorresp.m_contsrt = m_contsrt;
		m_setcorresp.m_datum   = m_datum;
		m_setcorresp.Update();
	}
}

CConv::codes()
{
    char ch;

	m_setcodes.Open();
	while (!m_setcodes.IsBOF())
	{
		m_setcodes.Delete();
		m_setcodes.MoveFirst();
	}

	in = fopen("codes.txt", "rt");
	ch = fgetc(in);
    while (!feof(in))
    {
		lees_codes();
		schr_codes();
		ch = fgetc(in);
		ch = fgetc(in);
    }
	fclose(in);
	m_setcodes.Close();
}

CConv::lees_codes()
{
	lees_waarde();
	m_rubriek = (CString) waarde;
	lees_waarde();
	m_code = (CString) waarde;
	lees_waarde();
	m_omschrijf = (CString) waarde;
}

CConv::schr_codes()
{
	CString tekst;

	tekst = m_code;
	tekst.TrimRight();
	if (tekst != "")
	{
		m_setcodes.AddNew();
		m_setcodes.m_rubriek   = m_rubriek;
		m_setcodes.m_code      = m_code;
		m_setcodes.m_omschrijf = m_omschrijf;
		m_setcodes.Update();
	}
}

CConv::lees_waarde()
{
	char ch;
	int i;

	for (i = 0; i < 30; i++)
		waarde[i] = ' ';
	i = 0;
	while ((ch = fgetc(in)) != ';')
		waarde[i++] = ch;

	waarde[i] = '\0';
}
