// BASIC CODE STUFF
// C++ Civil Gen Code
/////////////////////////////
/////// CONTENT
// 0-:: Basic
// 0 :: Steel CSA_S6_14
// 1 :: Rcc   CSA_S6_14
// 2 :: WINDGust IS875_2015 Gui
// 3 :: IS456-2000 Load Combiantion
// 4 :: IS456-2000 Beam Column
// 5 :: 


// Conversion
	1 kN/m2 = 1000 Pa.
	1 kN/m2 = 1   kPa.

// Books
	http://globalsupport.midasuser.com/helpdesk/File/Get/8965959
	https://www2.gov.bc.ca/assets/gov/driving-and-transportation/transportation-infrastructure/engineering-standards-and-guidelines/bridge/volume-1/2016/section-10.pdf
	https://www2.gov.bc.ca/gov/content/transportation/transportation-infrastructure/engineering-standards-guidelines/structural/standards-procedures/volume-1

 
// Basic Set Up .exe Path in Code
	Right click on your dll project
	Properties
	Configuration Properties > Debugging. Here, in Command -> add path to your exe.


// Lock
	// DBCode  // LockControle at 544 Line
	// DBCodeCtrl	

// Civil Or Gen   -> PreProcessor
#if defined(_CIVIL)
		GetDlgItem(IDC_DGN_CON_F_PHIC1)->EnableWindow(FALSE);
#else
		GetDlgItem(IDC_DGN_CON_F_PHIC1)->EnableWindow(TRUE);
#endif
 
// 0-
// Basic Of Midas Code

// CWGen60App // Gen Class
	class CWGen60App : public CAppMain	   // CWinApp   // Initialize Application

// New and Open Button IDs	
	MENUITEM "&New Project...",             ID_FILE_NEW
	MENUITEM "&Open Project...",            ID_FILE_OPEN
	
	
 
	
// 0
// Steel CSA_S6_14
////////////////////////
	
	////////////////////////////////////////////////
	//CSA-S16-01
	
	// CSA-S16-01   // Finlally check and remove all CSA-S16-01  comments
	// "CSA-S16-01"  check and all places "CSA-S6-14"
	// CSA_S16_01    check and all places CSA_S6_14_ST
	// "IS:800-2007" check and all places CSA_S6_14_ST
	CSA_S6_14_ST = 73  // DgnStruct     // ADDED
	"CSA-S6-14"
	STLCODE_CSA_S6_14  _T("CSA-S6-14")

	////
	GUI START
	DBCodeCtrl  -> Gen/Civil DropDown
	DnDataCtrl  -> on click steel design
	////


	/////////////
	///////////////////////////

	ACS_CSA_S16_01Print  -> File
	ACSCode_CSA_S16_01
	ACS_DesignManager
	ACS_1Page_Out
	ACS_Checking 
	ACS_DataBase 
	ACSPrint
	LoadCombCtrl
	DBDoc
	LoadDgnCodeCheck
	DBCodeCtrl
	DBCodeDef
	DBLib
	DgnConPhiDlg
	DgnCodeCtrl
	DgnStlPhiDlg
	WgenDoc
	DesignCategoryIGen
	MgtCmdDgn
	UMDC_STL_CodeCheck
	ODSPrint
	RCSDataBase
	UMDA_CodeCheck




	// Element Type 
	#define TRUSS_EL        1
	#define BEAM_EL         2
	#define PLSTRS_EL       3
	#define PLATE_EL        4
	#define PLSTRN_EL       6

	// Member 
	// Member type
	#define DT_MBTP_COLUMN  1
	#define DT_MBTP_BEAM    2
	#define DT_MBTP_BRACE   3
	#define DT_MBTP_WALL    4


	//
	if (strCode==_T("KCI-USD07"))             return bCivil ? KCI_USD07_CVL : KCI_USD07;

	//
	AddPanel_MODS()  // All pannel Items
	//
	DesignCategoryCivil

	//
	 if(strCodeName=="JTG D62-04" )
	 
	// 
	DBDoc
		GetDesignTitleStl
		getDesignParamNa

	/////  DATABASE
	// CACSDataBase

	CACSCode_CSA_S16_01                 // ACSCode_CSA_S6_14   // CACSCode_CSA_S6_14           // Main Calculation
		CACS_CSA_S16_01Print            // ACS_CSA_S6_14Print  // CACS_CSA_S6_14Print		   // Print
			CACSPrint     				// COMMON TO ALL  // NO Need of new account
		CACS_LRFDChecking 				// Common
			CACSChecking  				// Common
		
		
		
	m_pCSA_S6_14

	ACS_LRFDResultDlg 
	// ACI Design Options
		!bTapered	// Regular Section.
			(ShapeNo==0 || ShapeNo==3)		 // L,T.
			(ShapeNo==31) 					 // Inverted T.
			(ShapeNo==1 || ShapeNo==2) 		 // C,H.
			(ShapeNo==4)  					 // B.
			(ShapeNo==5)  					 // P.
			(ShapeNo==6)  					 // SR.
			(ShapeNo==7)  					 // SB.
			(ShapeNo==8 || ShapeNo==9 || ShapeNo==17) // 2L,2C,CL.
			(ShapeNo==44) 					 // 4L.
			(ShapeNo==10) 					 // CC.
			(ShapeNo==33) 					 // Z-Shape.
			(ShapeNo==23) 					 // CB.
			(ShapeNo==41) 					 // HT.
			(ShapeNo==42) 					 // TT.
			(ShapeNo==43) 					 // H2T.
			(ShapeNo==45) 					 // HC.

		bTapered	// Tapered Section.
			ShapeNo==23 			 // CB-Section.
			ShapeNo==33 			 // Z-Shape.
			ShapeNo==10 			 // CC-Section.
			ShapeNo==8 || ShapeNo==9 // 2L,2C-Section.
			ShapeNo==7				 // SB-Section.
			ShapeNo==6				 // SR-Section.
			ShapeNo==5				 // P-Section.
			ShapeNo==4				 // B-Section.
			ShapeNo==1 || ShapeNo==2 // C,H-Section.
			ShapeNo==0 || ShapeNo==3 // L,T-Section.

		

	//   Detail Report
	ACSPrint

	// Design Option in CSA
	(m_iType==0)	// L.
	(m_iType==1)	// C.
	(m_iType==2)	// H.
	(m_iType==3)	// T.
	(m_iType==4)	// B.
		// Flanges.
		// Web.
	(m_iType==5)	// P.
	(m_iType==6)	// SR.
	(m_iType==7)	// SB.
	(m_iType==8)	// 2L.
	(m_iType==9)	// 2C.



	Calc_CSA_EffectSect(1);	// Compression + Bending.
	Calc_CSA_EffectSect(2);	// Compression.


	//
	Check_Section()  // function

	// Compression or tension   ++ or -- force Local axis
	if(m_dFxx < 0.0)	m_dRatA = CSA_AXIAL_COM(dLambda_z);
		else							m_dRatA = CSA_AXIAL_TEN();
		

	// Section
	enum EN_ACS_SECT_SHAPE
	{
		EN_ACS_SECT_SHAPE_REG_L    =  0,
		EN_ACS_SECT_SHAPE_REG_C    =  1,
		EN_ACS_SECT_SHAPE_REG_H    =  2,
		EN_ACS_SECT_SHAPE_REG_T    =  3,
		EN_ACS_SECT_SHAPE_REG_B    =  4,
		EN_ACS_SECT_SHAPE_REG_P    =  5,
		EN_ACS_SECT_SHAPE_REG_SR   =  6,
		EN_ACS_SECT_SHAPE_REG_SB   =  7,
		EN_ACS_SECT_SHAPE_REG_2L   =  8,
		EN_ACS_SECT_SHAPE_REG_2C   =  9,
		EN_ACS_SECT_SHAPE_REG_CC   = 10,
		EN_ACS_SECT_SHAPE_REG_CL   = 17,
		EN_ACS_SECT_SHAPE_REG_GEN  = 21,
		EN_ACS_SECT_SHAPE_REG_CB   = 23,
		EN_ACS_SECT_SHAPE_REG_UDT  = 31,
		EN_ACS_SECT_SHAPE_REG_UP   = 32,
		EN_ACS_SECT_SHAPE_REG_Z    = 33,// [2015.11.27. KHD0811] Add Z-Shape (AISI-CFSD08)
		EN_ACS_SECT_SHAPE_COMA_HT  = 41,
		EN_ACS_SECT_SHAPE_COMA_2T1 = 42,
		EN_ACS_SECT_SHAPE_COMA_H2T = 43,
		EN_ACS_SECT_SHAPE_COMB_4L  = 44,// PMS:2933 star-battened 4L, by Seungjun, 20141124
		EN_ACS_SECT_SHAPE_COMA_HC1 = 45,// Pinakin IS800:2007 Plated I Section design
	};
	m_dTLMT

		CACSDataBase* pDB
		CACSDataBase*	m_pMyDB;
		
	////	
		  m_CLMT = 200.0;
		  m_TLMT = 300.0;
	//	  T_LTSR_D rData;	  
		  rData.CLMT      = m_CLMT;
		  rData.TLMT      = m_TLMT;
		  Design data control
		  
	void CACSCodeCheck::SetLtsrToAcsDB(T_ELEM_K ElemK, CACSDataBase* pDB)
			T_LTSR_D LtsrD;
			pDB->m_dCLMT	     = LtsrD.CLMT;
			pDB->m_dTLMT	     = LtsrD.TLMT;
		  

	DgnDataCtrl.cpp



	// Class definition !
	// bending + compression
	// compression 
	(m_iType==0)	// L.  // Angle
	(m_iType==1)	// C.  // Channel
	(m_iType==2)	// H.  // I section
	(m_iType==3)	// T.  // TSection
	(m_iType==4)	// B.  // Box
		// Flanges.
		// Web.
	(m_iType==5)	// P.  // Pipe
	(m_iType==6)	// SR. // Solid Round ??
	(m_iType==7)	// SB. // Solid Box   ??
	(m_iType==8)	// 2L. // Double Angle
	(m_iType==9)	// 2C. // Double Channel




	else if(iMembType==D_MBTP_BRACE)	// Brace.
	else                                // Unbraced ?
	if(m_dFxx < 0.0)  					// COMPRESION CONDITION
	else     		  					// TENSION
	(bSingleCurve ? "-. 				// Single Curvature Bending." :
	else            "-. 				// Reverse Curvature Bending.");
	if(m_dLu <= 0.0)					// Laterally supported member.
	else                				// Laterally Unsupported Member
	(pDB->m_iCantilever > 0 ? TRUE      // Cantilever Yes
	: FALSE); 							// Cantilever Not
	Is_SinglySym()                      // MonoSymmetric
	Is_DoublySym()						// Double Symmetric
	Is_MajorSym()                       // MajorAxis Symmetric
	Is_MinorSym()						// MinorAxis Symmetric

	CSA_S6_14_CSG   // Steel Composit                                     
										 
	SRC   ||   CSG	
	 
	wg_db
		PLATEgIRDERdESIGN.H  
		
		
	dM1	 = fabs(pDB->Get_EndMy1G(0));
	dM2	 = fabs(pDB->Get_EndMy2G(0));
	dM04 = pDB->Get_EndMyeG(0,0);
	dM14 = pDB->Get_EndMyeG(0,1);
	dM24 = pDB->Get_EndMyeG(0,2);
	dM34 = pDB->Get_EndMyeG(0,3);
	dM44 = pDB->Get_EndMyeG(0,4);

	// All Moment are Same Sign.
	bSingleCurve = pDB->IsSingleCurve(dM04,dM14,dM24,dM34,dM44);



	#define LT_TVSF_CMD     12211
	//////////////////////////////////////////////





// 1
// Rcc CSA_S6_14
///////////////
	mct -> Gen/Civil

	If variable is added 4 things to be considered
	->add struct	
	->Old file version compatibility
	->mct compatibility
	->not to be used in other places(except its own use)

	variable 
	m_anything global
	anything local


	CSA_S6_14_RC=180
	CSA_S6_00=154




	if(strCodeName == "CSA-A23.3-94")
		  GetDlgItem(IDC_DGN_CON_M_PHIM )->EnableWindow(TRUE);
		  
		  IDC_DGN_CON_M_PHIC
		  
	//
	IDC_DGN_CON_M_FRAME10
	IDC_DGN_CON_M_SEIS_CHECK
	//


	IDD_DGN_CON_PHI_DLG // CHI  // RUS(LONG)  // ENG

	m_mSeisChk(FALSE)


	DDX_Control(pDX, IDC_DGN_CON_M_SEIS_CHECK, m_enableSeischeck);
	DDX_Check(pDX, IDC_DGN_CON_M_SEIS_CHECK, m_mSeisChk);
	BOOL m_mSeisChk;  // CSA-S614
	CButton m_enableSeischeck;


	bNTCFlag// for column check !!!
	bSpecialSeismic // Seismic check default for both


	  else if(iStatus==6)	          rData.nClass = m_iEqCategory;
	  else if(iStatus==7)	          rData.nClass = m_iEqCategory;
	  else if(iStatus==8)	          rData.nClass = m_iEqCategory;
	  else if(iStatus==19)	          rData.nClass = m_iEqCategory;

	int iCode = m_pDB->m_iDgnCode;
	if (iCode==CSA_S6_14_RC)

	UpdateData(TRUE);

	// Update in csa s6 00   *Update fc to fcr
	// Coding
			else if(iCode == CSA_S6_00)
			{
				if(iopt == 0)
				{
					Calc_Page(1);
					fout<<"           -. Vf < 0.2*phic*fc'*bv*dv  --->  Not required shear reinforcement."<<endl;
				}
				else
				{
					Calc_Page(2);
					if(iopt == 1)	      fout<<"           -. 0.2*phic*fc'*bv*dv < Vf < Vc  --->  Required minimum shear reinforcement."<<endl;
					else								fout<<"           -. Vf > Vc  --->  Required shear reinforcement."<<endl;
					fout<<"           -.                 smax   = MIN[ smax, Av/(0.15*fc'*bv/fys) ] ="<<strSmax<<m_strLengUnit<<endl;
				}
			}
			
		

	BOOL bIsEqOK	 = (m_bEqSpecial ? TRUE : FALSE);	

	// for Design Code
	class __MY_EXT_CLASS__ CRCSC_DataBase : public CDgnForceCtrl
	iCode = m_pDB->m_iDgnCode;
	CRCSC_DataBase* m_pDB;



	rData.bSpecialSeismic      > T_DCON_D
	m_pDB->m_bEqSpecial        > CDgnForceCtrl (m_bEqSpecial)
	m_pMyDB->m_strDgnCode = DconData.DesignCode;          > class CRCSC_CodeCheck 

	AFX_EXT_CLASS -> To Make as Dll
	 

	 #define D_DGN_CONC_CODE_CSA_S6_00         19

	 
	 CSA_S6_14_RC   VS   CSA_S6_14

	////////////////////////



// 2
// WINDGust IS875_2015 Gui
//////////////////////////////

	CSA-S6-14 STEEL and RCC Code Newly added in Civil


	Adding
	// Page
	IDD_ETC_WIND_ITEM_IS875_2016
		> m_aCtrlGustFactor

	IDC_CMD_CATEGORY_TITLE
		IDC_CMD_GUSTF_TITLE
		IDC_CMD_FCOEF_EDIT   m_editGustFactor
		

	DDX_Control(pDX, IDC_CMD_BCLASS_COMBO, m_cobxBuildingClass); -> ComboBox

	// Radio
	IDC_CMD_GUSTF_RD2 // Gust Factor !

	// Enable Disable in Civil 
	CDlgUtil::CtrlEnableDisable(this,IDC_CMD_GUSTF_RD2,TRUE); // Just will not allow to do any thing
									TRUE {enables us to do stuff}
	// 
	CDlgUtil::CtrlShowHide(this, m_aCtrlGustFactor, nMethod == 1); // nMethod show or hide

	Id.ShowWindow(SW_HIDE);
	pWnd->ShowWindow(SW_HIDE);
	pParent->GetDlgItem(aCtrlID[i]);

	// Direct Show Hide by ID
	this->GetDlgItem(IDC_CMD_GUSTF_TITLE)->ShowWindow(SW_HIDE);


	this->GetDlgItem(IDC_CMD_ANAL_FCOEF_TITLE2)->ShowWindow(SW_HIDE);
	this->GetDlgItem(IDC_CMD_WINDDIRFACT_KD_EDIT2)->ShowWindow(SW_HIDE);
	this->GetDlgItem(IDC_CMD_ANAL_COMBFACT_TITLE3)->ShowWindow(SW_HIDE);
	this->GetDlgItem(IDC_CMD_COMBFACT_Kc_EDIT3)->ShowWindow(SW_HIDE);

	-------------
	IDD_ETC_WIND_ITEM_NEW   // Main Wind Window
		CWindAddLoadKBC2015Dlg      // Class that call box
			IDD_ETC_WIND_SITEM_KBC2015  // Box
				IDC_CMD_STORY_BTN    // ButtonUnder it


	IDD_CMD_WINDPF        //WindLoad Profile
		IDC_WINDPF_TABLE  //WindDiff

	// TABLE	
	CGXGridWnd m_WindPfGrid;

	//
	IDC_CMD_ANAL_GUST_BUTTON
	IDD_ETC_WIND_GUST_KBC2009_DLG  // RT NOW WORKING
	IDD_ETC_WIND_GUST_IS875_2015_DLG

	// Show Window
			?? Just Initiate Class
	CWindSeisAddLoadDlg dlg;
		dlg.SetMode((void*)this, nullptr, nullptr);
		dlg.DoModal();	
		

	// Optimal Design 
			// Constant Algrithem
				//ID
				IDD_ODS_MAIN_CONTROL
					
				
			IDD_ODS_MAIN_CONTROL_DLG DIALOGEX DISCARDABLE  0, 0, 425, 299
			STYLE DS_SETFONT  | DS_MODALFRAME | WS_MINIMIZEBOX | WS_POPUP | WS_CAPTION | WS_SYSMENU
			CAPTION "Optimal Design of Steel Section"
			FONT 9, "±¼¸²"
			BEGIN
				CONTROL         "Custom1",IDC_ODS_ORIGIN_SECT_VIEW,"GXWND",WS_BORDER | 
								WS_VSCROLL | WS_HSCROLL | WS_TABSTOP,7,22,411,190
				PUSHBUTTON      "Analysis Option",IDC_ODS_ANAL_OPTION_BTN,7,240,120,16
				PUSHBUTTON      "Design && Analysis",IDC_ODS_AUTO_ANAL_BTN,288,240,130,
								34
				PUSHBUTTON      "Close",IDC_ODS_MAIN_DLG_CLOSE,359,276,59,16
				LTEXT           "Unit :",IDC_WG_ODS_STATIC0,359,7,18,8
				LTEXT           "kgf",IDC_ODS_FORCE_STATIC,380,7,12,8,NOT WS_GROUP
				LTEXT           "mm",IDC_ODS_LENGTH_STATIC,406,7,12,8,NOT WS_GROUP
				LTEXT           ",",IDC_WG_ODS_STATIC1,395,7,8,8,NOT WS_GROUP
				PUSHBUTTON      "User-Defined Section DB",IDC_ODS_USER_DEF_SECT_BTN,129,
								258,120,16
				PUSHBUTTON      "Select All",IDC_ODS_ORIGIN_SEL_ALL_BTN,7,216,59,16
				PUSHBUTTON      "Unselect All",IDC_ODS_ORIGIN_UNSEL_ALL_BTN,68,216,59,16
				PUSHBUTTON      "Plate Thickness Data",IDC_ODS_PLATE_THK_BTN,129,240,120,
								16
				PUSHBUTTON      "Column Design",IDC_ODS_BUILT_COL_OPTION_BTN,7,258,120,
								16
				LTEXT           "CODE",IDC_CODENAME_STATIC,7,7,82,8
			END
			
	IDC_CMD_CYCLOCLASS_COMBO2  // Drop down
	IDC_CMD_IMPFACT_K4_EDIT   // "EditBox 

	// Edit Text Box Set
	IDC_CMD_BCLASS_COMBO





// 3
// LoadCombination
//////////////////////////////////////////////////////////////
// LoadCombination 
// Civil
 else if (m_nDesignType == 1) nType = CLoadDgnCodeChecker::eLCBConcrete;
 m_nDesignType=1 // For Concrete
 
 // Gen 
 else if(m_nLcomType == D_LCOMTYPE_CONCRETE) m_nDesignType = EN_CONCRETE;
	m_nLcomType=3,m_nDesignType=1 // For Concrete
// DBCodeCtrl.Cpp
	GetConLcomNameList_GEN() // function
	GetConLcomNameList_CVL() // 

		LoadCombCtrl
   

   
////////////////////////////////////////////////////////
/////////
//////


// Gen
	// Load Combination
		CmdAutoLoadCombDlg.cpp
			OnCodeSelchange()           // OnChangeCode  
	
	 // GenLcomDialog
	 CmdAutoLoadCombDlg.h
			 IDD_CMD_LCOMBDEFAULT_DLG
			      IDC_CMD_LOADCOMB_CODE // Design Code	
		
// Civil
	// Load Combination
		CmdAutoLoadCombSelCvlDlg.cpp
			OnSelchangeLoadcombCode()   // OnChangeCode
						Index 32; strCodeName IS456:2000;
			

\src\wg_cmd\CmdAutoLoadCombCvlKSCEUSD10Dlg.h
			IDD_CMD_LCOMBDEFAULT_KSCE_USD_10_DLG	/// A gui Module attach in Lcom
			
		
		
IDC_CMD_SCALEUP_LIST

CmdAutoLoadCombCvlDlg.h  // All Gui Modifications
	CmdAutoLoadCombCvlDlg.cpp
LoadCombCtrl.h 
	LoadCombCtrl.cpp  // All Load Combination Calcualtions !
	LoadCombCtrl_Civil.cpp
	LoadCombCtrl_Civil2.cpp

	
// Common Codes
// Gen and Civil
ACI318-02
KCI-USD99
KCI-USD12
    
	T_LCOM_D rData;
	rData.Initialize();
	LoadCaseNo=0; 
	for(int	i=0; i<iDCount;	i++)	Set_StaticCase(arDLoad.GetAt(i), dDFactor, LoadCaseNo, rData);
	
Set_LoadComb(i,inputData, bSameLcom);   // Set LoadCdPSSombination Max


cEL.m_arLd.RemoveAll();
cEL.m_arLd.Add(StldK) ;

//
//// SET_LCOM();
	arLcase
	adFactor

      else if(strCode=="IS456:2000"/*""*/  )  MakeRCComb_IS456_2000   (&cDL,&cLL,&cLR,&cWL,&cEL,&cSL,&cRL,&cIP,&cTL,&cSH,&cCR,&cWP,&cEP,&cFP,&cPS,&cESP,                    &cCSD,&cCSL, &cCSC,&cCSS);
      else if(strCode=="ACI318-02" /*""*/   )  MakeRCComb_ACI318_02   (&cDL,&cLL,&cLR,&cWL,&cEL,&cSL,&cRL,&cIP,&cTL,&cSH,&cCR,&cWP,&cEP,&cFP,&cPS,&cESP, &cTP , &cTS, &cSUM,&cCSD,&cCSL, &cCSC,&cCSS);


	CombBase cDL;  cDL.Set_Type("DL"); // Dead.
	CombBase cLL;  cLL.Set_Type("LL"); // Live.
	CombBase cLR;  cLR.Set_Type("LR"); // Roof Live.
	CombBase cWL;  cWL.Set_Type("WL"); // Wind.	
	CombBase cEL;  cEL.Set_Type("EL"); // Earthquake.
	CombBase cSL;  cSL.Set_Type("SL"); // Snow.
	CombBase cRL;  cRL.Set_Type("RL"); // Rain.
	CombBase cIP;  cIP.Set_Type("IP"); // Ice Pressure.
	CombBase cFP;  cFP.Set_Type("FP"); // Fluid Pressure.   
	CombBase cTL;  cTL.Set_Type("TL"); // Temperature.   
	CombBase cEP;  cEP.Set_Type("EP"); // Earth Pressure.   
	CombBase cWP;  cWP.Set_Type("WP"); // Ground water pressrue    
	CombBase cSH;  cSH.Set_Type("SH"); // Shrinkage.  
	CombBase cCR;  cCR.Set_Type("CR"); // Creep.
	
  CombBase cSF;  cSF.Set_Type("SF"); // .
	CombBase cESP; cESP.Set_Type("ESP");   // Reonse specturum LCom from gui ! MAK Commente
	CombBase cPS;	 cPS.Set_Type("PS");		// Prestress in RC, 2002.7.30 Hong,jiseon
	
	CombBase cEVT; cEVT.Set_Type("EVT");	// Vertical Earthquake, Hong,js 02/10/21
	CombBase cESV; cESV.Set_Type("ESV");	// Earthquake Spectrum Vertical, Hong,js 02/10/21
	CombBase cLI;  cLI.Set_Type("LI");		// Live Load i for Chinese code.
	CombBase cLJ;  cLJ.Set_Type("LJ");		// Live Load j for Chinese code.
	// Add by ZINU.('02.12.18).	For Pre-stressed.
	CombBase cTP;  cTP.Set_Type("TP");		// Tendon Primary.
	CombBase cTS;  cTS.Set_Type("TS");		// Tendon Secondary.
	CombBase cSUM; cSUM.Set_Type("SUM");	// Summation.
	// Add by HJS.('03.06.25).	For Construction Dead, Live, Creep, Shrinkage
	CombBase cCSD;  cCSD.Set_Type("cDL");	// Conctruction Dead Load
	CombBase cCSL;  cCSL.Set_Type("cLL");	// Conctruction Live Load
	CombBase cCSC;  cCSC.Set_Type("cCR");	// Conctruction Creep
	CombBase cCSS;  cCSS.Set_Type("cSH");	// Conctruction Shrinkage
  // Coded by Seungjun ('20070716) MNet:No.2864.
  CombBase cIL;   cIL.Set_Type("IL");	// impact load
  CombBase cCO;   cCO.Set_Type("CO"); // collision load(Ãæµ¹ÇÏÁß)
  // Coded by Seungjun ('20071010) MNet:No.3020.
  // Coded by Seungjun ('20070430) MNet:No.2778.
  //CombBase cCN;   cCN.Set_Type("CN");    // Crane Load for China, Crane(CN).
  CombBase cCN1;  cCN1.Set_Type("CN1");    // Crane Load for China, Crane(CN).
  CombBase cCN2;  cCN2.Set_Type("CN2");    // Crane Load for China, Crane+Brk(CN).
  // Coded by Seungjun ('20070827) MNet:No.2778.
  CombBase cBRK; cBRK.Set_Type("BRK");  // braking load(Á¦µ¿ÇÏÁß)
  // Coded by Seungjun ('20071210) MNet:No.3087.
  CombBase cEPH; cEPH.Set_Type("EH");  // horizontal earth pressure load
  CombBase cEPV; cEPV.Set_Type("EV");  // vertical earth pressure load
  // MNET:3774-Seungjun-20081029
  CombBase cER; cER.Set_Type("ER");  // Erection Load
  // Add by GAY. PMS:4267. ('11.10.14).
  CombBase cEX; cEX.Set_Type("EX");  // Explosion Load. (Æø¹ßÇÏÁß)
////


/////////
// IS 456 LOAD COMBINATIONS
	    Set_LCB(nA, "1.5(DL + (LL+LR)) + PS",								1.5,cDL,1.5,cCSD,			 1.5,cLL,1.5,cCSL,		1.5,cLR,			 1.0,cPS						);
		Set_LCB(nA, "1.2(DL + (LL+LR) + WL) + PS",					1.2,cDL,1.2,cCSD,			 1.2,cLL,1.2,cCSL,		1.2,cLR,			 1.2,cWL,  1.0,cPS	);
		Set_LCB(nA, "1.2(DL + (LL+LR) - WL) + PS",					1.2,cDL,1.2,cCSD,			 1.2,cLL,1.2,cCSL,		1.2,cLR,			-1.2,cWL,  1.0,cPS	);
		Set_LCB(nA, "1.5(DL + WL) + PS",										1.5,cDL,1.5,cCSD,																					 1.5,cWL,  1.0,cPS	);
		Set_LCB(nA, "1.5(DL - WL) + PS",										1.5,cDL,1.5,cCSD,			 																		-1.5,cWL,  1.0,cPS	);
		Set_LCB(nA, "0.9DL + 1.5WL + PS",										0.9,cDL,0.9,cCSD,			 																		 1.5,cWL,  1.0,cPS	);
//		Set_LCB(nA, "0.9DL - 1.5WL + PS",		
//								0.9,cDL,0.9,cCSD,			 																		-1.5,cWL,  1.0,cPS	);
										  m_strLCNameX = DataToStr(1, LcoeBase);
										  m_strLCNameY = DataToStr(2, LcoeBase);

		Set_LCB(nA, "1.2(DL + (LL+LR) + EL) + PS",					1.2,cDL,1.2,cCSD,			 1.2,cLL,1.2,cCSL,		1.2,cLR,			 1.2,cEL,  1.0,cPS	);
		Set_LCB(nA, "1.2(DL + (LL+LR) - EL) + PS",					1.2,cDL,1.2,cCSD,			 1.2,cLL,1.2,cCSL,		1.2,cLR,			-1.2,cEL,  1.0,cPS	);
		Set_LCB(nA, "1.5(DL + EL) + PS",										1.5,cDL,1.5,cCSD,																					 1.5,cEL,  1.0,cPS	);
		Set_LCB(nA, "1.5(DL - EL) + PS",										1.5,cDL,1.5,cCSD,			 																		-1.5,cEL,  1.0,cPS	);
		Set_LCB(nA, "0.9DL + 1.5EL + PS",										0.9,cDL,0.9,cCSD,			 																		 1.5,cEL,  1.0,cPS	);
		Set_LCB(nA, "0.9DL - 1.5EL + PS",										0.9,cDL,0.9,cCSD,			 																		-1.5,cEL,  1.0,cPS	);
//
		Set_LCB(nA, "1.2(DL + (LL+LR) + (SUF)ESP) + PS",		1.2,cDL,1.2,cCSD,			 1.2,cLL,1.2,cCSL,		1.2,cLR,			 1.2,cESP,  1.0,cPS	);
		Set_LCB(nA, "1.2(DL + (LL+LR) - (SUF)ESP) + PS",		1.2,cDL,1.2,cCSD,			 1.2,cLL,1.2,cCSL,		1.2,cLR,			-1.2,cESP,  1.0,cPS	);
		Set_LCB(nA, "1.5(DL + (SUF)ESP) + PS",							1.5,cDL,1.5,cCSD,																					 1.5,cESP,  1.0,cPS	);
		Set_LCB(nA, "1.5(DL - (SUF)ESP) + PS",							1.5,cDL,1.5,cCSD,			 																		-1.5,cESP,  1.0,cPS	);
		Set_LCB(nA, "0.9DL + 1.5(SUF)ESP + PS",							0.9,cDL,0.9,cCSD,			 																		 1.5,cESP,  1.0,cPS	);
		Set_LCB(nA, "0.9DL - 1.5(SUF)ESP + PS",							0.9,cDL,0.9,cCSD,			 																		-1.5,cESP,  1.0,cPS	);

    // PMS:4108-Seungjun-20091217 SERVICEABILITY Loadcombination.
    // For SERVICEABILITY
    // 1.0(D+L)
//    Set_LCB(nA+1, "DL + (LL+LR) + PS",						      1.0,cDL,1.0,cCSD,			 1.0, cLL,1.0, cCSL, 1.0,cLR,									 1.0,cPS);
    // 1.0(D¡¾W)
    Set_LCB(nA+1, "DL + WL + PS",     									1.0,cDL,1.0,cCSD,		                                 		   1.0,cWL,  1.0,cPS);
		Set_LCB(nA+1, "DL - WL + PS",			      						1.0,cDL,1.0,cCSD,	                                        -1.0,cWL,  1.0,cPS);
    // 1.0D+0.8L¡¾0.8W
    Set_LCB(nA+1, "DL + 0.8(LL+LR) + 0.8WL + PS",				1.0,cDL,1.0,cCSD,			 0.8, cLL,0.8, cCSL, 0.8,cLR,		 		 0.8,cWL,	 1.0,cPS);
		Set_LCB(nA+1, "DL + 0.8(LL+LR) - 0.8WL + PS",				1.0,cDL,1.0,cCSD,			 0.8, cLL,0.8, cCSL, 0.8,cLR,	      -0.8,cWL,  1.0,cPS);
    // 1.0(D¡¾E)
    Set_LCB(nA+1, "DL + EL + PS",					      				1.0,cDL,1.0,cCSD,	                                  		 	 1.0,cEL,  1.0,cPS);
		Set_LCB(nA+1, "DL - EL + PS",								      	1.0,cDL,1.0,cCSD,	                                        -1.0,cEL,  1.0,cPS);
    // 1.0D+0.8L¡¾0.8E
    Set_LCB(nA+1, "DL + 0.8(LL+LR) + 0.8EL + PS",				1.0,cDL,1.0,cCSD,			 0.8, cLL,0.8, cCSL, 0.8,cLR,	 		   0.8,cEL,	 1.0,cPS);
		Set_LCB(nA+1, "DL + 0.8(LL+LR) - 0.8EL + PS",				1.0,cDL,1.0,cCSD,			 0.8, cLL,0.8, cCSL, 0.8,cLR,	      -0.8,cEL,  1.0,cPS);
    // 1.0(D¡¾ESP)
    Set_LCB(nA+1, "DL + (SUF)ESP + PS",					      	1.0,cDL,1.0,cCSD,	                                  		 	 1.0,cESP, 1.0,cPS);
		Set_LCB(nA+1, "DL - (SUF)ESP + PS",								  1.0,cDL,1.0,cCSD,	                                        -1.0,cESP, 1.0,cPS);
    // 1.0D+0.8L¡¾0.8ESP
    Set_LCB(nA+1, "DL + 0.8(LL+LR) + 0.8(SUF)ESP + PS",	1.0,cDL,1.0,cCSD,			 0.8, cLL,0.8, cCSL, 0.8,cLR,	 		   0.8,cESP, 1.0,cPS);
		Set_LCB(nA+1, "DL + 0.8(LL+LR) - 0.8(SUF)ESP + PS",	1.0,cDL,1.0,cCSD,			 0.8, cLL,0.8, cCSL, 0.8,cLR,	      -0.8,cESP, 1.0,cPS);  





else if(strCode=="IS456:2000")
	{
		if (m_nEspCount>0)
		{
			SetCvlIRC6_Seis_Incl_Therm(arDLoad, arDdLoad, arDwLoad,arEpLoad, arEsLoad, arElLoad,arEvLoad,
				arCrLoad, arShLoad, arLeadingMLoad, arLsLoad, arLLoad, arLpLoad, arIlLoad,arErLoad,
				arIlpLoad, arCfLoad, arBrkLoad, arBkLoad, arCrlLoad, arPsLoad, arWLoad, arWlLoad, arSmLoad,
				arCSLoad,arRsLoad,arEspLoad_x,arEspLoad_y,arEspLoad_z,arMLoad, arThermal,arWprLoad,arBLoad,arWpLoad,arPsi1FactorMLoad1, arPsi1FactorMLoad2);
			SetCvlIRC6_Seis_No_Wind(arDLoad, arDdLoad, arDwLoad,arEpLoad, arEsLoad, arElLoad,arEvLoad,
				arCrLoad, arShLoad, arLeadingMLoad, arLsLoad, arLLoad, arLpLoad, arIlLoad,arErLoad,
				arIlpLoad, arCfLoad, arBrkLoad, arBkLoad, arCrlLoad, arPsLoad, arWLoad, arWlLoad, arSmLoad,
				arCSLoad,arRsLoad,arEspLoad_x,arEspLoad_y,arEspLoad_z,arMLoad,arWprLoad,arBLoad,arWpLoad, arPsi1FactorMLoad1, arPsi1FactorMLoad2);
		}
	}

	









//
////

The design load combinations are the various combinations of the prescribed
load cases for which the structure needs to be checked. For the ACI 318-99
code, if a structure is subjected to dead load (DL) and live load (LL) only, the
stress check may need only one load combination, namely 1.4 DL + 1.7 LL
(ACI 9.2.1). However, in addition to the dead and live loads, if the structure is
subjected to wind (WL) and earthquake (EL) loads and considering that wind
and earthquake forces are reversible, the following load combinations should
be considered (ACI 9.2).
1.4 DL
1.4 DL + 1.7 LL 						(ACI 9.2.1)
0.9 DL ± 1.3 WL
0.75 (1.4 DL + 1.7 LL ± 1.7 WL) 		(ACI 9.2.2)
0.9 DL ± 1.3 * 1.1 EL
0.75 (1.4 DL + 1.7 LL ± 1.7 * 1.1 EL) 	(ACI 9.2.3)



///////////////////////
//////////////////////////////////////
///////////////////////////////////////////////////////////////		
		
#define D_MOVE_CODE_NONE             0
#define D_MOVE_CODE_AASHTO_STAN      1
#define D_MOVE_CODE_AASHTO_LRFD      2
#define D_MOVE_CODE_CHINA            3
#define D_MOVE_CODE_TAIWAN           4
#define D_MOVE_CODE_JAPAN            5
#define D_MOVE_CODE_KOREA            6
#define D_MOVE_CODE_INDIA            7
#define D_MOVE_CODE_CANADA           8
#define D_MOVE_CODE_PENDOT           9
#define D_MOVE_CODE_BS               10
#define D_MOVE_CODE_EURO_BS          11
#define D_MOVE_CODE_RUSSIA           12
#define D_MOVE_CODE_KOREA_LRFD_2011  13
#define D_MOVE_CODE_AUSTRALIA        14
#define D_MOVE_CODE_POLAND           15
#define D_MOVE_CODE_SOUTH_AFRICA     16




CRCS_BeamDesignResultDlg *pBeamDesignDlg = NULL;
#if defined(_CIVIL)
  pBeamDgnDlg = (CRCSC_BeamDgnResDlg*)RCSCreateOrActivateDlg((CDBDoc*)this,CRCSC_BeamDgnResDlg::IDD);
#else
  pBeamDesignDlg = (CRCS_BeamDesignResultDlg*)RCSCreateOrActivateDlg((CDBDoc*)this,CRCS_BeamDesignResultDlg::IDD);
#endif

			

  else if (PscdD.iDgnCode== TB_10002_3_05) {
         if(iSequence== 1)	csWindowTitle = _LS(IDS_MAIN_RESULTVIEW_TB_BEAM_PSC             );
    else if(iSequence== 2)	csWindowTitle = _LS(IDS_MAIN_RESULTVIEW_TB_BEAM_CROSS_BEND      );
    else if(iSequence== 3)	csWindowTitle = _LS(IDS_MAIN_RESULTVIEW_TB_BEAM_INClINE_SHEAR   );
    else if(iSequence== 4)	csWindowTitle = _LS(IDS_MAIN_RESULTVIEW_TB_BEAM_CROSS_FRACTURE  );
    else if(iSequence== 5)	csWindowTitle = _LS(IDS_MAIN_RESULTVIEW_TB_BEAM_INClINE_FRACTURE);
    else if(iSequence== 6)	csWindowTitle = _LS(IDS_MAIN_RESULTVIEW_TB_BEAM_INClINE_Tp      );
    else if(iSequence== 7)	csWindowTitle = _LS(IDS_MAIN_RESULTVIEW_TB_BEAM_CON_C_SS        );		
    else if(iSequence== 8)	csWindowTitle = _LS(IDS_MAIN_RESULTVIEW_TB_BEAM_CON_T_SS        );
    else if(iSequence== 9)	csWindowTitle = _LS(IDS_MAIN_RESULTVIEW_TB_BEAM_TENDON_SS       );
    else if(iSequence==10)	csWindowTitle = _LS(IDS_MAIN_RESULTVIEW_TB_BEAM_DElTA_TENDON    );
    else if(iSequence==11)	csWindowTitle = _LS(IDS_MAIN_RESULTVIEW_TB_BEAM_SHEAR           );
    else if(iSequence==12)	csWindowTitle = _LS(IDS_MAIN_RESULTVIEW_TB_BEAM_CRACk           );
    else if(iSequence==13)	csWindowTitle = _LS(IDS_MAIN_RESULTVIEW_TB_BEAM_TENDON_CS       );
    else if(iSequence==14)	csWindowTitle = _LS(IDS_MAIN_RESULTVIEW_TB_BEAM_CON_CS          );

    else if(iSequence==21)	csWindowTitle = _LS(IDS_MAIN_RESULTVIEW_TB_COLUMN_PSC           );
    else if(iSequence==22)	csWindowTitle = _LS(IDS_MAIN_RESULTVIEW_TB_COLUMN_COMPRESSIVE   );
    else if(iSequence==23)	csWindowTitle = _LS(IDS_MAIN_RESULTVIEW_TB_COLUMN_TENSION       );
    else if(iSequence==24)	csWindowTitle = _LS(IDS_MAIN_RESULTVIEW_TB_COLUMN_CROSS_FRACTURE);
    else if(iSequence==25)	csWindowTitle = _LS(IDS_MAIN_RESULTVIEW_TB_COLUMN_CON_C_SS      );
    else if(iSequence==26)	csWindowTitle = _LS(IDS_MAIN_RESULTVIEW_TB_COLUMN_CON_T_SS      );
    else if(iSequence==27)	csWindowTitle = _LS(IDS_MAIN_RESULTVIEW_TB_COLUMN_TENDON_SS     );
    else if(iSequence==28)	csWindowTitle = _LS(IDS_MAIN_RESULTVIEW_TB_COLUMN_SHEAR         );
    else if(iSequence==29)	csWindowTitle = _LS(IDS_MAIN_RESULTVIEW_TB_COLUMN_TENDON_CS     );
    else if(iSequence==30)	csWindowTitle = _LS(IDS_MAIN_RESULTVIEW_TB_COLUMN_CON_CS        );
    else	ASSERT(0);	

	
	
	LoadCombCtrl.m_dCSAWP[1] = m_pCSA->m_dCSAWPMin;
	LoadCombCtrl.m_dCSAPS[0] = m_pCSA->m_dCSAPSMax;
	LoadCombCtrl.m_dCSAPS[1] = m_pCSA->m_dCSAPSMin;

	LoadCombCtrl.m_aStldEp1.Copy(m_pCSA->m_aStldEp1);  // 	CArray<T_STLD_K, T_STLD_K> m_aStldEp1;   // Copy willnot take address
	LoadCombCtrl.m_aStldEp2.Copy(m_pCSA->m_aStldEp2);
	LoadCombCtrl.m_aStldEp3.Copy(m_pCSA->m_aStldEp3);
	
	    CLoadCombCtrl LoadCombCtrl; // Gen
		CLoadCombCtrl LoadCombCtrl; // Civil
		
		
BOOL bOrthogonal = (m_nOrthoType==0 ? TRUE : FALSE); (m_nOrthoType=1)

GetDlgItem(IDC_CMD_DESIGN_OTHOLC_SET_BTN)->EnableWindow(m_wndOthoChk.GetCheck()?TRUE:FALSE);


#define ArINT		CArray<int,int>
ArINT m_arLd;
ArUNT m_arLdu;


#define T_STLD_K unsigned int
CArray<T_STLD_K, T_STLD_K> arEccKeyList;

Make_LCB_Makelcb_ESP(LoadCaseNo, LoadCaseNo2, strReport, fac, cLoad, arMakeData); // ESP Response Spectrum Load Cases


int iCount = cLoad.m_arLdu.GetSize();
	for(int j=0; j<iCount;j++){{}
	
	
	CArray<CombBase,CombBase> arLcase;  == arLoadcase
	 CombBase cLoad;
		  cLoad = arLoadcase.GetAt(i);
	 CombBase& cLoad
	 CString strLcName =	Get_SpectrumLoadCaseName(cLoad.m_arLdu.GetAt(j));
	 
	 
	 CString strLcName =	Get_SpectrumLoadCaseName(cLoad.m_arLdu.GetAt(j));
	 if(cLoad.Get_Type()=="ESP") Get_RealLcaseName("ESP", strLcName, strTemp);
	  Get_RealLcaseName("ESP", strLcName, strTemp);
	 
	 
	 	CString   strPSorTS = bStageCS ? _T("TS") : _T("PS");
		strDesc.Format("0.9(DL+EV) + 1.0EL + 1.0EH + (SFAC)%s", strPSorTS); 
		

		
	
// 4
//IS456:2000 Beam Column Design
/////////////////////////////////////////////////////////////////////////
// // Common Codes
// Gen and Civil
ACI318-02
KCI-USD99
KCI-USD12		
	


// Topics
// IS456-2000
	-> Beam Design			11
	-> Beam Check
	-> Column Design 	 	11
	-> Column Check
	-> Load Combination		3


	// WorkDetails	
		GUI-2//
		DESIGN CODE-2/3//
		CHECK CODE-1//
		Report-2
		ResultsDlg-2
		Mct, Mcb-1
		
		

//
// GUI
	D:\SVN_Base\Civil\src\wg_main\MgtCmdDgn.cpp

//wGenDoc.cpp // RC desing drop down ( on click )
	// Concrete Phi dilogbox
		DgnConPhiDlg
	// Limiting maximum rebar ratio
		dgnconbarratiodlg  // file name
			IDD_DGN_CON_BARR_DLG // IDD
	// limiting minimum section size 
		CDgnConBarMinSectSizeDlg
		// ID_DGN_CON_DCON_MIN_SECT_LIMIT
		
	//
	
	T_DCON_D rData
	
	m_bTorsionDesign = FALSE;
	m_bTorsionDesign = rData.bTorsionDesign;
	rData.bTorsionDesign = m_bTorsionDesign;
	
	//CIVIL
	CRCSC_DataBase* m_pMyDB;
		rData.bTorsionDesign = m_bTorsionDesign;
	
	
	//GEN
	RCSDataBase :: DgnForceCtrl.
	BOOL   m_bApplyTorsionDesign;
	CRCSDataBase*  m_pMyDB;
		m_pMyDB->m_bApplyTorsionDesign
	// GUI
	
	DgnConCodeDlg.cpp
	BOOL	  m_bTorsionDesign;
	rData.bTorsionDesign = m_bTorsionDesign;
		T_DCON_D rData;
	IDC_DGN_RCCTRL_TORSION
	
	
	CRCSDataBase            ===   		T_DCON_D   // Excanged through RCSCodeCheck  || RCSCCodeCheck
	m_bApplyTorsionDesign	===	  		bTorsionDesign  // || m_bChkTorsionDesign
	
	m_pMyDB->m_bChkTorsionDesign =m_C
	
	oncData.bTorsionDesign;  // Civil 
	
	
RCSCodeCheck.cpp // DateGetting Excgages
  G:\Codes\Code\Engine_\Test_Civil_Gen_04_2019\src\wg_rcs\RCSCodeCheck.cpp(1317):	m_pMyDB->m_bApplyTorsionDesign = m_pMyDB->m_bChkTorsionDesign && CDBLib::IsConCodeForTorsionCheck(strCode)? TRUE : FALSE;
  G:\Codes\Code\Engine_\Test_Civil_Gen_04_2019\src\wg_rcs\RCSCodeCheck.cpp(6880):	m_pMyDB->m_bApplyTorsionDesign = m_pMyDB->m_bChkTorsionDesign && CDBLib::IsConCodeForTorsionCheck(strCode)? TRUE : FALSE;
  G:\Codes\Code\Engine_\Test_Civil_Gen_04_2019\src\wg_rcs\RCSCodeCheck.cpp(8835):	m_pMyDB->m_bApplyTorsionDesign = (m_pMyDB->m_bChkTorsionDesign && CDBLib::IsConCodeForTorsionCheck(strCode))? TRUE : FALSE; // Seungjun '151126 PMS.5165 ACI318-08, 11 º¸ ºñÆ²¸² ¼³°è Ãß°¡
  G:\Codes\Code\Engine_\Test_Civil_Gen_04_2019\src\wg_rcs\RCSDataBase.cpp(188):	m_bApplyTorsionDesign = FALSE;
	
	// Other
	m_dShearStrutAngle
	
	CRCSDataBase            ===   		T_DCON_D 
	m_pMyDB->m_dShearStrutAngle = m_ConcData.dStrutAngle;
	
	
	BOOL   m_bChkTorsionDesign;  
	  m_pMyDB->m_bChkTorsionDesign   = DconD.bTorsionDesign;code
	
	// Torsion in civil
	m_dTu
	// added	
	BOOL m_bChkTorsionDesign;
	
	
	if(m_pMyDB->b_T && (m_iCode==IS456_2000 ))
	{
	}
	
	 m_dPomax = (0.4*m_dfc)*(Get_Ag()-m_dAst) + 0.67*m_dfy*m_dAst;
	
	BOOL bSpecialSeismic;
	rData.bSpecialSeismic = m_bSpecialEQ;
	
	//
	
		
		
		
	// GUI
	Seffix   _Dlg
	GetDesignTitleCon

> CIVIL > RCS
	
//////
  
// Beam	
RCSC_CodeCheck
RCSC_DataBase.cpp

RCSC_Design.cpp
RCSC_BEAMDESIGN
RCSC_BEAMDESIGNPRINT


// Start of BeamDesign
    if(m_pMyDB->IsBeamDgn())	m_pBeam->Execute_Dgn();

// For code
int iCode = m_pDB->m_iDgnCode; 
m_pMyDB->m_iDgnCode==IS456_2000
		
		
> ACI318-02 (Following this Code)
> ACI318-02  <>   IS456:2000   =   Same GUI in CIVIL
	> ACI318-02 No ServiceLimit


// Changes to make
Limiting Maximum Rebar ratio > Brace Design      // Done
Limiting Minimum Section Size > Limits !         // Done
Serviceability Parameter > Modify Full!          // Done



	> ID = IDD_DGN_CON_SERVICE_DLG
	> DgnConServiceLimtDlg


DBDoc.cpp
	 ?>GetDesignTitleStl()
	 
if(ID==ID_DGN_STL_DALW || ID==ID_QUERY_DGN_STL_DALW)
{// ID from #define IDs Wheather Specific ID is opened}


// Main Gui 
	> // Adding Beam>Coloum>DesignParameter>All Stuff !
	DgnConDlg.cpp		
	 > Serviceparamater DIalog initialize
		>CDgnConServiceLimtDlg

// FOLLOWING EURO DONE !

// FOLLOWING Eurocode2-2:05
 >FUCTIONNAME_IS456 // FOLLOW THIS 



// gen
// Strength Reduction Factor.
	double m_dPhi[5];	
//civil
// Strength Reduction Factor.
	double m_dPhi[6];	// 0:Bending, 1:Tension, 2:Comp Spiral, 3:Comp Tie, 4:Shear.
	dGamma_m = 0 // Bending // Strength Reduction Factor.
	







//Flow of CASES
////////////////////////////////////////////////////////////////////////////////////////
// There is no limiing maximum section sizee Euroooo
int CRCSC_CodeCheck::Set_InputCode(CString strCode){}

BOOL CRCSC_CodeCheck::Set_InputDataByCode()
	else if(strCode=="ACI318-02"){iCode = ACI318-02  ; iUnitL = D_UNITSYS_LENGTH_INDEX_IN;  iUnitF = D_UNITSYS_FORCE_INDEX_LBF;}
	else if(strCode=="Eurocode2-2:05")       {iCode = Eurocode2_2_05;         iUnitL = D_UNITSYS_LENGTH_INDEX_MM;  iUnitF = D_UNITSYS_FORCE_INDEX_N  ;}
// BASIC UNITS MM N  // SUCH THAT FORMULLAS WILL BE SAME !!!
	else if(strCode=="IS456:2000")       {iCode = IS456_2000;         iUnitL = D_UNITSYS_LENGTH_INDEX_MM;  iUnitF = D_UNITSYS_FORCE_INDEX_N  ;}
	//
	 else if(m_iDgnCode==IS456_2000)      bUseCubeCode = TRUE; // wHAT FOR 
	//
		else if(m_iDgnCode==IS456_2000) dCalcEc = 5000.0*sqrt(dFc);
//
	else if (iCode	= IS456_2000)
	{
	dBeta = 0.42*2; // See IS456:2000 38.1(c) p.69.
	}
//
	else if (iCode =IS456_2000)
	{
		double dBeta		= Calc_Beta(dFc);
		double dfcd			= Get_fc_Common_LSD(0, dFc);
		double dGamma_m	= (dfcd==0.0 ? 1.0 : dFc/dfcd);		
		dAlpha = 0.36*dGamma_m / dBeta; // See IS456:2000 38.1(c) p.69.

	}
//
else if( m_pMyDB->m_iDgnCode ==IS456_2000)
	{
		// See IS456:2000 36.4.2.1 p.68.
		double dGamma_m = Get_Gammac_IS();
		dfc = dFc / dGamma_m;
		m_iPrintFc = 1;
		m_dFactFc	 = dGamma_m;
	}
	

// Design Parameters
	int iSectShp = m_pMyDB->m_iSectShp;
	double dBc	 = Get_Bc(bTop);  // bTop=TRUE : negative Moment
	double dFc   = m_pMyDB->m_dFc;
	double dFyr  = m_pMyDB->Get_ReBarStrength();
	double dfctm = Get_fctm(dFc);
	double dDeff = Get_Deff(bTop);   // Get Effective Depth.
	
		double decu = Get_ecu();
		double dBeta1  = dBeta1;
		double dEc = m_pMyDB->m_dEc; // Concrete 
		double dEs = m_pMyDB->m_dEss; // Steel
		double dStrain = dFy/(1.15*dEc+0.002);
		BOOL bTop = (Kopt==1)? TRUE : FALSE;  // Kopt==1:negativ
		double dBc	 = Get_Bc(bTop)
		
			double dFc = m_pMyDB->m_dFc;
	double dFy = m_pMyDB->m_dFyr;
	double dft = Get_ft_LSD(Kopt);
	double dfc = Get_fc_LSD(Kopt);
	double dAlpha1 = Calc_Alpha();
	double dBeta1  = Calc_Beta(dFc);  
	double dfctm   = Get_fctm(dFc);
	
	int iSect	 = m_pMyDB->m_iSectNo;
	
	double dHc = m_pMyDB->m_dD[0];
	
	double As1 = dAs1*iBarNum;
	double As2 = dAs2*iTopBarNum;
	m_dAs[0] = As1;
	m_dAs[1] = m_bDoubly ? m_dAsc : As2;
	m_ddz[1] = dHc - Get_Deff(TRUE);
	m_dAs[0] = Get_RbarAstChk(iSect, FALSE);
	m_dAs[1] = Get_RbarAstChk(iSect, TRUE);
	// iOpt : 1=Positive(Bot), 2=Negative(Top).
	m_iType   = (m_pMyDB->m_iSectShp==7) ? 1 : 2;  // rect:1  T:2  // Section Shape
	BOOL bTee = (m_iType==1 ? FALSE : TRUE);  // (m_iType==1)? SB : T 
		
	double dAst = m_dAs[0];
		//   if(bTee)	// Tee Section.
		//   {
		//     m_dAs[0] = (dAs1*iBarNum);  //(0=Tens, 1=Comp)
		//     m_dAs[1] = 0.0;
		// 
		//   }
		//   else	// Rectangle Section.
		//   {
		//     m_dAs[0] = dAs1*iBarNum;
		//     m_dAs[1] = m_dAsReq2;
			
	if(m_bPrintFlag==FALSE)	return;
	
	double m_dAs[2], m_ddz[2];	// Rebar (0=Tens, 1=Comp).
	
	dAstCur = Get_RbarAstChk(iSect, bTop);
	
 dAsMax	= 0.04*Get_Ac(); // Get_Ac()= area ;
 
 	double dAv1	 = m_pMyDB->m_pDoc->m_pMatlDB->Get_RebarArea(m_strSubBarNa);
		double dPhi	 = m_pMyDB->m_dPhi[4];	// Shear.
		
			int iCode		 = m_pMyDB->m_iDgnCode;
	int iPosiNo  = m_pMyDB->m_iPosiNo;
	int iSectShp = m_pMyDB->m_iSectShp;
 	iBarNum	= m_pMyDB->m_iBotbarNum[0] + m_pMyDB->m_iBotbarNum[1];
	dAs1		= m_pMyDB->m_pDoc->m_pMatlDB->Get_RebarArea(m_pMyDB->m_iTbarSizeNo);
		 
 
 	double dPhi_c = 0.0, dPhi_s = 0.0;
	Get_MatResistFactor(dPhi_c, dPhi_s);
	
 // Deffective wieht respective M+ive and M-ive	
	if(Kopt==1) // Positive Moment
	{	
		m_ddz[0] = Get_Deff(FALSE); //m_dHc - dBot_eff;
		m_ddz[1] = dHc - Get_Deff(TRUE);
		m_d1		 = m_ddz[0];
		
	}
	else if(Kopt==2) // For Negative Moment
	{
		m_ddz[0] = Get_Deff(TRUE);
		m_ddz[1] = dHc - Get_Deff(FALSE);
		m_d1		 = m_ddz[0];
	}
	
	
	// Moment 
		// Gen
			// TENSION REINFORCEMENT ONLY
				Print_RCB_LSD_007(ds,dM_Rd);
				Print_RCB_LSD_016
		  ds = Search_BEAM_s1_LSD(dfc,dft);
		  dM_Rd = dAlpha1*dfc*ds*m_dBc*(m_d1-ds/2.0) / dGammaRE;
			
			fout<<endl
				<<"      ( ). Compute ultimate moment of resistance."<<endl
				<<"           -. a     = beta1 * X  ="<<strds<<m_strLengUnit<<endl
				<<"           -. M_Rd  = alpha1*fcd*a*Bc*(d-a/2)  ="<<strdM_Rd<<m_strMomUnit<<endl;
				
			fout<<endl
				<<"      ( ). Check ratio of positive moment resistance."<<endl
				<<"           -. Rat_P = M/M_Rd ="<<strRat_P<<strSignP<<endl;
				
	// CIVIL
		dPhiMn = dPhi*dMn;
		m_BmPrinter.Print_RCB_BendingCapacity(0, dBeta1, dCenD, dCForce, dTForce, dPhiMn, dRatio, dPncc, dPnsc, dZbar, bTeePosive);
		
	//
	eta  ==  alpha1
	hc   ==  d
		// Forces.
	double m_dMuP, m_dMuN, m_dMuByML;
	dMu =Mu + Mt ;;
	if(m_pMyDB->IsRcsBeam())  bCalCompRebar = TRUE;
	
	//
		dRatio = (dPhiMn == 0.0 ? 0.0 : fabs(dMu) / dPhiMn); // ForceAna/RSection
		
		double dHc = m_pMyDB->m_dD[0];
		
	
// Shear
	void CRCSC_BeamDesignPrint::Print_RCB_LSD_041_1(double dVu, double dfc, double dDeff, double b, double dK, double dAsl, double dRhol, double dDRdc, 
    
	void CRCS_BeamDesign::Print_RCB_LSD_051(double dVu, double b, double dv, double dAs_bvd, double dvc)
	
	
	
	
// TORSION
		if(!bTorsion)  // Modify by GAY. MNET:3780. ('09.01.08). Don't Print Shear Header for Torsion Design.
		{
			if(m_iCode==IS456_2000)
				Print_RCB_000(9);
			else
				Print_RCB_000(7);      
		}
				
				

		// TORSION
		BOOL   m_bChkTorsionDesign;  
		m_pMyDB->m_bChkTorsionDesign   = DconD.bTorsionDesign;code

		// Gen
				pDB->m_dTu      = m_arBchk[61][iPosiNo]; 
				     m_dTu   = pDB->m_dTu;  CRCSDataBase* pDB
													double m_dTuV;  // Torsion corresponding to shear force. (for Transverse Reinforcement)
													double m_dAsvt; // (Shear+Torsion) Transverse Reinforcement.
													double m_dVuT;  // Shear force corresponding to torsion. (for Longitudinal Reinforcement)
		
		
		// cvl	
				CRCSC_DataBase* m_pDB;
				
				
		if(m_pDB->m_bChkTorsionDesign && (m_pDB->m_iDgnCode==IS456_2000 ))
		{


		}
			CString strLc4=_T(""); strLc4.Format("%4s", LcomDesign.DesignLcomNa);
			 _RCSC_BRES_SORT SortData;
			double dTu = SortData.dTu[m_iPosi];
					 
					 
		else if(iOpt==10) fout<<"    "<<m_strMarkDt<<"   ANALYZE SHEAR AND TORSION CAPACITY."<<endl;


// Gen
	// All forces Input
void CRCS_BeamDesign::Set_BeamInputDBdata(int iDgnKind, CRCSDataBase* pDB)
{
	pDB->Set_LcomDataForElem(pDB->m_iElemNo);
	if(m_iON==1 && m_iLcomType==1)	// Design -> Strength Check.(exclude serviceability check)
	{
		//////////////////////////////////////////
		m_UserSectNa = pDB->m_strUserSectNa;	// Add by ZINU.('00.4.14).
		m_iElem	= pDB->m_iElemNo;
		m_iProp	= pDB->m_iPropNo;
		m_dMp		= pDB->m_dPMu;
		m_dMm		= pDB->m_dNMu;
		m_dVu		= pDB->m_dVu;    
		m_dTuV  = pDB->m_dTuV;
		m_dTu   = pDB->m_dTu;
		m_dVuT  = pDB->m_dVuT;
	}
                                  "[[[*]]]"
								  
	// Add by GAY. MNET:3780. ('08.10.28). 
	double m_dTu;  // Design torsion.  
	double m_dTuV; // Design torsion corresponding to shear force. (for Transverse Reinforcement)
	double m_dVuT; // Design shear force corresponding to torsion. (for Longitudinal Reinforcement)
	
	
	Print_IS456_TOR_001(1, m_dTu, d_TauVe, dv_lim,dvc);
	m_dTu   = pDB->m_dTu;  CRCSDataBase* pDB
	
	
		_RCSC_BRES_SORT SortData;
	SortData.Initialize();
	SortData = m_pDB->Get_MaxBeamResByElem(m_pDB->m_iElemNo);
	
	double dMuP = SortData.dMuP[m_iPosi];
	double dMuN = SortData.dMuN[m_iPosi];
	double dVu  = SortData.dVu[m_iPosi];
	double dTu = SortData.dTu[m_iPosi];
	
	
	BOOL CDgnForceCtrl::GetForceKCI03(double& dMp, double& dMm, double& dVu)
{
	dMp = max(m_BMy[m_iPosiNo], 0.0);
	dMm = min(m_BMy[m_iPosiNo], 0.0);
	dVu = m_Fzz[m_iPosiNo];

	return TRUE;
}
   Positive Bending Moment   P-Mu =       22.93 kN-m.,  LCB =   3
   Negative Bending Moment   N-Mu =      181.03 kN-m.,  LCB =   1
   
dMp = 19283347.776778534   22927209.521764237[]  max()
dMm = 181033496.02608228[]   129712788.29029213  max() // BTOP
dVu = 88237.281267620274   68051.999270685468  max()
dTu = 0;  7495713.6810437161

												// Shear
dMp = 102567944.04388440   33694206.415239163   90809961.799109936
dMm = 14217343.224294294   0.00000000000000000  0.00000000000000000
dVu = 19088.792616990835   7068.8018386338426   19088.792616990835
dTu = 0 				   9063556.3054876104   7495713.6810437161

		m_dTu	0.00000000000000000	double
		m_dMuN	181027282.49894488	double
		m_dMuP	0.00000000000000000	double

		
		

// LoadCom Max
	// For Detail (Beam)
	int m_iLcomNoP, m_iLcomNoN; 
	int m_iPosiNoP, m_iPosiNoN; 
	// For Detail Shear
	int m_iLcomNoV, m_iPosiNoV;
	// For Detail Torsion
	int m_nLcomNoT, m_nPosiNoT;
	
// BM
if(bTop)
{
	Get_InputData(m_iLcomNoN, m_iPosiNoN);							
}
else
{
	Get_InputData(m_iLcomNoP, m_iPosiNoP);	
}
// SF	if(m_BmPrinter.m_bPrintFlag)  
	{
		Get_InputData(m_iLcomNoV, m_iPosiNoV);
	}
// Torsion
	{
		Get_InputData(m_nLcomNoT,  m_nPosiNoT);
	}
https://www.youtube.com/watch?v=RcOOMlJHRH0



//ACUTAL MOMENTS ARE STORED IN m_bMpp & m_bMnn  & m_bTuu

bReportCheck > Not Actual Check But 
Print report in text
Not to Print report in Text


RCSC_BeamDgnResDlg.cpp
// SET 
_RCSC_BRES_SORT    ::   dTu



_RCSC_BRES_SECT SectBResData;
SectBResData.Initialize();
m_pMyDB->m_arSectBResData.Lookup(iSect, SectBResData);



rcsc_dgnprint.
CRCSC_DataBase* m_pDB;
SortData = m_pDB->Get_MaxBeamResByElem(m_pDB->m_iElemNo);    <   	_RCSC_BRES_SORT SortData;   <  SortData.Initialize();

	double dMuP			= LcomBResData.PosData[i].dMuP;
			SortMaxData.dMuP[k]		= PosiMaxBotData[k].dMuP;   < 	_RCSC_BRES_SORT SortMaxData;
			SortMaxData.dMuN[k]		= PosiMaxTopData[k].dMuN;
			SortMaxData.dVu[k]		= PosiMaxVData[k].dVu;
CRCSC_BeamDesign::Reset_Variables()   ////
	
	_RCSC_BRES_SORT SortData;
	SortData.Initialize();
	SortData = m_pDB->Get_MaxBeamResByElem(m_pDB->m_iElemNo);
		double dMuP = SortData.dMuP[m_iPosi];
		double dMuN = SortData.dMuN[m_iPosi];
		double dVu  = SortData.dVu[m_iPosi];
		double dTu = SortData.dTu[m_iPosi];
	
	
		// Forces.
	double m_dPu, m_dMu, m_dVu;
	double m_dMuy, m_dMuz, m_dVuy, m_dVuz;
	
		m_pMyDB->GetMomByEqSpecial(m_pMyDB->m_iLcomType,m_dMuP,m_dMuN,m_dVu,m_nPosiMp,m_nPosiMm);


	double m_dTu;

// IS CODE FOR TORSIONBOOL CRCSC_DataBase::Is_CodeForTorsion()   >   RCSC_DataBase.cpp
{
	switch (m_iDgnCode)
	{
	case AASHTO_LC07:
	case AASHTO_LC12:
	case AASHTO_LC16:
	case SNiP_20503_84RC:
	case SP_35_13330_11RC:
	case SNiP_20503_84RC_MKS:
	case SP_35_13330_11RC_MKS:
	case IS456_2000:
		return TRUE;
	default:
		return FALSE;
	}
	return FALSE;
}


// Civil
DgnForceCtrl.cpp  // Moment in x direction is torsion
// Torsion Force 
// Add by GAY. MNET:3780. ('08.10.28). Save Maximum Torsion Moment : Maximum Value for All-Position.
	dTu = max(max(fabs(m_BMx[0]), fabs(m_BMx[1])), max(m_BMx[2], m_BMx[3]));
	dTu = max(dTu, fabs(m_BMx[4]));   // In Desing

double dTu = SortData.dTu[m_iPosi]; // In print	




// Section Shape
//Regular
#define D_SECT_SHAPE_REG_L          "L"     // Angle
#define D_SECT_SHAPE_REG_C          "C"     // Channel
#define D_SECT_SHAPE_REG_H          "H"     // H-Section
#define D_SECT_SHAPE_REG_T          "T"     // T-Section
#define D_SECT_SHAPE_REG_B          "B"     // Box
#define D_SECT_SHAPE_REG_P          "P"     // Pipe
#define D_SECT_SHAPE_REG_SB         "SB"    // Solid Rectangle
#define D_SECT_SHAPE_REG_SR         "SR"    // Solide Round
#define D_SECT_SHAPE_REG_2L         "2L"    // Double Angle
#define D_SECT_SHAPE_REG_2C         "2C"    // Double Channel
#define D_SECT_SHAPE_REG_CC         "CC"    // Cold Formed Channe



if(sData.nStype==D_SECT_TYPE_REGULAR)
{
	CString strShp = sData.SectBefore.Shape;
	if(strShp==        "L")	m_iSectShp =  0;
	else if(strShp==   "C")	m_iSectShp =  1;
	else if(strShp==   "H")	m_iSectShp =  2;
	else if(strShp==   "T")	m_iSectShp =  3;
	else if(strShp==   "B")	m_iSectShp =  4;
	else if(strShp==   "P")	m_iSectShp =  5;
	else if(strShp==  "SR")	m_iSectShp =  6;
	else if(strShp==  "SB")	m_iSectShp =  7;
	else if(strShp==  "2L")	m_iSectShp =  8;
	else if(strShp==  "2C")	m_iSectShp =  9;
	else if(strShp==  "CC")	m_iSectShp = 10;


double dv			= m_dVu/(m_dBc*m_d1);


int iSect			= m_pMyDB->m_iSectNo;
m_iType   = (m_pMyDB->m_iSectShp==7) ? 1 : 2;  // rect:1 
...........................................................
    . dAv1 == strAv1  ==  dAshearTor
 ( ). Compute required torsional transverse reinforcement. (Av1= "<<strAv1<<m_strAreaUnit<<")"<<endl
 
 double dAshearTor=max(dAvShear,(dAvmin*min(min(dSmax1,dSmax2),dsmax3)));
	dAvShear=
	
	
	// Moment
double dMu = (bTop ? m_dMuN : m_dMuP);

// Shear
m_pMyDB->Set_RbarDiaForShear(iElemNo, iPosiNo);


iElemNo
iPosiNo



C:\Windows\system32;C:\Windows;C:\Windows\System32\Wbem;C:\Windows\System32\WindowsPowerShell\v1.0\;C:\Program Files (x86)\NVIDIA Corporation\PhysX\Common;C:\Program Files\Microsoft\Web Platform Installer\;C:\Program Files (x86)\Microsoft ASP.NET\ASP.NET Web Pages\v1.0\;C:\Program Files\Microsoft SQL Server\110\Tools\Binn\;C:\Program Files\TortoiseSVN\bin;C:\Program Files (x86)\Xoreax\IncrediBuild;C:\Program Files\Microsoft SQL Server\130\Tools\Binn\;C:\Program Files (x86)\Windows Kits\8.0\Windows Performance Toolkit\;C:\Program Files\Microsoft VS Code\bin;C:\Program Files\Git\cmd;C:\Program Files\TortoiseGit\bin


Calc_Page(3); // In Page (3)



															CString strphiMn = Check_ValueForm(12, 2, dPhiMn/m_dFmot);
		fout<<"           -. M_Rd  = C*(hc-a/2) + Cs*(hc-dc)  =  "<<strphiMn<<m_strMomUnit<<endl;


	// Forces.
	double m_dMuP, m_dMuN, m_dMuByML;
			// Fatigue.
			SerPosiData.dMuByML	= m_dMuByML;
			
			

// Save Results.   >    // rcsc_database
	CMap<int,int&,_RCSC_MATL,_RCSC_MATL&>						            m_arMatlResData;
	CMap<int,int&,_RCSC_BRES_SECT,_RCSC_BRES_SECT&>	            m_arSectBResData;	// Beam.
	CMap<int,int&,_RCSC_CRES_SECT,_RCSC_CRES_SECT&>	            m_arSectCResData;	// Column.
	CMap<int,int&,_RCSC_CRES_SECT,_RCSC_CRES_SECT&>             m_arSectRResData;	// Brace.

	CMap<int,int&,_RCSC_BRES_ELEM,_RCSC_BRES_ELEM&>	            m_arElemBResData;	// Beam.
	CMap<int,int&,_RCSC_CRES_ELEM,_RCSC_CRES_ELEM&>	            m_arElemCResData;	// Column.
	CMap<int,int&,_RCSC_CRES_ELEM,_RCSC_CRES_ELEM&>	            m_arElemRResData;	// Brace.
	
_RCSC_BRES_ELEM ElemBResData;
_RCSC_BRES_LCOM LcomBResData;