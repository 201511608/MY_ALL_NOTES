
//C# 

/////////////////////////////
/////// CONTENT
// 1    // String
// 2    
// 3    
// 4    
// 5
// 6
// 7
// 8
// 9
// 10
// 11
// 12
// 13





 //string
 string msg = string.Empty; 
 string concreteMatName = "Concrete";
 
 // Random
  Random rand = new Random(1000);
  rand.Next(100)
 
 // Sleep
 System.Threading.Thread.Sleep(5);

 
 //Button change position as per Expand  Formwork
 Select Button -> properties -> Anchore -> change setting !
 
 // Array 
     int[]  Bredth =new int[3] {0,3000,6000 }; // Initilizing
	 
	
//Read and Write on Console 
Console.WriteLine(Bredth.Length);
Console.ReadLine();

 
 // GUI...................................................
 
// Text Box Converting to String2int .....
textBox1.Text		// Taking string
Convert.ToInt32( textBox1.Text);  // Taking numeric vavlue

// Combo box like drop down menu
comboBox1.Text
Convert.ToInt32(comboBox1.Text)   // Taking input
comboBox1.Items.Add("Mahesh Chand");  // we can add
comboBox1.SelectedIndex     // Selection in terms of    0 1 2 3 4
comboBoxAnimation.SelectedIndex = 0;    // set default to any index   Generally OnLoad function !!
 
Load += button1_Click;   // Initilize bush button at run !  // put this below  // initilize()

// Message box
Message Box
MessageBox.Show("hi");

// Radio Button
radioButton1.Enabled = false; 
radioButton1 = true;  
radioButton1.Checked // Bool

//Enabled   // Desable    // will not show in gui
radioButton1.Enabled = false;  radioButton1.Enabled = true;   // false true


// numericUpDown1     Numeric up and down   For text box with Number selection by scoller upanddown arrow  mark
(int)numericUpDown1.Value  // Taking input   // int TieSpac_mid = (int)numericUpDown1.Value ;



// EventArg
e
The EventArgs object that contains the event data. 

// DLL
	// DYNAMIC LINK LIBRARY FOR CSHARP
	// PROJECT -> C# -> CLASSLIBRARY  [WRITE PROGRAM AND BUILD]

//Techniques............................................................................
  foreach (string i in Dd_Tablelist)
            {
                foreach (DataColumn column in table.Columns)
                {
                    // ... Write value of first field as integer.
                    MessageBox.Show(column.ColumnName);
                }
            }


// Mouse click Code



//This is a replacement for Cursor.Position in WinForms
        [System.Runtime.InteropServices.DllImport("user32.dll")]
        static extern bool SetCursorPos(int x, int y);

        [System.Runtime.InteropServices.DllImport("user32.dll")]
        public static extern void mouse_event(int dwFlags, int dx, int dy, int cButtons, int dwExtraInfo);

        public const int MOUSEEVENTF_LEFTDOWN = 0x02;
        public const int MOUSEEVENTF_LEFTUP = 0x04;

        //This simulates a left mouse click
        public static void LeftMouseClick(int xpos, int ypos)
        {
            SetCursorPos(xpos, ypos);
            mouse_event(MOUSEEVENTF_LEFTDOWN, xpos, ypos, 0, 0);
            mouse_event(MOUSEEVENTF_LEFTUP, xpos, ypos, 0, 0);
        }
//Call
LeftMouseClick(500, 500);   // x y positions

//var
//  var can be declared without giving an explicit type
https://docs.microsoft.com/en-us/dotnet/csharp/programming-guide/classes-and-structs/implicitly-typed-local-variables


// SQL CONNECTION
OleDbConnection myConn = new OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0;Data Source=aStuDB1.accdb;Persist Security Info=False;");
myConn.Open();

// Dictonary
Dictionary<int, string> dict = new Dictionary<int, string>()
                                            {
                                                {1,"One"},
                                                {2, "Two"},
                                                {3,"Three"}
                                            };
dict.Keys.ElementAt(i), 
dict[ dict.Keys.ElementAt(i)]);
