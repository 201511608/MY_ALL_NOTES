// BASIC CODE STUFF
// C++ Civil Gen Code
/////////////////////////////
/////// CONTENT
// 0 :: Steel CSA_S6_14
// 1 :: Rcc   CSA_S6_14
// 2 :: WINDGust IS875_2015 Gui
// 3 ::
// 4 ::
// 5 :: 

// 0
// Steel CSA_S6_14
////////////////////////
// Books
http://globalsupport.midasuser.com/helpdesk/File/Get/8965959
https://www2.gov.bc.ca/assets/gov/driving-and-transportation/transportation-infrastructure/engineering-standards-and-guidelines/bridge/volume-1/2016/section-10.pdf
https://www2.gov.bc.ca/gov/content/transportation/transportation-infrastructure/engineering-standards-guidelines/structural/standards-procedures/volume-1

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


//
CSA-S16-01

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
				