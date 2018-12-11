//C# 

/////////////////////////////
/////// CONTENT
// 0   Basic
// 1   String
// 2   Random
// 3    
// 4    
// 5
// 6
// 7
// 8
// 9   Table  For
// 10  Label
// 11  Form
// 12
// 13
// 14  TAB INDEXING IN GUI
// 15  LIST
// 16  Try Catch
// 17  If in array
// 18  On key down // enter


// 0 
	// Basic
		C# is part of .Net framework
		.Net framework applications are multi-platform applications.
		// C# ::  https://www.tutorialspoint.com/csharp/csharp_program_structure.htm
		  
		  Ex::
		 
		  using System;  
		  // using keyword is used to include the System namespace 
		  
			namespace HelloWorldApplication {
			//  namespace is a collection of classes // https://www.tutorialspoint.com/csharp/csharp_namespaces.htm
			   class HelloWorld {
			   // class declaration
				  static void Main(string[] args) {
				  // Main Method entry point for all C# programs
				  // program execution starts at the Main method.
					 /* my first program in C# */
					 Console.WriteLine("Hello World");
					 Console.ReadKey();
				  }
			   }
			}
		  
		  // Execute via Command Line
		  csc filename.csc
		  Then type ClassName[HelloWorld] to execute the Program.
		 
		 
		 
		 // Object type 
			// Object type is Reference Type
			// built-in reference types are: object, dynamic, and string.
		 
			// Boxing
				//When a value type is converted to object type, it is called boxing
				//object type is converted to a value type, it is called unboxing
		 
				object obj;
				obj = 100 ; // this is boxing
				dynamic d = 20;  // dynamic
				String str = "Tutorials Point";  // String
		 
		// Coonvertion
			//https://www.tutorialspoint.com/csharp/csharp_type_conversion.htm
			
			//double to int
				i = (int)d;  // double d = 5673.74; 
			//int/float to string
				i.ToString() // 
			

		// if
			// https://www.tutorialspoint.com/csharp/csharp_decision_making.htm
			Exp1 ? Exp2 : Exp3;	
			
			if() 
			{}

		// Switch
			switch(expression) {
			   case constant-expression  :
				  statement(s);
				  break; /* optional */
			   case constant-expression  :
				  statement(s);
				  break; /* optional */
			  
			   /* you can have any number of case statements */
			   default : /* Optional */
			   statement(s);
			}

		// Loop
		  for (; ; ) 
				 {
				   // Infinite Loop
				 }
			
		  while(condition)
			  {
		   statement(s);
			  }
		 
		  do {
			statement(s);
			 } 
		  while( condition );
		  
		// Break 
			Terminates the loop or switch statement
		// Continue
			Causes the loop to skip the remainder of its body 
			

		// Encapsulation 
		   // is defined 'as the process of enclosing one or more items within a physical or logical package'.
			https://www.tutorialspoint.com/csharp/csharp_encapsulation.htm
			Public ,Private,rotected,Internal,Protected internal
			
			
		// referance
			// ref keyword
			public void swap(ref int x, ref int y)
			
		// File Handaling
		https://www.tutorialspoint.com/csharp/csharp_file_io.htm







	
 // 1
 
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

//Autotext           
this.textBox1.AutoCompleteMode = System.Windows.Forms.AutoCompleteMode.Suggest;
this.textBox1.AutoCompleteSource = System.Windows.Forms.AutoCompleteSource.CustomSource;
this.textBox1.AutoCompleteCustomSource.AddRange( textbox1_branch.ToArray()); // takes array  // list to array


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



// 9
// 
// Table Row Column Read  :: For
https://stackoverflow.com/questions/9022118/access-cell-value-of-datatable

  // table column
  foreach (string i in Dd_Tablelist)
            {
                foreach (DataColumn column in table.Columns)
                {
                    // ... Write value of first field as integer.
                    MessageBox.Show(column.ColumnName);
                }
            }

  for (int r = 0; r < TotSems.Rows.Count; r++)
           {
			   {
				   
			   }
		   }			   
// Read write row and Column in Datatable
rGrid.CurrentWorksheet[r, c] = TotSems.Rows[r].ItemArray[c].ToString();
rGrid.CurrentWorksheet[r, c] = TotSems.Columns[r].ColumnName;

foreach (DataColumn column in table.Columns)


// 10
// lable
Label StuName = new Label();
StuName.Location = new Point(13, 13);
StuName.Text = "Student Name";
this.Controls.Add(StuName);


// 11
// Form
AddSujPart_Form1 objUI = new AddSujPart_Form1();
objUI.ShowDialog();


// 12
// Combobox
ComboBox comboBox1 = new ComboBox();
comboBox1.Items.Add("Tokyo"); 
comboBox1_Tables.SelectedIndex = 0; 
  //Autotext
https://www.codeproject.com/Tips/789705/Create-combobox-with-search-and-suggest-list

// 13
// Global Name
public static OleDbConnection cnn;
public static IDictionary<string, List<string>> TabColNam;

 
// 14
// Tab in gui to Select sepecic box
TabIndex// in Formview initialization

// 15 
// List        
List<string> textbox1_branch = new List<string>(); 

// 16
   try
{
// Program to be executed
}
	catch (Exception ex)
{
	// Popups Error Messagee
	MessageBox.Show(ex.ToString());
}


// 17 
// If in array
   if (array.Contains(value)){}
   
// 18
// On Key Down

 private void textBox1_KeyDown(object sender, KeyEventArgs e)
	{
		if (e.KeyCode == Keys.Enter)
		{

		}
	}