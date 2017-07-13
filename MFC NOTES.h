// MFC: MICROSOFT FOUNDATION CLASS LIBRABY
// book :: Essential Concepts for Building Interactive Graphics Applications  ??
An MFC DLL is a binary file,shared library of functions that can be used simultaneously by multiple applications

//MFC Creates
Resource.h, Myname.cpp, Myname.h 

.rc file all gui things will find
resource.h All ID will be there


// MFC APPLICATION CAN ME MAKE BY 3 METHODS // Ways to create MFC
1 FORM EMPTY ADD DLL AND MAIN.CPP FILES
	-> C++ -> MFC WIZAD
2 WIZARD OF MFC AUTOMATICLLAY WILL INCLUDE EVERY THING
	-> C++ -> MT PROJECT -> SETTING PROPERTY -> MFC DLL -> PROPERTY -> NEW ITEM -> C++ ADD
3 WIN32 AND THEN ADD DLL AND .CPP
	-> C++ -> WIN32 PROJ -> MTPROJ ->  PROPERTY -> MFC DLL -> NEW ITEM -> C++ ADD   -> CWINAPP/CFrameWnd
	->Rt PROJECT -> ADD -> RESOURCE -> DIALOG
// MFC WIZAD  C++ -> MFC -> CHECK DIALOG BASED
			
			
			
Any application has two main sections: 
 Class
 Frame or Window 






// Add dialog  :: It creates file in Resource Files 
// Class :: CDialog
Rt PROJECT -> ADD -> RESOURCE
	//Properties :: Change position of dialog box location where to be x and y !
		xpos
		ypos	
CDialog();
CDialog(UINT nIDTemplate, CWnd* pParentWnd = NULL);
CDialog(LPCTSTR lpszTemplateName, CWnd* pParentWnd = NULL);

/////
class CExampleDlg : public CDialog {
public:
	enum { IDD = IDD_EXAMPLE_DLG };

	CExampleDlg(); // constructon
	~CExampleDlg(); // distructor
};

CExampleDlg::CExampleDlg():CDialog(CExampleDlg::IDD) {

}

CExampleDlg::~CExampleDlg() {

}
/////


// ICON   :: Top left corner of window -> Resource file wil find icon files
//Create our own

Rt Project -> ADD -> Resource -> Icons




// Client Edge True!
//GUI text button property -> apperance -> client -> Edge to True it creats like box

// Text
To add Variable by rt clicking to "text box" change text box ID: other than ID_STATIC

// ID: After changing ID save it to work !
// DDX: Do Data Exchange


// TEXT BOX WRITING
 m_EchoText.Format((_T("%d"), m_OkCount))  // m_EchoText defined in ADD Variable
 wdStr.Format(_T("EQ Sub(A,v,req) = \\F(Sub(V,s) Sub(b,w) S ,Sub(f,yt)) = %s%s"), FormatNum(Data.dAvReq), m_Unit.strArea); // ENGINE
 wdStr.Format(_T("EQ %s \\F(Sub(M,cr), Sub(M,SUS)) %s Sub(I,g) + "), L_PAREN, R_PAREN3);// ENGINE
 wdStr.Format(_T("EQ %s%s"), FormatNum(Deflection.dDead), m_Unit.strLength); // ENGINE
  wdStr.Format(_T("%s_max$ = 0.000431"), SYM_MU ); // ENGINE



// UpdateDat () // to show the update things in gui  //IF NOT IT WILL NOT SHOW UP DATE IN GUI
UpdateData(FALSE);




// SLIDER
// In properties Vertical or Horizontal can be set
Rt -> Add VARIABLE ->Category to Control->Variable Name to "m_VSliderBar"->Variable Type to CSliderCtrl
Click Form -> beside property click Message button -> WM_VSCROLL -> ADD         // CAUTION THIS IS FORM NOT DIRECTLY VERTILABAR

m_VSliderBar.SetRange(0,100,TRUE); // m_VSliderBar=verticla bar varibale set   // keep in oninitdialog
m_VSliderBar.SetPos(0);

int value = m_VSliderBar.GetPos();

// LECTURE .......................................................................................................
// Upper class work first then below class in MFC
// RESOURCE.h  WILL FIND ALL IDS   !!!


//  APPLICATION   from  CWinApp   ::    //To create an APPLICATION we need to derive a class from the MFC's CWINAPP
class CExample : public CWinApp 
{ 
 BOOL InitInstance() 
 { 
  return TRUE; 
 } 
};

// FRAME/WINDOW                 		//  Need a FRAME/WINDOW to show the content MFC's CFRAMEWND .
class CMyFrame : public CFrameWnd 
{ 
public: 
 CMyFrame() 
 { 
  Create(NULL, _T("MFC Application Tutorial")); 
 } 
}; 



// TOTAL PROGRAM EXAMPLE
#include <afxwin.h> 
 
class CMyFrame : public CFrameWnd 
{ 
public: 
 CMyFrame() 
 { 
  Create(NULL, _T("MFC Application Tutorial")); 
 } 
}; 
							// applicaion :: the action of putting something into operation.
class CExample : public CWinApp 
{ 
	BOOL InitInstance()                         // Bool function imp
		{ 
			CMyFrame *Frame = new CMyFrame(); 
			m_pMainWnd = Frame; 
			Frame->ShowWindow(SW_NORMAL); 
			Frame->UpdateWindow(); 
			return TRUE; 
		} 
}; 
 
CExample theApp; 
//.....................................................................................................

// resource
A resource is a text file that allows the compiler to manage objects such as
pictures, sounds, mouse cursors, dialog boxes, etc.


virtual function to use different function with same name , pointer defining class must have virtual function
in pure virtual it must be equal to zero =0  class become abstract class  it cannot creat instiate as object
abstract calls which have pure virtual function;
abstract child call will be pure virtual function if pure virtual function function not define in child class
virtual function is a member function in base class that you expect to redefine in derived classes.





// Extern
extern is used to declare a global variable or function in another file.
When you have multiple files and you define a global variable or function, which will be used in other files 
The extern modifier is most commonly used when there are two or more files sharing the same global variables or functions
extern CMFCApplication5App theApp;	
	// EX
    //main.cpp
#include <iostream>
int count ;
extern void write_extern();
main() {
   count = 5;
   write_extern();
}
     // support.cpp
#include <iostream>
extern int count;
void write_extern(void) {
   std::cout << "Count is " << count << std::endl;
}








//WINDOWS STYLE
WS_CAPTION 
WS_CHILDWINDOW
check more in  MFC file ...

//
CPoint(); 
CPoint(int X, int Y); 

CSize(); 
CSize(int initCX, int initCY); more

CRect(); 
CRect(int l, int t, int r, int b); more


// MFC TECHNIQUES..................................................................................................

// MFC FROM C++ TO FRAME WORK CALL :: FRAME
#include <afxwin.h>

class CMyFrame : public CFrameWnd {
   public:
      CMyFrame() {
         Create(NULL, _T("MFC Application Tutorial"));
		 // Create(NULL, _T("MFC Application Tutorial"), WS_SYSMENU, CRect(90, 120, 900, 480));
      }
};

class CExample : public CWinApp {
   BOOL InitInstance() {
      CMyFrame *Frame = new CMyFrame();
      m_pMainWnd = Frame;
      
      Frame->ShowWindow(SW_NORMAL);
      Frame->UpdateWindow();
      
      return TRUE;
   }
};

CExample theApp;   // CALL FOR OBJECT


// DIALOG BOX
#include <afxwin.h>
#include "resource.h"

class CExample : public CWinApp {
   public:
      BOOL InitInstance();
};
   
class CExampleDlg : public CDialog {
   public:
      enum { IDD = IDD_EXAMPLE_DLG };
   
      CExampleDlg();
     ~CExampleDlg();
};

CExampleDlg::CExampleDlg():CDialog(CExampleDlg::IDD) {

}

CExampleDlg::~CExampleDlg() {

}

BOOL CExample::InitInstance() {
   CExampleDlg myDlg;
   m_pMainWnd = &myDlg;
   myDlg.DoModal();
   return TRUE;
}
CExample MyApp;


// slider program example two bars

		// Vertical scroll
void CMFCApplication11Dlg::OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar)
{
	// TODO: Add your message handler code here and/or call default

	if(pScrollBar == (CScrollBar*)&m_VSliderBar)
	{
		int value = m_VSliderBar.GetPos();
			m_VSliderEcho.Format(_T("%d"),value);
			UpdateData(FALSE);

			
	}
	else if((pScrollBar == (CScrollBar*)&m_VSliderBar2))
	{
		int value2 = m_VSliderBar2.GetPos();
		m_VSliderEcho1.Format(_T("%d"),value2);
		UpdateData(FALSE);
	}
	
	else
	{
		CDialogEx::OnVScroll(nSBCode, nPos, pScrollBar);
	}
	
}
		// horizontal scroll
void CMFCApplication11Dlg::OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar)
{
	// TODO: Add your message handler code here and/or call default
	if(pScrollBar == (CScrollBar*)&m_HSliderBar)
	{
		int value = m_HSliderBar.GetPos();
		m_VSliderEcho3.Format(_T("%d"), value);
		UpdateData(FALSE);
	}
	else{
		CDialogEx::OnHScroll(nSBCode, nPos, pScrollBar);
	}
	
}

//
