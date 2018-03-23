VISUAL BASIC
// Write two or more commands in same line using :
 
// Libraries
	Imports System.Text.RegularExpressions   // Regex :: Regex class is used for representing a regular expression.

// REGEX 
		// Matches
	Dim mc As MatchCollection = Regex.Matches(text, expr)  // Creates an array // check in techiques
		// Replaces
	 Dim rgx As Regex = New Regex(pattern)   / regex data type
	 Dim result As String = rgx.Replace(input, replacement) 
	 Console.WriteLine(Regex.Replace(name, pattern, String.Empty))
  
	  
	 [MN]  // match M OR N   case sensitive
	 (man) // matches whole word in the bracket
	  .    // Any single character           \\ For other CASES (\.) indicates ull stop
	  ..   // Any 2 character    // Number of dots number character
	  *    // o or more times preseding charactes!!  preceding character, appearing zero or more times
	 .*    // Any number of characters
	  ^     //indicates the beginning of the string or line whrere \A only start of string.
	  $     // \n  indicates the end of the string.          "finnal end with"  // String ends with h finally not in between!!
	  \A   // match must at start of string 
	  \z   // End of a string
	  \Z    // At end of string or before \n 
	  |    // Or (this | what )   //th(e|is|at)
	  +    // one to infineity preceeding character   // check diff beteen t+ t+?
	  ?    // 0 to onetime only // if nothing there it reads as space
	 \b    //Start at a word boundary.  // and match at word boundry    
	 \B    // not in Boundres
	 \s    // space
	 \ss   // tab or more space check it out ?
	 \d    // matches decimal digits    // muzd83d  match  8 3
	 \D    // matches Characters        // muzd83d  match  m u z d d
	 /G    //The match must occur at the point where the previous match ended. ?   //"\G\d"  0123f46 0 1 2 3
	 \s\S  // shacecharacter
	 \w\s  // characterspace
	 \W    //ad*&u  * &
	 \w    //ad*&u  adu            "\w" = single singlecharacter     "\w+"  single singlewords thll space  // word necessay not space
	 \     // word \.  \$    // to have the actual meaning of the word
	 \1    // \2 \3  ()()()\2\3\1  Indicates (\1)(\2)(\3) // Match cases 
	 <>    // same as <> copy \1   //Ex   "(?<anyname>\w)\k<anyname>"  ()\1  ||  \1=anyname
	 \k< name >
	 //Regex techniques
	 th(e|is|at)
	 [^(Addr.*Addr)]  
	 s.*t 				   start of s  and it takes last t word
	 [ali][thisis second]  first letter and second letter
	  ali  (ali)		   Both are same
	  [a-z]                a to z
	  [A-Z]
	  [0-9]                0 to 9 matches
	  s*h                  matcher  h sh ssh   		 // s 0 to infinite     // preceding of *
	  s+h                  matcher  sh ssh sssh      // s 1 to infinite  // preceding of +
	  
	  ^.* 						//Start of string followed by zero or more of any character (except line break)
	  .*$						//Zero or more of any character (except line break) followed by end of string
	  (\bt\w+)              	// "STARTWITH"  Total word starting with t
	  (\w+w\b)              	// "ENDWITH"    any word that end with 	w
	  [0-9]+?
	  [0-9]+                	// numbr 1 123 12 1234
	  [0-9]{3}
	  [0-9]{3,6}                // In between 3 and 6
	  [^\(star\)].*[^\(ends\)]  // Want lines in between star and end !!!
	  \bis(.*)ends\b
	  \bis.*ends$               // Any where to end of line
	  \w+ (?= \.)                 // words that ends  with .   this is a cat. and he. is //  cat he
	  (?<==)\w+                 // Matches words after =
	 (?(A) A\d{2}\b | \b\d{3}\b)   // (?( name )yes | no )
	 //  (?<==)(.?\w+){1,}"?
 
//SUB MAIN 
//Sub Main indicates the entry point of VB.Net program. 
	Sub Main() 
				   // here the program must be written  !!!!
	End Sub


//Class Declearation
	Public Class Rectangle
		// write class data
	End Class
	
	Dim r As New Rectangle() // Class Call
	// with in the class we can call and run the class from SUBMAIN() End Sub
	Class Box
		Public length As Double
		Public breadth As Double   
		Public height As Double
	End Class
 
 
// FUNCTION
	 Public Function GetArea() As Double
			GetArea = length * width
	 End Function
	 GetArea() //function call 
	 
	Function myFunction (ByVal n As Integer) As Double   // Pass by value // ByRef nSize As Integer
		Return 5.87 * n
	End Function
	 
//Function do not any return value
	Function name()
	End Function 
	 
// Application.DoEvents()
	Application.DoEvents() // Generally used in loops
//
 
// MESSAGE BOX
	MessageBox.Show("Important Points to be noted :" & vbNewLine & "1. Story data needs to be generated." _
	& vbNewLine & "2. Meshing Should be done wherever required" )
	
	 MessageBox.Show("Triangel is Missing " & i)
	 
// Progress bar
        ProgressBar1.Minimum = min
        ProgressBar1.Maximum = max
        ProgressBar1.Value = 500
        ProgressBar1.Update()
 
// Me.Controls.Add(ProgressBar1) // Generally no need check it !!
// Type of CHECK
	TypeOf item Is Integer // item =1 :: If (TypeOf item Is Integer) Then
	TypeOf item Is String
	TypeOf item Is DateTime
	   
// Try 
	Try   
		' Insert code to work with resource.  
	Finally   
		If resource IsNot Nothing Then  
			resource.Dispose()   
		End If  
	End Try  


 //DATA TABLES
	 Dim TABLENAME As New DataTable  		'' DATA TABLES !!!  // can declare outside main
	 dtpointassign.Columns.Add("Node_Number") // Add columns    // must define with in the main
	 table.Columns.Add(New DataColumn("Size", GetType(Integer))) // can aslod define in this fation
	 table.Rows.Add(25, "Indocin", "David", DateTime.Now)
	 dtCrtdElem.Rows(n).Item("Section") = 1  // Initilizing values to table
	 Dim row1 As DataRow = table.Rows(0)    // For Each row As DataRow In dtcrtdnodeorg.Rows
	 table.Rows.Remove(row)				   // Dim row As DataRow = table.Rows(0)  // memory donot Deletes
	 row.Delete()						   // Dim row As DataRow = table.Rows(0)  // memory Deletes
	 Console.WriteLine(row("Name"))         //  row = table.Rows(0)
	 Each item As Object In row1.ItemArray  // Dim row1 As DataRow = table.Rows(0)
 
 // 
	 Dim result() As DataRow = table.Select("Size >= 230 AND Sex = 'm'")//   table.Rows.Add(235, "f"c) // table.Rows.Add(100, "f"c) // c as char
	 Dim result() As DataRow = table.Select("Size >= 230 OR Sex = 'm'")
	 For Each row As DataRow In result   //  Console.WriteLine("{0}, {1}", row(0), row(1))

 // Get fields
  ' .
            Dim weight As Integer = row.Field(Of Integer)(0)
            Dim name As String = row.Field(Of String)("Name")
            Dim code As String = row.Field(Of String)(2)
            Dim date1 As DateTime = row.Field(Of DateTime)("Date")

             Console.WriteLine("{0} {1} {2} {3}", weight, name, code, date1) // 57 Koko A 6/10/2013 5:00:47 PM
//
	 table.Columns.Add("Patient", GetType(String))
	 Dim column As DataColumn = New DataColumn("Appointment", GetType(DateTime))
	 table.Columns.Add(column)
// column acess
	Console.WriteLine(table.Columns(0))
	Console.WriteLine(table.Columns("Dosage"))

			
			
// DataSet  :: set of DataTables
	 Dim set1 As DataSet = New DataSet("office")
	 set1.Tables.Add(table1)  // Dim table1 As DataTable = New DataTable("patients")
	 set1.Tables.Add(table2)  // Dim table2 As DataTable = New DataTable("medications")
	 Console.WriteLine(set1.GetXml())  //Visualize DataSet.
 
//Using. The Using resource acquisition statement can be used with the DataSet
	Using set1 As DataSet = New DataSet("office")
            ' Use set1 here.
	End Using
// NameSpace Prefix
	set1.Tables.Add(table1)
	set1.Namespace = "y" 
	set1.Prefix = "x"
	
// change data set
	 
	 Console.WriteLine(set1.DataSetName)  // Dim set1 As DataSet = New DataSet("office")
        set1.DataSetName = "unknown" // cam cjamge
		
			//Copy, Clear. The DataSet provides ways for you to copy the entire contents of it into another object.
        Dim set1 As DataSet = New DataSet("office")
        set1.Tables.Add(table1)
        set1.Tables.Add(table2)
		
		 Dim copy As DataSet = set1.Copy()
		 set1.Clear()
		 
		 // use of loop dataset
		  Dim collection As DataTableCollection = set1.Tables
        For i As Integer = 0 To collection.Count - 1
            ' Get table.
            Dim table As DataTable = collection(i)
            Console.WriteLine("{0}: {1}", i, table.TableName)
        Next
 
// DIM  ::  Dim originally (in BASIC) stood for Dimension 
// Data declerations
	  Dim b As Byte       // b=1
      Dim n As Integer    // n=123456;
      Dim si As Single    // si = 0.12345678901234566
      Dim d As Double     //  d = 0.12345678901234566
      Dim da As Date      // da = Today
      Dim c As Char
      Dim s As String     //
      Dim bl As Boolean
	  Dim exitButton As New System.Windows.Forms.Button
	  Dim radius, area As Single
	  
	  Dim Variable_name = New Point()= {}
	  ReDim Variable_name(10)
	  
	  Dim point() As Point = {}
      Dim m_Points() As PointF = {}
	  
	  Dim numbers(4) As Integer       // 1D
	  Dim numbers(4,4) As Integer 	  // 2D
	  Dim numbers(4,4,4) As Integer   // 3D
	  ReDim  numbers(15)			  // redimension with reseat
	  ReDim Preserve numbers(15)  	  // redimension with out reseat
	   
	  Dim nodes As New List(Of String)() // List   //   nodes.Add("1")
	   
	    Dim row_1 As DataRow = dt_AREA_CONN_TABLE.Rows(0) // Particular row can be save :p
	   
	   
// constant declearation
      Const maximum As Long = 1000
	  
// with 
	Module loops
	   Public Class Book
		  Public Property Name As String
		  Public Property Author As String
		  Public Property Subject As String
	   End Class
	   Sub Main()
		  Dim aBook As New Book
		  With aBook
			  .Name = "VB.Net Programming"
			  .Author = "Zara Ali"
			  .Subject = "Information Technology"
		  End With
		  With aBook
			  Console.WriteLine(.Name)
			  Console.WriteLine(.Author)
			  Console.WriteLine(.Subject)
		  End With
		  Console.ReadLine()
	   End Sub
	End Module
	  
// Array as Integer
	  Dim anArray() As Integer = {1, 3, 5, 7, 9}
	  Dim letters As Char() = {"H", "e", "l", "l", "o"}   //ARRAY CHARACTERS
	  Dim sarray() As String = {"Hello", "From", "Tutorials", "Point"}   // Console.write(sarry(0));
	  String.Join(vbCrLf, sarray)    //vbLf, vbcrlf or vbcr  //Lf stands for Line Feed  //Cr stands for Carriage Return
  

// String
	  Dim fname, lname, fullname, greetings As String  //  fname = "Rowan"
	  String.Join(vbCrLf, sarray)    /	 
	  Dim value2 As String = value1.Replace("XX", "Areo") // Replace string 
	  Dim s2 As String = "[STOP]" & _
            "TWO[STOP][STOP][STOP]" & _
            "THREE[STOP][STOP]"
			
// split	  
	 Dim words() As String = Split(readText, "TABLE:") // split works well
	 Dim words() As String = g.Split(New Char() {","c})//Character// split using dimilimiter //The "New Char" syntax is used to create 		
	 Dim arr As String() = SplitWords("That is a cute cat, man!") // Split as per space and ,
					Private Function SplitWords(ByVal s As String) As String()
								Return Regex.Split(s, "\W+")
					End Function
    Dim elements() As String =                          // REmove all commas   "cat,dog,,,fish" = cat dog fish
            value.Split(New Char() {","c},
                        StringSplitOptions.RemoveEmptyEntries)
	Split("42, 12, 19")  {"42," , "12," , "19"}

	Split("42, 12, 19", ", "){"42", "12", "19"}

	Split("42, 12, 19", ", ", 2){"42", "12, 19"}

	Split("192.168.0.1", "."){"192", "168", "0", "1"}

	Split("Alice and Bob", " AND "){"Alice and Bob"}

	Split("Alice and Bob", " AND ", ,CompareMethod.Text){"Alice", "Bob"}

	Split("someone@example.com", "@",1){"someone@example.com"}

	Split("someone@example.com", "@",2){"someone", "example.com"}

// Trim       string   The LTrim, RTrim, and Trim functions remove spaces from the ends of strings. 
       Console.WriteLine(writer.Trim)   //  Dim writer As String = "        MAN OF      THE MATCH          "
	   
// Datetime
	   Dim waiting As DateTime
	   Dim waiting As DateTime = New DateTime(2012, 12, 12, 17, 58, 1)  // year month date // house min sec
	   Dim chat As String = String.Format("Message sent at {0:t} on {0:D}", waiting)  // Imp
	   Dim thisDay As Integer = Microsoft.VisualBasic.DateAndTime.Day(Now)
	    Dim da As String = String.Format("{0:yyyy/MM/dd}", DateTime.Now)   //  2014/21/6

// String operations
	   Dim code_ref As String = "NULL"    // NULL
       Dim code_ref1 As String = ""		  // ""
	   String.Compare(str1, str2)   // returns 0 or -1  
	   str1.Contains("test")        //   false or true      	//    If str.Contains("TOP") = True Then
	   str1.Length                  // return the length sting including space
	   str1.Substring(5)            // Create a split of string starting after leaving 5 words
	   String.Concat(str1," ",str2) // String Concat 
	   out_path = in_path & "\" & only_file_name & ".mgt"  // in_path c:user/ 
	   ("""OBJECT GEOMETRY - POINT COORDINATES""").Length
	


// MOd b=2   (b/4)
	b Mod 4
	
// Conversion
	CBool()
	CChar()
	CInt()  ' CInt(b) // b ="6"
	Clng()
	CStr()


// Structure
	Structure Box
	Public length As Double           
	Public breadth As Double   
	Public height As Double
	End Structure



// Read write form console
	Console.write(" ")   // write on same line // Cursor continues !!!
	Console.WriteLine()  // First writes the line and gives then ENTER
	Console.WriteLine("Hello World")
	Console.WriteLine("Length: {0}", length)
	Console.WriteLine("a = {0}, b = {1}, c = {2}", a, b, c)
	Console.WriteLine(length)
	//
	 default value of "\r\n" or vbCrLf to "\r\n\r\n" or vbCrLf + vbCrLf.  //
		  Console.WriteLine("1) Split a string delimited by characters:" & vbCrLf)
	 
	message = Console.ReadLine  //   Dim message As String    Console.Write("Enter message: ")
	Conlole.ReadLine()
	Console.ReadKey()


// Length of array
	sarray.Length    //Dim sarray() As String = {"Hello", "From", "Tutorials", "Point"}

// Enum
	Enum Colors
	   red = 1
	   orange = 2
	   yellow = 3
	   green = 4
	   azure = 5
	   blue = 6
	   violet = 7
	End Enum

//  And Not Or
	And Not Or


// Using
	Using resource As New resourceType   
		' Insert code to work with resource.  
	End Using 


//IF
	If () Then
	End If

//If Else
	If () Then
		//
	Else
		//
	End If


//If ElseIf  Else
	If () Then
		//
	ElseIf () Then
		//
	Else
		//
	End If

// CASE
	Dim grade As Char
      grade = "B"
      Select grade
          Case "A"
              Console.WriteLine("Excellent!")
          Case "B", "C"
              Console.WriteLine("Well done")
          Case "D"
              Console.WriteLine("You passed")
          Case "F"
              Console.WriteLine("Better try again")
          Case Else
              Console.WriteLine("Invalid grade")
      End Select
	  
	  
// LOOPS...

// FOR
	For a = 10 To 20
	   Console.WriteLine("value of a: {0}", a)
	Next
	while
	For a = 10 To 20 Step 2
		  Console.WriteLine("value of a: {0}", a)
	Next

	  //
		 Dim anArray() As Integer = {1, 3, 5, 7, 9}
		 Dim arrayItem As Integer
		 
	For Each arrayItem In anArray
	   Console.WriteLine(arrayItem)
	Next

// WHILE
	 While a < 20
			  Console.WriteLine("value of a: {0}", a)
			  a = a + 1
	 End While
 
 

//Module   
	// Declares the name of a module and introduces the definition of the variables,
	// properties, events, and procedures that the module comprises.
	Public Module myModule
		Sub Main()
			Dim user As String = 
			InputBox("What is your name?") 
			MsgBox("User name is" & user)
		End Sub 
	End Module



 //  #Const Directive
	 #Const constname = expression
	   // IF
	 #Const age = True
	Sub Main()
	   #If age Then
		  Console.WriteLine("You are welcome to the Robotics Club")
	   #End If
	   Console.ReadKey()
	End Sub
	End Module
	   // If Else Else If
	Module mydirectives
	#Const classCode = 8

	   Sub Main()
	   #If classCode = 7 Then
			Console.WriteLine("Exam Questions for Class VII")
	   #ElseIf classCode = 8 Then
			Console.WriteLine("Exam Questions for Class VIII")
	   #Else
			Console.WriteLine("Exam Questions for Higher Classes")
	   #End If
			Console.ReadKey()

		End Sub
	End Module
 
 
// NEWLINE CONTINUE  _
	-
	Dim a As Integer
	a = 500 _
		+ 80 _
		+ 90
	
	
	
	
// General.................................................................
	Methods - 
	A method is basically a behavior. A class can contain many methods.
	It is in methods where the logics are written, data is manipulated and all the actions are executed.

	Instance Variables - 
	Each object has its unique set of instance variables. 
	An object's state is created by the values assigned to these instance variables.

	Sub Main()
		  Console.WriteLine("Hello World")
		  Console.ReadKey()
	End Sub
	
	
//
	Classes or Modules generally would contain more than one procedure. 
	Procedures contain the executable code, or in other words, they define the behavior of the class. 
	A procedure could be any of the following:

		Function

		Sub

		Operator

		Get

		Set

		AddHandler

		RemoveHandler

		RaiseEvent
		
		
	
	Exaples..............................................................................!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	
// WriteLine and use of Cstr()  // Conversion
	Module DataTypes
	   Sub Main()
		  Dim n As Integer
		  Dim da As Date
		  Dim bl As Boolean = True
		  n = 1234567
		  da = Today
		  Console.WriteLine(bl)
		  Console.WriteLine(CSByte(bl))
		  Console.WriteLine(CStr(bl))
		  Console.WriteLine(CStr(da))
		  Console.WriteLine(CChar(CChar(CStr(n))))
		  Console.WriteLine(CChar(CStr(da)))
		  Console.ReadKey()
	   End Sub
	End Module


// Pie
	Dim pi As Double
	pi = 3.14159

// File handeling    // File extension is just for windows
	Dim lines() As String  = File.ReadAllLines(file_name)  // OR lines() or line
	linesSAFE = File.ReadAllText(file_name)


	FileOpen()   // Open     // (define fiel number, file name, mode read write)
	PrintLine()  // write in file
	FileClose()  // Close

			FileOpen (1, "Hello.txt", OpenMode.Output)   // file at in side bin/Debug/Hello.txt // if not created it wil creat file automatically in bin/Debug
			PrintLine(1, "Hello World")
			FileClose(1)
			
			FileOpen (1, "Hello.txt", OpenMode.Output) //1 or  2 files open and diff name it  // creates to relative .EXE loaction HELLO.TXT
			FileOpen (1, "..\Hello.txt", OpenMode.Output) //..\ PUT FILE AT PREVIOUS FOLDER
			FileOpen (1, "c:\users\solidsnake\Desktop\Hello.txt", OpenMode.Output) // Defining file path
			
	 LineInput(2) //to read line   //Creats virtual cursor a line after other line !
			
		Console.WriteLine(LineInput(2))
		
	//Reading file till end of the file
		While Not EOF(2)
             		LineInput(2)	
        End While
		
	OpenMode.Ouput
	OpenMode.Input
	OpenMode.Append
 //End of file special marker in windows!!
 
 // Open all file in form  of string total file
         'Creats and write file 
        Dim createText As String = "Hello and Welcome" + Environment.NewLine
        File.WriteAllText("Hello.txt", createText)

        '  Opens and read the file
        Dim readText As String = File.ReadAllText("Hello.txt")
        Console.WriteLine(readText)

        ' Opens and appends the file
        Dim appendText As String = "This is extra text" + Environment.NewLine
        File.AppendAllText("Hello.txt", appendText)
	
	
	
//Write and read file using in same programm
	Using writer As System.IO.TextWriter = System.IO.File.CreateText("log.txt")
				writer.WriteLine("This is line one.")
				writer.WriteLine("This is line two.")
	  End Using
	  
	Using reader As System.IO.TextReader = System.IO.File.OpenText("log.txt")
				Dim line As String

				line = reader.ReadLine()
				Do Until line Is Nothing
					Console.WriteLine(line)
					line = reader.ReadLine()
				Loop
	  End Using
'''''''''''''''''''''''''''
//Gets file extensions !!!!!
	extension = Path.GetExtension(file_name) 
// Path // only file name // filename
	only_file_name = Path.GetFileNameWithoutExtension(file_name)
	in_path = Path.GetDirectoryName(file_name)

// Progress
   Process.Start(out_path) //outpath="c:/hi/file.mgt"
  
// Techniques............................................................................................


	Module strings
	   Sub Main()
		  Dim fname, lname, fullname, greetings As String
		  fname = "Rowan"
		  lname = "Atkinson"
		  fullname = fname + " " + lname
		  Console.WriteLine("Full Name: {0}", fullname)

		 'by using string constructor
		  Dim letters As Char() = {"H", "e", "l", "l", "o"}
		  greetings = New String(letters)
		  Console.WriteLine("Greetings: {0}", greetings)

		  'methods returning String
		  Dim sarray() As String = {"Hello", "From", "Tutorials", "Point"}
		  Dim message As String = String.Join(" ", sarray)
		  Console.WriteLine("Message: {0}", message)

		  'formatting method to convert a value 
		  Dim waiting As DateTime = New DateTime(2012, 12, 12, 17, 58, 1)
		  Dim chat As String = String.Format("Message sent at {0:t} on {0:D}", waiting)
		  Console.WriteLine("Message: {0}", chat)
		  Console.ReadLine()
	   End Sub
	End Module
	  
	  
// String split and remove spaces
	Dim TestString As String = "apple    pear banana  " 
	Dim TestArray() As String = Split(TestString)
	' TestArray holds {"apple", "", "", "", "pear", "banana", "", ""} 
	Dim LastNonEmpty As Integer = -1
	For i As Integer = 0 To TestArray.Length - 1
		If TestArray(i) <> "" Then
			LastNonEmpty += 1
			TestArray(LastNonEmpty) = TestArray(i)
		End If 
	Next 
	ReDim Preserve TestArray(LastNonEmpty)
	' TestArray now holds {"apple", "pear", "banana"}



// Replace and insert stringModule Module1
    Sub Main()
        ' Create new StringBuilder and initialize it.
        Dim builder As New StringBuilder("This is an example.")
        Console.WriteLine(builder)

        ' Replace string in StringBuilder.
        builder.Replace("This", "Here")
        Console.WriteLine(builder)

        ' Insert into StringBuilder.
        builder.Insert(0, "Sentence: ")
        Console.WriteLine(builder)
    End Sub
   End Module


// String Compare
        Dim str1, str2 As String
        str1 = "This is test"
        str2 = "This is text"
        String.Compare(str1, str2)
		
// String join    in array !!		
	 String.Join(vbCrLf, sarray)    //vbLf, vbcrlf or vbcr  //Lf stands for Line Feed  //Cr stands for Carriage Return
		

		vbCr : - return to line beginning
		Represents a carriage-return character for print and display functions.

		vbCrLf : - similar to pressing Enter
		Represents a carriage-return character combined with a linefeed character for print and display functions.

		vbLf : - go to next line
		Represents a linefeed character for print and display functions.
	
// Technique for loop 
	 Dim mc As MatchCollection = Regex.Matches(text, expr)
		  Dim m As Match
		  For Each m In mc
			  Console.WriteLine(m)
	 Next m
 
//  
 Sub showMatch(ByVal text As String, ByVal expr As String)
        Console.WriteLine("The Expression: " + expr)
        Dim mc As MatchCollection = Regex.Matches(text, expr)
        Dim m As Match
        For Each m In mc
            Console.Write(m)
            '  Console.WriteLine()
        Next m
    End Sub
    Sub Main()
        Dim str As String = "City/tname\t Add \t"
        showMatch(str, "(\w+)\t")
        Console.ReadKey()
    End Sub
	
	
	// Regex replacement
	 Public Sub Main()
        Dim pattern As String = "(\.)"
        Dim names() As String = {"Mr. Henry Hunt", "Ms. Sara Samuels",
                                  "Abraham Adams", "Ms. Nicole Norris", "mastan"}
        For Each name As String In names
            Console.WriteLine(Regex.Replace(name, pattern, String.Empty))
        Next
        Console.ReadKey()
    End Sub
	
	
//REGEX CHECK IT OUT
	    Sub showMatch(ByVal text As String, ByVal expr As String)
        Console.WriteLine("The Expression: " + expr)
        Dim mc As MatchCollection = Regex.Matches(text, expr)
        Dim m As Match
        For Each m In mc
            Console.Write(m)
            Console.WriteLine()
        Next m
    End Sub
    Sub Main()
        Dim str As String = "3+2^((1-3)*(3-1))"
        showMatch(str, "((  (?'Open'\() [^\(\)] *) +((?'Close-Open'\))[^\(\)]*)+)*(?(Open)(?!))$")
        Console.ReadKey()
    End Sub
	
	
// In between two words text Regex Sub Main()
        Dim text As String = "this is muzafar ali"
        Dim pattern As String = "\bthis(.*)ali\b?"

        ' Instantiate the regular expression object.
        Dim r As Regex = New Regex(pattern, RegexOptions.IgnoreCase)
        Dim m As Match = r.Match(text)

        Dim g As Group = m.Groups(1)
        Console.WriteLine("Group=" & g.ToString())
        Console.ReadKey()
    End Sub
	
// regex matches
	    If m.Success Then
            PrintLine(s, g.ToString())
        End If
		
// Replace string Regex
	    Sub Main()
        Dim input As String = "Hello    World   "
        Dim pattern As String = "\s+"
        Dim replacement As String = " "
        Dim rgx As Regex = New Regex(pattern)
        Dim result As String = rgx.Replace(input, replacement)
        Console.WriteLine("Original String: {0}", input)
        Console.WriteLine("Replacement String: {0}", result)
        Console.ReadKey()
    End Sub
	
	
	// Regex file handeling
	Sub Main()
        Dim fileReader As System.IO.StreamReader
        fileReader = My.Computer.FileSystem.OpenTextFileReader("C:\Users\midas\Documents\VISUALSTUDIO.txt")
        Dim stringReader As String
        stringReader = fileReader.ReadLine()
        MsgBox("The first line of the file is " & stringReader)
    End Sub
	
// File Write
	  Sub Main()

        FileOpen(1, "Hello.txt", OpenMode.Output)
        PrintLine(1, "Hello World")
        Dim input As String = ""

        While input.ToUpper <> "STOP"
            Console.Write("Enter : ")
            input = Console.ReadLine
            If input.ToUpper <> "STOP" Then
                PrintLine(1, input)
            End If

        End While
        FileClose(1)
        Console.ReadKey()
    End Sub
	
	
	
	// File Write // Append // Read // WriteEX
	Imports System.Text.RegularExpressions
	Imports System.IO
	Module Module1

		Sub Main()

			FileOpen(1, "Hello.f2k", OpenMode.Append)
			PrintLine(1, "Hello World")
			Dim input As String = ""

			While input.ToUpper <> "STOP"
				Console.Write("Enter : ")
				input = Console.ReadLine
				If input.ToUpper <> "STOP" Then
					PrintLine(1, input)
				End If

			End While
		 

			FileOpen(2, "Helloread.txt", OpenMode.Input)

			Dim filenum As Integer
			filenum = FreeFile()  ' for different file opening and printing all

			While Not EOF(2)
				Console.WriteLine(LineInput(2))
			End While
			FileClose(1)
			FileClose(2)
			Console.ReadKey()
		End Sub
	End Module



// Splitwords

	Module Module1
		Sub Main()
			' Declare iteration variable.
			Dim s As String

			' Loop through words in string.
			Dim arr As String() = SplitWords("That is a cute cat, man!")

			' Display each word.
			' ... Note that punctuation is handled correctly.
			For Each s In arr
				Console.WriteLine(s)
			Next
			Console.ReadLine()
		End Sub

		''' <summary>
		''' Split the words in string on non-word characters.
		''' This means commas and periods are handled correctly.
		''' </summary>
		Private Function SplitWords(ByVal s As String) As String()
			' Call Regex.Split function from the imported namespace.
			' ... Return the result array.
			Return Regex.Split(s, "\W+")
		End Function

	End Module


// Two strings check
        Dim str1 As String = "this is muzafar ali khan"
        Dim str2 As String = "muzafar"
        Console.WriteLine(str1.Contains(str2))
		
		
		
// String Seperator
       Dim s1 As String = ",ONE,,TWO,,,THREE,,"
        Dim s2 As String = "[STOP]" & _
            "TWO[STOP][STOP][STOP]" & _
            "THREE[STOP][STOP]"
        Dim charSeparators() As Char = {","c}
        Dim stringSeperators() As String = {"[STOP]"}
        Dim results() As String
        Dim result() As String
        result = s1.Split(charSeparators, StringSplitOptions.RemoveEmptyEntries)
        results = s2.Split(stringSeperators, StringSplitOptions.RemoveEmptyEntries)
		
		 result = s1.Split(charSeparators, 9, StringSplitOptions.None)
		 
        For i = 0 To results.Length - 1
            Console.WriteLine(results(i))
        Next
        Console.ReadKey()
		
// StringImports System

Class Sample
    Public Shared Sub Main() 
        Dim s1 As String = ",ONE,,TWO,,,THREE,,"
        Dim s2 As String = "[stop]" & _
                           "ONE[stop][stop]" & _
                           "TWO[stop][stop][stop]" & _
                           "THREE[stop][stop]"
        Dim charSeparators() As Char = {","c}
        Dim stringSeparators() As String = {"[stop]"}
        Dim result() As String
        ' ------------------------------------------------------------------------------
        ' Split a string delimited by characters.
        ' ------------------------------------------------------------------------------
        Console.WriteLine("1) Split a string delimited by characters:" & vbCrLf)

        ' Display the original string and delimiter characters.
        Console.WriteLine("1a )The original string is ""{0}"".", s1)
        Console.WriteLine("The delimiter character is '{0}'." & vbCrLf, charSeparators(0))

        ' Split a string delimited by characters and return all elements.
        Console.WriteLine("1b) Split a string delimited by characters and " & _
                          "return all elements:")
        result = s1.Split(charSeparators, StringSplitOptions.None)
        Show(result)

        ' Split a string delimited by characters and return all non-empty elements.
        Console.WriteLine("1c) Split a string delimited by characters and " & _
                          "return all non-empty elements:")
        result = s1.Split(charSeparators, StringSplitOptions.RemoveEmptyEntries)
        Show(result)

        ' Split the original string into the string and empty string before the 
        ' delimiter and the remainder of the original string after the delimiter.
        Console.WriteLine("1d) Split a string delimited by characters and " & _
                          "return 2 elements:")
        result = s1.Split(charSeparators, 2, StringSplitOptions.None)
        Show(result)

        ' Split the original string into the string after the delimiter and the 
        ' remainder of the original string after the delimiter.
        Console.WriteLine("1e) Split a string delimited by characters and " & _
                          "return 2 non-empty elements:")
        result = s1.Split(charSeparators, 2, StringSplitOptions.RemoveEmptyEntries)
        Show(result)

        ' ------------------------------------------------------------------------------
        ' Split a string delimited by another string.
        ' ------------------------------------------------------------------------------
        Console.WriteLine("2) Split a string delimited by another string:" & vbCrLf)

        ' Display the original string and delimiter string.
        Console.WriteLine("2a) The original string is ""{0}"".", s2)
        Console.WriteLine("The delimiter string is ""{0}""." & vbCrLf, stringSeparators(0))

        ' Split a string delimited by another string and return all elements.
        Console.WriteLine("2b) Split a string delimited by another string and " & _
                          "return all elements:")
        result = s2.Split(stringSeparators, StringSplitOptions.None)
        Show(result)

        ' Split the original string at the delimiter and return all non-empty elements.
        Console.WriteLine("2c) Split a string delimited by another string and " & _
                          "return all non-empty elements:")
        result = s2.Split(stringSeparators, StringSplitOptions.RemoveEmptyEntries)
        Show(result)

        ' Split the original string into the empty string before the 
        ' delimiter and the remainder of the original string after the delimiter.
        Console.WriteLine("2d) Split a string delimited by another string and " & _
                          "return 2 elements:")
        result = s2.Split(stringSeparators, 2, StringSplitOptions.None)
        Show(result)

        ' Split the original string into the string after the delimiter and the 
        ' remainder of the original string after the delimiter.
        Console.WriteLine("2e) Split a string delimited by another string and " & _
                          "return 2 non-empty elements:")
        result = s2.Split(stringSeparators, 2, StringSplitOptions.RemoveEmptyEntries)
        Show(result)

    End Sub 'Main


    ' Display the array of separated strings.
    Public Shared Sub Show(ByVal entries() As String) 
        Console.WriteLine("The return value contains these {0} elements:", entries.Length)
        Dim entry As String
        For Each entry In  entries
            Console.Write("<{0}>", entry)
        Next entry
        Console.Write(vbCrLf & vbCrLf)

    End Sub 'Show
End Class 'Sample

// String and or  Dim strMyString As String = "Something1 as nothing is somthing2"
// AND
	If strMyString.Contains("Something") And strMyString.Contains("something2") Then
			 Console.WriteLine("in the IF")
	End If
	// OR
	If strMyString.Contains("Something") And strMyString.Contains("something2") Then
			 Console.WriteLine("in the IF")
	End If

// Delete file check
	Dim FileDelete As String

	FileDelete = "C:\testDelete.txt"
	 If System.IO.File.Exists( FileDelete ) = True Then
	   System.IO.File.Delete( FileDelete )
	   MsgBox("File Deleted")
	End If

// DATA TABLE  PRINT 

                For Each row As DataRow In dtarea_ele_pass.Rows
                    For c = 0 To 10
                        Console.WriteLine(row.Field(Of String)(c))
                    Next
                Next
				
///   Error Handeling 
	// CONSTRUCTOR  
	Dim object as new class    // Very important   // in object underine error // New defines new object    // new only in class contains constructor
	
// DIMENSION	 CHANGINE AS PER REQURIMENT 
ReDim Preserve parts(lastnonempty)	    // lastnonempty=5