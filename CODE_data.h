// BASIC CODE STUFF
// C++ Civil Gen Code
/////////////////////////////
/////// CONTENT
// 0 :: Steel CSA_S6_14
// 1 :: Rcc   CSA_S6_14
// 2 :: WINDGust IS875_2015 Gui
// 3 :: IS456-2000 Load Combiantion
// 4 :: IS456-2000 Beam Column
// 5 :: 



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

	// Concrete Phi dilogbox
	DgnConPhiDlg

	// GUI
	Seffix   _Dlg

	GetDesignTitleCon

> CIVIL > RCS
	
//////
//    Rcsc_BeamDesign.cpp
//    Rcsc_DataBase.cpp
//    Rcsc_Design.cpp
//    Rcsc_CodeCheck


		
> ACI318-02 (Following this Code)

> ACI318-02  <>   IS456:2000   =   Same GUI in CIVIL