; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CSelectieView
LastTemplate=CRecordset
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "overz.h"
LastPage=0

ClassCount=11
Class1=COverzApp
Class2=COverzDoc
Class3=COverzView
Class4=CMainFrame

ResourceCount=7
Resource1=IDD_ABOUTBOX
Resource2=IDD_OVERZ_FORM (English (U.S.))
Resource3=IDR_OVERZTYPE (English (U.S.))
Class5=CChildFrame
Class6=CAboutDlg
Resource4=IDD_OVERZ_FORM
Resource5=IDD_ABOUTBOX (English (U.S.))
Resource6=IDR_MAINFRAME
Class7=CSelectieView
Class8=CCodes
Class9=CCorresp
Class10=COverzselView
Class11=CIkand
Resource7=IDD_SELECTIE

[CLS:COverzApp]
Type=0
HeaderFile=overz.h
ImplementationFile=overz.cpp
Filter=N

[CLS:COverzDoc]
Type=0
HeaderFile=overzDoc.h
ImplementationFile=overzDoc.cpp
Filter=N

[CLS:COverzView]
Type=0
HeaderFile=overzView.h
ImplementationFile=overzView.cpp
Filter=D
LastObject=COverzView


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T
BaseClass=CMDIFrameWnd
VirtualFilter=fWC
LastObject=ID_SELECTIE


[CLS:CChildFrame]
Type=0
HeaderFile=ChildFrm.h
ImplementationFile=ChildFrm.cpp
Filter=M


[CLS:CAboutDlg]
Type=0
HeaderFile=overz.cpp
ImplementationFile=overz.cpp
Filter=D
LastObject=CAboutDlg

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[ACL:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_EDIT_COPY
Command2=ID_FILE_PRINT
Command3=ID_NEXT_PANE
Command4=ID_PREV_PANE
CommandCount=4

[DLG:IDD_OVERZ_FORM]
Type=1
Class=COverzView
ControlCount=1
Control1=IDC_STATIC,static,1342308352

[DLG:IDD_OVERZ_FORM (English (U.S.))]
Type=1
Class=COverzView
ControlCount=1
Control1=IDC_STATIC,static,1342308352

[TB:IDR_MAINFRAME (English (U.S.))]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_FILE_PRINT
Command8=ID_APP_ABOUT
CommandCount=8

[MNU:IDR_MAINFRAME (English (U.S.))]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_PRINT_SETUP
Command4=ID_APP_EXIT
Command5=ID_VIEW_TOOLBAR
Command6=ID_APP_ABOUT
CommandCount=6

[MNU:IDR_OVERZTYPE (English (U.S.))]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_CLOSE
Command4=ID_FILE_SAVE
Command5=ID_FILE_SAVE_AS
Command6=ID_FILE_PRINT
Command7=ID_FILE_PRINT_PREVIEW
Command8=ID_FILE_PRINT_SETUP
Command9=ID_APP_EXIT
Command10=ID_EDIT_UNDO
Command11=ID_EDIT_CUT
Command12=ID_EDIT_COPY
Command13=ID_EDIT_PASTE
Command14=ID_VIEW_TOOLBAR
Command15=ID_WINDOW_NEW
Command16=ID_WINDOW_CASCADE
Command17=ID_WINDOW_TILE_HORZ
Command18=ID_WINDOW_ARRANGE
Command19=ID_APP_ABOUT
CommandCount=19

[DLG:IDD_ABOUTBOX (English (U.S.))]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[MNU:IDR_MAINFRAME]
Type=1
Class=COverzView
Command1=ID_FILE_BESTANDTXT
Command2=ID_FILE_BESTANDCSV
Command3=ID_FILE_PRINT
Command4=ID_FILE_PRINT_PREVIEW
Command5=ID_FILE_PRINT_SETUP
Command6=ID_APP_EXIT
Command7=ID_SELECTIE_CONVERSIE
Command8=ID_SELECTIE
Command9=ID_VIEW_TOOLBAR
Command10=ID_WINDOW_NEW
Command11=ID_WINDOW_CASCADE
Command12=ID_WINDOW_TILE_HORZ
Command13=ID_WINDOW_ARRANGE
Command14=ID_APP_ABOUT
CommandCount=14

[TB:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_FILE_PRINT_DIRECT
CommandCount=1

[DLG:IDD_SELECTIE]
Type=1
Class=CSelectieView
ControlCount=68
Control1=IDC_PROJNRVAN_EDIT,edit,1350631552
Control2=IDC_PROJNRTOT_EDIT,edit,1350631552
Control3=IDC_HFACCOD_EDIT,edit,1350631552
Control4=IDC_PROJNRUITZ_EDIT,edit,1350631552
Control5=IDC_WPOBP_EDIT,edit,1350631552
Control6=IDC_GEBDATVAN_EDIT,edit,1350631552
Control7=IDC_GEBDATTOT_EDIT,edit,1350631552
Control8=IDC_TRAJECT_EDIT,edit,1350631552
Control9=IDC_SEXE_EDIT,edit,1350631552
Control10=IDC_ADVMOB_EDIT,edit,1350631552
Control11=IDC_HSALSCH_EDIT,edit,1350631552
Control12=IDC_KNDSTA_EDIT,edit,1350631552
Control13=IDC_HFUNOMV_EDIT,edit,1350631552
Control14=IDC_MATCH_EDIT,edit,1350631552
Control15=IDC_HDVBTYP_EDIT,edit,1350631552
Control16=IDC_ANMDATVAN_EDIT,edit,1350631552
Control17=IDC_ANMDATTOT_EDIT,edit,1350631552
Control18=IDC_ANMRED_EDIT,edit,1350631552
Control19=IDC_AFMDATVAN_EDIT,edit,1350631552
Control20=IDC_AFMDATTOT_EDIT,edit,1350631552
Control21=IDC_AFMRED_EDIT,edit,1350631552
Control22=IDC_AGDDATEVAN_EDIT,edit,1350631552
Control23=IDC_AGDDATETOT_EDIT,edit,1350631552
Control24=IDC_AGDRED_EDIT,edit,1350631552
Control25=IDC_DATUMVAN_EDIT,edit,1350631552
Control26=IDC_DATUMTOT_EDIT,edit,1350631552
Control27=IDC_RUBRIEK_EDIT,edit,1350631552
Control28=IDC_CONTSRT_EDIT,edit,1350631552
Control29=IDC_OVERZICHT_BUTTON,button,1342242816
Control30=IDC_STATIC,static,1342308352
Control31=IDC_STATIC,static,1342308352
Control32=IDC_STATIC,static,1342308352
Control33=IDC_STATIC,static,1342308352
Control34=IDC_STATIC,static,1342308352
Control35=IDC_STATIC,static,1342308352
Control36=IDC_STATIC,static,1342308352
Control37=IDC_STATIC,static,1342308352
Control38=IDC_STATIC,static,1342308352
Control39=IDC_STATIC,static,1342308352
Control40=IDC_STATIC,static,1342308352
Control41=IDC_STATIC,static,1342308352
Control42=IDC_STATIC,static,1342308352
Control43=IDC_STATIC,static,1342308352
Control44=IDC_STATIC,static,1342308352
Control45=IDC_STATIC,static,1342308352
Control46=IDC_STATIC,static,1342308352
Control47=IDC_STATIC,static,1342308352
Control48=IDC_STATIC,static,1342308352
Control49=IDC_STATIC,static,1342308352
Control50=IDC_STATIC,static,1342308352
Control51=IDC_STATIC,static,1342308352
Control52=IDC_STATIC,static,1342308352
Control53=IDC_STATIC,static,1342308352
Control54=IDC_STATIC,static,1342308352
Control55=IDC_STATIC,static,1342308352
Control56=IDC_STATIC,static,1342308352
Control57=IDC_STATIC,static,1342308352
Control58=IDC_STATIC,static,1342308352
Control59=IDC_STATIC,static,1342308352
Control60=IDC_AFMDATVANUITZ_EDIT,edit,1350631552
Control61=IDC_AFMDATTOTUITZ_EDIT,edit,1350631552
Control62=IDC_STATIC,static,1342308352
Control63=IDC_TRAJECTUITZ_EDIT,edit,1350631552
Control64=IDC_KNDSTAUITZ_EDIT,edit,1350631552
Control65=IDC_ANMREDUITZ_EDIT,edit,1350631552
Control66=IDC_AFMREDUITZ_EDIT,edit,1350631552
Control67=IDC_AGDREDUITZ_EDIT,edit,1350631552
Control68=IDC_STATIC,static,1342308352

[CLS:CSelectieView]
Type=0
HeaderFile=SelectieView.h
ImplementationFile=SelectieView.cpp
BaseClass=CFormView
Filter=D
LastObject=CSelectieView
VirtualFilter=VWC

[CLS:CCodes]
Type=0
HeaderFile=Codes.h
ImplementationFile=Codes.cpp
BaseClass=CRecordset
Filter=N
VirtualFilter=r

[DB:CCodes]
DB=1
DBType=ODBC
ColumnCount=3
Column1=[rubriek], 12, 6
Column2=[code], 12, 12
Column3=[omschrijf], 12, 60

[CLS:COverzselView]
Type=0
HeaderFile=OverzselView.h
ImplementationFile=OverzselView.cpp
BaseClass=CScrollView
Filter=C
VirtualFilter=VWC
LastObject=COverzselView

[CLS:CCorresp]
Type=0
HeaderFile=Corresp.h
ImplementationFile=Corresp.cpp
BaseClass=CRecordset
Filter=N
VirtualFilter=r
LastObject=CCorresp

[DB:CCorresp]
DB=1
DBType=ODBC
ColumnCount=5
Column1=[pid], 12, 20
Column2=[teller], 4, 4
Column3=[rubriek], 12, 10
Column4=[contsrt], 12, 8
Column5=[datum], 12, 20

[CLS:CIkand]
Type=0
HeaderFile=Ikand.h
ImplementationFile=Ikand.cpp
BaseClass=CRecordset
Filter=N
VirtualFilter=r

[DB:CIkand]
DB=1
DBType=ODBC
ColumnCount=19
Column1=[id], 12, 20
Column2=[projnr], 12, 16
Column3=[kndsta], 12, 2
Column4=[match], 12, 2
Column5=[gebdat], 12, 20
Column6=[sexe], 12, 2
Column7=[hdvbtyp], 12, 2
Column8=[hsalsch], 12, 4
Column9=[hfaccod], 12, 12
Column10=[hfunomv], 12, 6
Column11=[wpobp], 12, 2
Column12=[anmdat], 12, 20
Column13=[anmred], 12, 4
Column14=[advmob], 12, 8
Column15=[afmred], 12, 8
Column16=[afmdat], 12, 20
Column17=[agdred], 12, 4
Column18=[agddate], 12, 20
Column19=[traject], 12, 8

