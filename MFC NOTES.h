// MFC: MICROSOFT FOUNDATION CLASS LIBRABY
// MFC:: library provides a set of functions, constants, data types, and classes 
// to simplify creating applications for the Microsoft Windows operating systems.
// Book :: Essential Concepts for Building Interactive Graphics Applications  ??
// AFX  :: Application FrameWork   // LIke ActiveX DirectX... AFX
An MFC DLL is a binary file,shared library of functions that can be used simultaneously by multiple applications

ATL :: Active Template Library     // https://msdn.microsoft.com/en-us/library/3ax346b7.aspx
// the operating system is constantly asked to perform some assignments.
// WM_ =  Window Message

//https://www.tutorialspoint.com/mfc/mfc_activex_control.htm
ActiveX control container  is a parent program that supplies the environment for an ActiveX (formerly OLE) control to run.
// ActiveX is not a programming language, but rather a set of rules for how applications should share information.


// Parent Window  // https://www.tutorialspoint.com/mfc/mfc_windows_fundamentals.htm
// If the Window you are creating is dependent of another, you can specify that it has a parent.
//  This is done with the pParentWnd argument of the CFrameWnd::Create() method.
//If the Window does not have a parent, pass the argument with a NULL value.


// Map of Messages  // DECLARE_MESSAGE_MAP()  //  https://www.tutorialspoint.com/mfc/mfc_messages_events.htm
// Message Handeling // Windows is a message-oriented operating system
// Each time an event such as a KEYSTROKE or MOUSE click occurs, a message is sent to the application.
// Which must then handle the event.
// compiler to manage messages
// he DECLARE_MESSAGE_MAP macro  porvided in class defination
		  DECLARE_MESSAGE_MAP()   // In header
	// the messages,Creates the table !	  
				BEGIN_MESSAGE_MAP(Your_class, Deried_your_class)		// In .Cpp
					//Table
				END_MESSAGE_MAP()
		  

// Toggle grid // on it and arrange GUI

//
   .h 	   .cpp     // Generally for application
Dgn.h 	Dgn.cpp		// Generally for Frame/Dialog
//


//MFC Important Files 
Resource.h    	-> ID
Myname.cpp 	  	-> Definition
Myname.h 		-> Declaration
Myname_Dgn.rc   -> GUI   		 // Can View in Resource_view  // Can also open using Text



// MFC APPLICATION CAN ME MAKE BY 3 METHODS // Ways to create MFC
1 WIZARD_ OF MFC AUTOMATICLLAY WILL INCLUDE EVERY THING
	-> C++ -> MFC WIZAD
2 FORM EMPTY_ ADD DLL AND MAIN.CPP FILES
	-> C++ -> MT PROJECT -> SETTING PROPERTY -> MFC DLL -> PROPERTY -> NEW ITEM -> C++ ADD
3 WIN32 AND THEN ADD DLL AND .CPP
	-> C++ -> WIN32 PROJ -> MTPROJ ->  PROPERTY -> MFC DLL -> NEW ITEM -> C++ ADD   -> CWINAPP/CFrameWnd(function add in C++)
	->Rt PROJECT -> ADD -> RESOURCE -> DIALOG
// MFC WIZAD  C++ -> MFC -> CHECK DIALOG BASED
			
			
			
Any application has two main sections: 
 Class
 Frame or Window 

 CONTROLE VARIABLE   -> One variable is used for the information stored in the control
 VALUE				  -> A user can perform some sort of actions on that control with this variable


// MFC Library !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// MFC STANDARD LIBRARY
#include <afx.h>
#include <afxwin.h>         // MFC core and standard components
#include <afxext.h>         // MFC extensions
#include <afxdtctl.h>       // MFC support for Internet Explorer 4 Common Controls
#include <afxcmn.h>         // MFC support for Windows Common Controls

// DDX : dialog data exchange
// DDV : dialog data validation

// CLASS
// Classess of MFC
// CLASS DETAIL LINK ::    https://docs.microsoft.com/en-us/cpp/mfc/reference/cframewnd-class#create
CWinApp   // Initialize Application
		InitInstance() // Initializes the instance
				-> InitInstance() -> Can initialize value of variable  // Declare variable in HEADER FILE !!		
CFrameWnd //Initialize the Frame

CDialogEx  // Inherits main application	
	    OnInitDialog()   // On initialization Dialog
		DoDataExchange() // Links GUI  to  GUI_Variable

//			https://docs.microsoft.com/en-us/cpp/mfc/reference/cframewnd-class#create
CFrameWnd::Create()  // pParentWnd argument of the CFrameWnd::Create() 
			Create(NULL, _T("MFC Application Tutorial")); 
			Create(NULL, _T("MFC Application Tutorial"), WS_SYSMENU,CRect(90, 120, 550, 480), NULL);


// LIBRARY FUNCTIONS
GetStyle()			  // slider  return Bool
.GetPos()			  // Get Slider Position 
->Resetcontent()  // Reseat content !!???
->GetCurSel();		// get selected item !!???
.DoModal();			// Open window and tab !
CRect rcWindow; // Get the RECT of the Dialog
		GetWindowRect(rcWindow);
//TOOLBAR
m_wndToolBar.Create(this); // Tool Bar commands    // CTOOLBAR m_wndToolBar
m_wndToolBar.LoadToolBar(IDR_TOOLBAR2);
// CGridCtrl  class[self_Made class] - > CTabCtrl
m_Grid.EnableDragAndDrop(TRUE);   // CGridCtrl m_Grid; in header file
m_Grid.AutoSize();
//LIST CONTROL   //CListCtrl m_listCtrl; // https://www.tutorialspoint.com/mfc/mfc_list_control.htm
//CListCtrl m_listCtrl;  - > GUI ListEditor handler //  https://www.tutorialspoint.com/mfc/mfc_list_control.htm
m_listCtrl.InsertColumn(order of item,Caption,Relative position,Width)  //  EX : m_listCtrl.InsertColumn(1, L"Name", LVCFMT_CENTER, 80);
m_listCtrl.InsertItem(0, L"100") // INSERT AND ENTER(MOVE NEXT LINE)
m_listCtrl.SetItemText(nItem, 1, L"Mark"); // PASTE ON THE SAME COLUMN
//Listbox    // CListBox m_listBox;  // https://www.tutorialspoint.com/mfc/mfc_list_box.htm
// OnCbnSelchangeCombo1   // Add event Handeler on select change in combobox perform Activity
m_listBox.AddString(str);
m_listBox.GetText(m_listBox.GetCurSel(),m_strItemSelected); // Cstring m_strItemSelected // of static text [takes fromlist box and save in m_strItemSelected]
//Edit Control //CEdit Class //Take inputs and also give outputs   // https://www.tutorialspoint.com/mfc/mfc_edit_box.htm
// https://www.tutorialspoint.com/mfc/mfc_edit_box.htm
m_myEditControl.EnableWindow(TRUE); // FOR GUI EDIT_CONTROLLER  		CEdit m_myEditControl // Box visible Box not visible if false
m_editControlVal.GetString();       // FOR GUI SET VARIABLE TO VALUE    CString m_editControlVal
m_myEditCtrl.GetWindowTextW(str);  // 	CString str = _T("");    // Store gui of m_myEditCtrl to str;
m_editControlVal.Format(_T("ON"))	// FOR GUI SET VARIABLE TO VALUE    CString m_editControlVal
m_editControl.SetWindowText(L"50");
//
UpdateData() and Updatedata(TRUE) are the same.
UpdateData(TRUE) is used to copy the contents of the controls into the associated variables. // GUI TO VARIABLE
UpdateData(FALSE) is used to put the values in the variables to the associated controls.     // VARIABLE TO GUI
// Tree Control GUI  // IN PROPERTIES :: Has Line  True    // https://www.tutorialspoint.com/mfc/mfc_tree_control.htm
hItem = m_treeCtrl.InsertItem(L"Car Listing",TVI_ROOT); 	// INITIALIZE THE TREE PARAMETERS //TVI_ROOT INITIALIZE ROOT WORD
hCar = m_treeCtrl.InsertItem(L"Economy",hItem);
m_treeCtrl.InsertItem(L"BH-733", hCar);
m_treeCtrl.InsertItem(L"SD-397", hCar);
// GUI MAIN WINDOW -> PROPERTIES -> HORIZONTAL true  and VERTICLA true 
//
//EX:: Activex controller      https://www.tutorialspoint.com/mfc/mfc_activex_control.htm
Add		Microsoft progress bar 6 -> add Variable Controle.
m_progBarCtrl.SetScrollRange(0,100,TRUE);
m_progBarCtrl.put_Value(53);
//
//progress bar  // Toolbox -> Progress Control   // https://www.tutorialspoint.com/mfc/mfc_progress_control.htm
// // Rt click GUI -> Insert Active X controller -> Windows ProgressBar Controller version 6.0				 
m_progCtrl.SetRange(0,100);  // m_progCtrl as Controle variable  :: CProgressCtrl m_progCtrl;
m_progCtrl.SetPos(i);        //
// Animation    //  https://www.tutorialspoint.com/mfc/mfc_animation_control.htm
m_animationCtrl.Open(L"res\\copyfile.avi");  // m_animationCtrl is control variable //  CAnimateCtrl m_animationCtrl
m_animationCtrl.Stop();   
//
// Bitmap button   //  https://www.tutorialspoint.com/mfc/mfc_bitmap_button.htm
// Add GUI button -> add Bitmap button to GUI BUTTON    // in gui button set Bitmap to TRUE
CBitmap m_bitmapStart;
m_bitmapStart.LoadBitmap(IDB_BITMAP_START);
HBITMAP hBitmap = (HBITMAP)m_bitmapStart.GetSafeHandle();
m_buttonStart.SetBitmap(hBitmap);   // m_buttonStart  // GUI button control variable  // CButoon m_buttonStart;
//
// Button // Add event and perform event   || can also add variable and change Button stuff
CButton m_buttonStart;  // CButton class and m_buttonStart is control variable
//
// Command Button  //Special Button  // Cool Button Use this buton
// Add GUI CommandButton -> Add Event Handiler ->
//
//Combobox  ::Like arrow drop list //https://www.tutorialspoint.com/mfc/mfc_combo_boxes.htm
CComboBox m_comboBoxCtrl; // class CComboBox ; //  m_comboBoxCtrl Control Variable
m_comboBoxCtrl.AddString(str); //CString str = _T("");     // str.Format(_T("Item"))
m_comboBoxCtrl.GetLBText(m_comboBoxCtrl.GetCurSel(), m_strTextCtrl); // get text from m_comboBoxCtrl and save in  m_strTextCtrl
//
//Radio Button 
// Gui -> Add radio button -> Add event Handeler and perform activity
//
//Checkbox  //  set or change the value of an item as true or false.  //https://www.tutorialspoint.com/mfc/mfc_checkboxes.htm
Cbutton m_enableDisableCheck_Ctrl //For checkbox, the CButton variable type is selected by default.
m_enableDisableValue = 1;UpdateData(FALSE); // WILL PUT TRUE IN GUI  // BOOL m_enableDisableValue; //ADDED varibale value m_enableDisableValue
//
// Image List   // CImageList class.
// New Project -> Add C++ -> MFC APPLICATION -> [SINGLE APPLICATION MFC]
// https://www.tutorialspoint.com/mfc/mfc_image_lists.htm
// 
//RichEdit  // user can enter and edit text //https://www.tutorialspoint.com/mfc/mfc_rich_edit.htm
//
//Spin Button  //CSpinButtonCtrl class  // Is a pair of arrow buttons
//https://www.tutorialspoint.com/mfc/mfc_spin_button.htm   // https://www.tutorialspoint.com/mfc/mfc_managing_updown_control.htm
spinButton -> Prop-> Auto Buddy -> True  and Set Buddy Integer  True  // This enable neibhour to change it contents
m_spinCtrl.SetRange(0,10000);  // CSpinButtonCtrl m_spinCtrl;
m_spinCtrl.SetPos(100);
// 
// Timer //To work, every lapse of period, // https://www.tutorialspoint.com/mfc/mfc_timer.htm
// CWnd::SetTimer()
// Add  WM_Timer
SetTimer(0,1000,NULL);  // Set at the time of Initialising Data
 KillTimer(0); 	 // ?????
CTime CurrentTime= CTime::GetCurrentTime();
int iHours = CurrentTime.GetHour();
int	iMinutes = CurrentTime.GetMinute();
int iSeconds = CurrentTime.GetSecond();
sStatusMsg.Format(L"Running: %d", currValue);  // CString sStatusMsg;

//
//Date and time // GUI -> TOOLBOX -> ADD DATE TIME PICKER
// https://www.tutorialspoint.com/mfc/mfc_date_time_picker.htm
GetDlgItemText(IDC_DATETIMEPICKER1,m_StrValue3); // m_StrValue3 // static text variable // ID IDC_DATETIMEPICKER1
UpdateData(FALSE);

//
// SLIDER CONTROL   //  https://www.tutorialspoint.com/mfc/mfc_slider_controls.htm
// In properties Vertical or Horizontal can be set
// Rt -> Add VARIABLE ->Category to Control->Variable Name to "m_VSliderBar"->Variable Type to CSliderCtrl
// Click Form -> beside property click Message button -> WM_VSCROLL -> ADD         // CAUTION THIS IS FORM NOT DIRECTLY VERTILABAR
m_VSliderBar.SetRange(0,100,TRUE); // m_VSliderBar=verticla bar varibale set   // keep in oninitdialog
m_VSliderBar.SetPos(0);
 
 
 // DRAWING
 // CDC CLASS  // CDC *pDC
 // MFC GDI  		//  https://www.tutorialspoint.com/mfc/mfc_gdi.htm
 // DRAW :MFC provides graphic-object classes equivalent to the drawing tools
 // CDC is the most fundamental class
 // In void CMFCGDIDemoView::OnDraw(CDC* pDC)  // OnDraw
 //New point or new line point starting MoveTo()
   pDC->MoveTo(95, 125); // move from origin to this point // set the starting position of a line
   pDC->LineTo(230, 125); // Draw line from origin or moveto() to lintto();
  
 // Polylines  :: lines are stored in an array of POINT or CPoint values
 pDC->Polyline(Pt, 2);  // 
 // EX ::
 CPoint Pt[7];
	Pt[0] = CPoint(20, 150);
	Pt[1] = CPoint(180, 150);
	Pt[2] = CPoint(180, 20);
	pDC->Polyline(Pt, 3);  // 
 
 //  RECTANGLE
 pDC->Rectangle(5, 15, 250, 160);
 //  SQUARE
 pDC->Rectangle(15, 15, 250, 250);  // :P USING RECTANGEL
 
 //PIES :: A pie is a fraction of an ellipse
 // CDC::Pie()
 // BOOL Pie(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4); 
 // x1 y1 x2 y2 rectangle and x3 y3 point in ellips and x4 y4 other point in ellips
  pDC->Pie(40, 20, 226, 144, 155, 32, 202, 115);
   
  //Arcs
  //CDC::Arc() 
  //BOOL Arc(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4);
  // x1 y1 x2 y2 rectangle and x3 y3 point in Arc and x4 y4 other point in Arc
  // int SetArcDirection(int nArcDirection) // ARc direction CLOCKWISE OR ANTI CLOCKWISE
 // EX::
 	pDC->SetArcDirection(AD_COUNTERCLOCKWISE);	
	pDC->Arc(20, 20, 226, 144, 202, 115, 105, 32);
	
 // Chords
    pDC->SetArcDirection(AD_CLOCKWISE);
    pDC->Chord(20, 20, 226, 144, 202, 115, 105, 32);
 //
 //Text   // 
 pDC->TextOut(100, y, m_msgArray.GetAt(i));
 
 //
 //Color
 // Color   BRUSH   // CONSIST OF 8 brush  /// https://www.tutorialspoint.com/mfc/mfc_gdi.htm
 // brush is a drawing tool used to fill out closed shaped or the interior of lines.
 // class CBrush
  CBrush brush(RGB(200, 150, 200));
  CBrush *pBrush = pDC->SelectObject(&brush);
 // Ex::
  CBrush brush(RGB(200, 150, 200));
  CBrush *pBrush = pDC->SelectObject(&brush);
	pDC->Rectangle(25, 35, 250, 125);
	pDC->SelectObject(pBrush);
//
// Internet Server - Client
// MFC - Internet Programming          //https://www.tutorialspoint.com/mfc/mfc_internet_programming.htm
// APIs for programming both client and server applications.
// Class CSocket 
	// Server
	CServerSocket m_serverSocket;  //CServerSocket: CSocket
	m_serverSocket.Create(6666);
	m_serverSocket.Listen();
	// Client
	CServerSocket m_clientSocket;  //CServerSocket: CSocket
	m_clientSocket.Create();
	m_clientSocket.Connect(m_ip_val, m_port_val);
	
//	
// Multithreading     // https://www.tutorialspoint.com/mfc/mfc_multithreading.htm
// A thread is a path of execution within a process.
// CWinThread objects
// all the framework helper function AfxBeginThread,
// which creates the CWinThread object for you.
//
//EX::
UINT MyThreadProc(LPVOID Param) {
	while (!stopNow && (currValue < maxValue)) {
		currValue++;
		Sleep(50);     // would do some work here
	}
	return TRUE;
}
 AfxBeginThread(MyThreadProc, 0); // <<== START THE THREAD

//
//  https://www.tutorialspoint.com/mfc/mfc_serialization.htm
// CHECK MFCApplication9
// Serialization is the process of writing or reading an object to or
// from a persistent storage medium such as a disk file
// maintain the state of structured data (such as C++ classes or structures) 
// Serialize() member function
// CObject class     // CEmployee : public CObject
void Serialize(CArchive& ar);
employee.Serialize(ar);
ar.IsStoring()
DECLARE_SERIAL(CEmployee);
IMPLEMENT_SERIAL(CEmployee, CObject, 0)
ar << empID << empName << age;    // Storing
  ar >> empID >> empName >> age;  // Opening
// EX
// stoirng in  CEmployee : public CObject
   employee.empID = m_id;
   employee.empName = m_strName;
   employee.age = m_age;
   employee.Serialize(ar);
   
   
//
// File
// File Processing  // can handle the reading and writing of Unicode text files
// CStdioFile 
CStdioFile();
CStdioFile(CAtlTransactionManager* pTM);
CStdioFile(FILE* pOpenStream);
CStdioFile(LPCTSTR lpszFileName, UINT nOpenFlags);
CStdioFile(LPCTSTR lpszFileName, UINT nOpenFlags, CAtlTransactionManager* pTM);
// 
//OPEN
CStdioFile file;
file.Open(L"D:\\MFCDirectoryDEMO\\test.txt", CFile::modeRead | CFile::typeText);
file.ReadString(m_strEditCtrl);
file.Close();
//
//SAVE
file.Open(L"D:\\MFCDirectoryDEMO\\test.txt", CFile::modeCreate | CFile::modeWrite | CFile::typeText);
file.WriteString(m_strEditCtrl);
file.Close();



// File    //  https://www.tutorialspoint.com/mfc/mfc_file_system.htm
GetLogicalDrives() //  http://www.tenouk.com/cpluscodesnippet/getlogicaldrives.html
//
// File  
// File  open and save    // https://www.tutorialspoint.com/mfc/mfc_serialization.htm
//Open
CFile file;
file.Open(L"EmployeeInfo.hse", CFile::modeRead);
CArchive ar(&file, CArchive::load);
Employee employee;
//Save
CFile file;
file.Open(L"EmployeeInfo.hse", CFile::modeCreate | CFile::modeWrite);
CArchive ar(&file, CArchive::store);
//
// Directories       		//https://www.tutorialspoint.com/mfc/mfc_file_system.htm
// A directory is a file
// Directory is a physical location
// CreateDirectory() 
CreateDirectory(L"D:\\MFCDirectoryDEMO", &saPermissions);
CreateDirectory(L"D:\\MFCDirectoryDEMO\\Dir1", NULL);
RemoveDirectory();
RemoveDirectory(L"D:\\MFCDirectoryDEMO\\Dir1")
MoveFile(L"D:\\MFCDirectoryDEMO\\Dir1", L"D:\\MFCDirectory\\Dir1")




// SDI
// Single Document Interface or SDI
// one view to the user
// application cannot display more than one document at a time

// MDI
// Multiple Document Interface or MDI
// user can open more than one document in the application without closing it
// the application provides a parent frame that acts as the main frame.









//
// Cstring 
 CString sDriver = L"MICROSOFT ACCESS DRIVER (*.mdb)";
// Cstring to int converstion  // https://stackoverflow.com/questions/992757/convert-mfc-cstring-to-integer
CString str2;
int x=_wtoi(str2);

//
// CString Array || CStringArray
 CStringArray class
 CStringArray m_msgArray;
 m_msgArray.Add(message);  //  CString messge  //
 m_msgArray.Add(L"hi there");
 
 
 
//
//MessageBox
MessageBox(L"File > New menu option");
AfxMessageBox(L"Data Received");

//  COMBO BOX  
//  http://www.functionx.com/visualc/controls/combobox.htm
//  https://www.tutorialspoint.com/mfc/mfc_combo_boxes.htm
CComboBox BOX1_CONTROL_R; // In Header file !
DDX_Control(pDX, IDC_COMBO1, BOX1_CONTROL_R); // In DoDataExchange()
BOX1_CONTROL_R.AddString(str);  // BOX1_CONTROL_R     =   GUI_COMBO_BOX -> ADD -> EVENTHANDELER -> MCONTROL
// EX:
// TODO: Add extra initialization here  
CComboBox *Majors = new CComboBox;  // ADD THIS LINES IN INITINSTANCE();
Majors->Create(WS_CHILD | WS_VISIBLE,CRect(10, 50, 100, 150), this, 0x1448);
// EX2
CComboBox *Majors = new CComboBox;
Majors->Create(WS_CHILD | WS_VISIBLE | CBS_DROPDOWNLIST,CRect(10, 10, 140, 150), this, 0x1448);





//WINDOWS STYLE
WS_CAPTION 
WS_CHILDWINDOW
check more in  MFC file ...

//  	https://www.tutorialspoint.com/mfc/mfc_quick_guide.htm
// CPoint
CPoint(); 
CPoint(int X, int Y); 
// EX
 CPoint Pt[7];
	Pt[0] = CPoint(20, 150);
	Pt[1] = CPoint(180, 150);
	Pt[2] = CPoint(180, 20);

CSize(); 
CSize(int initCX, int initCY); 		// More

CRect(); 
CRect(int l, int t, int r, int b);  // More   		|| Left   Top	 Right	 Bottom   // x1 y1   // x2 y2
 



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

	CExampleDlg();  // constructon
	~CExampleDlg(); // distructor
};

CExampleDlg::CExampleDlg():CDialog(CExampleDlg::IDD) {

}

CExampleDlg::~CExampleDlg() {

}
/////


// ICON   :: Top left corner of window -> Resource file wil find icon files
// Create our own

Rt Project -> ADD -> Resource -> Icons
m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);  //Stores icon in m_hIcon  // Locaion: In App dialog constructor



// Client Edge True!
// GUI text button property -> apperance -> client -> Edge to True it creats like box

// Text
To add Variable by rt clicking to "text box" change text box ID: other than ID_STATIC

// ID:  After changing ID save it to work !
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
  // Create(NULL, _T("MFC Application Tutorial"), WS_SYSMENU,CRect(90, 120, 550, 480), NULL);
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
 
CExample theApp; // call program
//.....................................................................................................

//  RESOURCE
A resource is a text file that allows the compiler to manage objects such as
pictures, sounds, mouse cursors, dialog boxes, etc.

ID identifier [constant integer whose name usually starts with ID]
virtual function to use different function with same name , pointer defining class must have virtual function
in pure virtual it must be equal to zero =0  class become abstract class  it cannot create instiate as object
abstract calls which have pure virtual function;
abstract child call will be pure virtual function if pure virtual function function not define in child class
virtual function is a member function in base class that you expect to redefine in derived classes.





// Extern
extern is used to declare a global variable or function in another file.
When you have multiple files and you define a global variable or function, which will be used in other files 
The extern modifier is most commonly used when there are two or more files sharing the same global variables or functions
extern CMFCApplication5App theApp;	
// EX
    // main.cpp
#include <iostream>
int count ;
extern void write_extern();
main() 
{
   count = 5;
   write_extern();
}
     // support.cpp
#include <iostream>
extern int count;
void write_extern(void) {
   std::cout << "Count is " << count << std::endl;
}








//  DoDataExchange
// -> Consist of Gui ID to Variable link     Link [ID  -  Variable]
--Example
ID 		 = IDC_ECHO_AREA  
Variable = IDC_ECHO_AREA_TEXTBOX
->
void CMFCApplication14Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_ECHO_AREA, IDC_ECHO_AREA_TEXTBOX_0);
	DDX_Text(pDX, IDC_ECHO_AREA2, ECHO_AREA2_TEXTBOX);
}



// MFC MICROSOFT NOTES
// MFC separates member variables and functions based on their use, not by the type of access allowed.





// MFC TECHNIQUES..................................................................................................
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

///////////////////
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
   myDlg.DoModal();			// Open Tab
   return TRUE;
}
CExample MyApp;
///////////////////////

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





//  Pause
system("PAUSE")   //TO STOP PROGRAM FOR SPECIFIC TIME !!!   OR USE BREAK POINT





// DLL    
// Dynamic Link library
// Making DLL File  		// watch vdo c++ tutorial create a dll in vc++
// To create dll   new -> win32 app -> next -> DLL -> finish // to create dll file
// To call dll   new -> win32 app -> next -> dll or console -> finish 

// to call header file copy .h .dll .lib file to the new program location  
// rt project -> properties -> configuration properties -> Linker -> Input -> Additional dependencies  (Add anyfile.dll)

static __declspec(dllexport) void Crap(); //void Crap() is a function defined






// DoDataExchange            GUI_ID  =  VARIABLE_ID
// Consist of Gui to varable link !!
//EX
void CRcsBeamInputDlg::DoDataExchange(CDataExchange* pDX)
{
	CDGN_FormViewInDlg::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CRcsBeamInputDlg)
						// GUI							// VARIABLE
	DDX_Control(pDX, IDC_GURBE_NAME,                   m_EditMemberName);
	DDX_Control(pDX, IDC_GURBE_COMBO_USE_TYPE,         m_ComboMemberUseType);

}






// afx_msg
//EX	:
// Type modifier for message handlers
#ifndef afx_msg
#define afx_msg         // intentional placeholder
#endif
// it is, or might have been, a help for the wizards to recognize the code.   // It doesn't do anything else
//The code will compile and work the same with or without afx_msg, but it is used by convention as an indicator 
//that the function is a message handler, and is required if using the class wizard
// per TN006: Message Maps:



// EX HOW MFC RUNS...................................................................................[
//    https://www.tutorialspoint.com/mfc/mfc_messages_events.htm
#include <afxwin.h>
// 1 Frame
class CMY_Frame: public CFrameWnd
{
public:
	CMY_Frame();
protected:
	DECLARE_MESSAGE_MAP()

};

CMY_Frame::CMY_Frame()
{ // 2 FRAME CREATE
	// Create window frame
	Create(NULL,L"MFC MESSAGE MUZAFAR", WS_OVERLAPPEDWINDOW,CRect(12,100,1000,1000));
}



class CMY_Application : public CWinApp
{
	// 3 APPLICATION
public:
	BOOL InitInstance();
	
};
// Must be out side program
BEGIN_MESSAGE_MAP(CMY_Frame,CFrameWnd)   //4 SHOW MESSAGE HANDELING AND EVENTS
END_MESSAGE_MAP()

BOOL CMY_Application :: InitInstance()
{
	//4 
	CMY_Frame *Frame = new CMY_Frame(); // FRAME CALL AND SHOW IN INITIALICE INSTANCE
	m_pMainWnd=Frame;
	m_pMainWnd->ShowWindow(SW_SHOW);
	m_pMainWnd->UpdateWindow();
	return TRUE;
};

CMY_Application Start; // 5 CALL OBJECT TO RUN

//
SetCoveredCellsRowCol // function for grid check it !
//.................................................................................................................]


//
/*
 * VK_0 - VK_9 are the same as ASCII '0' - '9' (0x30 - 0x39)
 * 0x40 : unassigned
 * VK_A - VK_Z are the same as ASCII 'A' - 'Z' (0x41 - 0x5A)
 */
WinUser.h   // File !! consist of all define values !! to recoginse the keywords
#define VK_HOME           0x24
#define VK_LEFT           0x25
#define VK_UP             0x26
#define VK_RIGHT          0x27
#define VK_DOWN           0x28
#define VK_SELECT         0x29
#define VK_PRINT          0x2A
#define VK_EXECUTE        0x2B

// TRIGGER ON CLICKING THE BUTTON   // https://www.tutorialspoint.com/mfc/mfc_messages_events.htm
// :: EX ::

afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);

BEGIN_MESSAGE_MAP(CMainFrame, CFrameWnd)
   ON_WM_CREATE()
   ON_WM_KEYDOWN()
END_MESSAGE_MAP()

void CMainFrame::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags) {
   switch (nChar) {

      case VK_RETURN:
         MessageBox(L"You pressed Enter");
         break;
      case VK_F1:
         MessageBox(L"Help is not available at the moment");
         break;
	  case 0x39: 												// Triggered using Ask key Important !!!
		MessageBox(L"Entered 9");
		break;
      case VK_DELETE:
         MessageBox(L"Can't Delete This");
         break;
      default:
         MessageBox(L"Whatever");
   }
}

//
// LOOP BUTTON TECHNIQUES
while (!stopNow)    // Bool stopNow    // Button on : stopNow =1 // Button Off : stopNow =0
{
	// DO CALCULATINO
}


// Check this syntax
DWORD uDriveMask ;
TCHAR szDrive[] = _T(" A:");

// Get Length
m_strEditCtrl.GetLength();