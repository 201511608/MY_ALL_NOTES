C++...............................
// CONTENT
1  // C++  Naming Conventions
2  // DEEP COPY VS SHALLOW COPY
3  //
4  //
5  //
6  //

// :: 1
///////////////////////////////////////////////////////
// C++  Naming Conventions

1> CamelCase  :WordPerfect
-> cryptic Example : Dog d  Lion l
-> Descriptive    :  Dog myPetDog   Lion escaped Lion

-> Class Names  [Start with Upper case, Upper latter as saperator, No underscores '_']
	->class OdeSolver
	->class ParamerFile
	->class FluidOz          NOT FluidOZ
	->class NetworkAbcKey    NOT NetworkABCKey

-> Method and Function Names
	->Get()
	->Set()
	->HasHitRetryLimit()
	->HandleError()
	->Max(), ReturnMax()

-> Pointer Variables  [ prepend with 'p'  Place the * close to variable name]
	-> String *pName = New String;
	-> String *pName, name, address  // Note only pName is pointer

-> Class Attribute Names
	-> Private  [prepend with m]
		-> private:
				int mCleanHouse;
				int mErrorNumber;
				String *mpName;    // Note  pName  -> mpName  //Private

->Reference Variables  and Function Returning References   [ prepended with 'r' ] // Modifiable Object
	->StatusInfo& rStatus  // if Private  -> mrStatus  
	->Void  TestConveyorStart(StatusInfo& rStatus);
	
->Global Constants [in cpas  and '_' saperators]
	->const double TWO_PI = 6.143

->Static Variables [prepended with 's']
	->static sStatus;
	
// 2
/////////////////////////////////////////////////////////////////////////////
// DEEP COPY VS SHALLOW COPY

//
//Online Compiler
// https://www.jdoodle.com/online-compiler-c++

In c++ function or Class writing above or Below Matters a lot !
Heriarchy matteres :: Above function cannot call below function !!
CString is from MFC
String is from C++

//Inline
// Inline member functions (C++ only) ... 
 A member function that is defined inside its class member
  list is called an inline member function.
 The inline functions are a C++ enhancement feature 
to increase the execution time of a program.

// NULL 	// NULL is a pointer    // 0 // NULL is ASKII ?? // int x = NULL            output : 0
// nullptr  // nullptr is a pointer // nullptr is a keyword  // int *ptr = nullptr;		output : 0

using namespace std;
#include <iostream>   // for cout cin
#include <string>     // for using string
#include <sstream>    // to print string in cout!!  // getline(cin, yours.title);
//////////////////

// MACROS
// http://www.geeksforgeeks.org/cc-preprocessors/
//

    PREPROCESSORS                  COMPILER                     LINKER
 FIEL.C -> EXPANDED SOURCECODE[FILE.I] -> OBJECTS CODE[PROGRAM.OBJ]->EXECUTABLE FILE [PROGRAM.EXE]

PREPROCESSOR DIRECTIVES
	MACROS
	FILE INCLUSION
	CONDITIONAL
	OTHER
// no semi-colon(‘;’) at the end of macro definition
# define LIMIT 10
# define AREA(L,B) (L*B)
#define __AREA(l,b) (l*b)
#define AREA2(L,B) (L-B)
// The ‘<‘ and ‘>’ brackets tells the compiler to look for the file in standard directory.
#include< file_name > // STANDARD DIRECTORY
#include"filename"		// ANY DIRECTORY AS PER WE DEFINE
// compile a specific portion of the program or to skip compilation of some specific part of the program based on some conditions
#ifdef macro_name
    statement1;
    statement2;
	.
#endif


// #pragma  Directive: This directive is a special purpose directive and is used to turn on or off some features.
#pragma 
#pragma startup   //  void __attribute__((constructor)) func1();
#pragma exit      // void __attribute__((destructor)) func2();
#pragma once     // current source file to be included only once in a single compilation
#pragma region 
#pragma endregion

// ‘ is defined then the block of statements will execute normally but if it is not defined, the compiler will simply skip
#ifdef
#ifndef
#endif

///////////////////
// ??
nullptr_t x ,y;  // x and y equal to  nullptr
CHAR
char c[10] = "Muzafar"; 	    	// It asignes single by single a[0] ='m' .....
c[10] = "Muzafar";		  		    // Error it can't assign // assign by a[0] ='m' .. then valid


CONVERT CONVERTION
//Float to Intlfloat f = 12.345;
float f = 12.345;
int i = (int)f;

  D:\Design+_GUI\src\DPLUS_EC\DPLUS_ECRes.h(709):#define IDR_GURGW_MENU_SUB              17032


TYPEDEF
// alias is a different name by which a type can be identified 
// substitute name;
typedef char C;     	C a[10];C b[10]; // C = char
typedef char * part;    part a; part b;  // part = *part;     //  *part type char
typedef char field[10]; field f1,f2;     // field = field[10] 


//Typedef structures
	typedef 
		struct defstruct{
		int a;
		int b;
		char c[10][10];
		string str;

	}A,AA,AAA;     // A,AA,AAA,defstruct



or 
USING // same as TYPEDEF
using C = char;
using WORD = unsigned int;
using pChar = char *;



ENUM   Enumerated types (enum) 		//types that are defined with a set of custom identifiers
enum colors {black,red,green}; 		// black =0 ;red =1 ....
enum colors {black,red,green=101};  // 0 1 101  //can define value in between
enum colors {black=100,red,green};  // 100 101 102  // starting value gets on increse


// Class
// This constructor function is declared just like a regular member function,
// but with a name that matches the class name and without any return type; not even void.
class Rectangle {
    int width, height;   // This value must Declare through constrictor  or function !  // Default Private
  public:
    Rectangle (int,int);    			// NO need of even Voide
	Rectangle();  // Cross check this function !
}
Rectangle::Rectangle (int a, int b) {   // NO need of even Voide  /Constructor
  width = a;
  height = b;
}
// over load function
Rectangle::Rectangle () {   // NO need of even Voide
  width = 10;
  height = 20;
}

// Call
Rectangle rect (3,4);
Rectangle rectb (5,6);
Rectangle rectc;      // Default constructor called  !!!!!!!!!!!!!!!!!

Rectangle rectb;   // ok, default constructor called   Rectangle();
Rectangle rectc(); // oops, default constructor NOT called    ????

Rectangle rectb;   // default constructor called  i,e 
Rectangle rectc(); // function declaration (default constructor NOT called)  // I gues function declared in class but not defined ??? // not to use
Rectangle rectd{}; // default constructor called 

//2 constructors can also be called with other syntaxes:
class Circle {
    double radius;
public:
    Circle(double r) { radius = r; }
};
int main () {
  Circle foo (10.0);   // functional form
  Circle bar = 20.0;   // assignment init
  Circle baz {30.0};   // uniform init
  Circle qux = {40.0}; // POD-like
}

//3
class Circle
{
	double radius;
	double width, height;
public:
	Circle(double d, double y);
	Circle(double r) { radius = r; cout << endl << "Circle(double r)"; }
	Circle() { radius = 1000; cout << endl << "Circle()"; }
};
//Class pointer
	Circle *C11;
	C11 = new Circle(); // Calls default circle() function
	class Circle() // defines the circle funtion // Dosent call default Circle()
	Class c1; // Calls default  Circle() function

//Definig of Constructors
Circle::Circle(double x, double y) {width =x;heigth =y;};   // Defining Same Constructor type 1
Circle::Circle(double x, double y) : width(x){heigth =y;};  // Defining Same Constructor type 2
Circle::Circle(double x,double y) :width(x*y),height(y) {}; // Defining Same Constructor type 3





VIRTUAL FUNCTION
// Virtual functions allow us to create a LIST of base class pointers and call methods of 
// any of the DERIVED CLASSES without even knowing kind of derived class object. 
// Method

class Base
{
public:
    virtual void show() { cout<<" In Base \n"; }
};

class Derived: public Base
{
public:
    void show() { cout<<"In Derived \n"; }
};

int main(void)
{
    Base *bp = new Derived;  // Base class points to Derived Class //if not vitual it will show base class
    bp->show();  // RUN-TIME POLYMORPHISM
    return 0;
}
//out put :: 
 In Derived
 
 
 
 
 
 
 // STUCUTRES
 // structures are used for grouping together elements with dissimilar data types !!!
 struct anyname {
 datatype name;
 datatyep name[3]={1, 2, 3};
 datatype name1[10]; // ARray can define
 datatype name2[10][10];
 datatype name = 2; // can define value too
 };
 
// string of structures
 struct movie {
	string title;
	int year;
}movie1[3];  

 //Defineg and calling
 struct anyname anyname1,anyname2...;
 anyname anyname1,anyname2...; // c++ no need of string name
 
 // sturct wth no name must define at end only one sturct can define
 struct  {
 char name1[10]; // ARray can define
 datatype name = 2; // can define value too
 } A1, A2 ;   // but in c only one A1 no A2
 
 A1.name =10;
 A2.name1[10]="muzafaralikhan";  //if not works use    strcpy(datatypename,"sting")
 strcpy(name1.c, "muzafaralikhan");
 
 cout << "value of B.title : " << B.title; getchar();  // to take the value from screen whole command
 getline(cin,A.title ); // to take value from screen
 getline(cin, pmovie->title);  //to value for pointer
 
 struct anyname *pointer name;  // Define sturct as a pointer  
 anyname *e1,e2; e1=&e2;   // Very important   After doing this below things will get access
 e1->name1[2] = 10 ; Assign the value to the pointer valeu
 e1->name1[2]   // Display value form pointer
 
(*e1).name1[2]  // can also use to print out and take value   //Ex	(*pmovie).year = 10;
 
 e1->name1[2]++  // To increment
 
Expression	What is evaluated	Equivalent
a.b	Member b of object a	
a->b	Member b of object pointed to by a	(*a).b
*a.b	Value pointed to by member b of object a	*(a.b)  // pointing to the addreess value b directly form that clling b error // b adress to b error



//vector  vectors ..............................................................................................
#include <vector>
vector<int> matrix1d(5, 0); // 5 row and value=0
vector<vector<int>> matirx2d(5, vector<int>(6, 0));  // 5 row  and 6 column and value =0
vector<vector<vector<int> > > vec (M,vector<vector<int> >(N,vector <int>(P,x)));
//row column inside inside
vector<double>v1(100);

vector<int> first;
first.assign(7,100); // Assign   || Assigning 7 ints with a value of 100


//push_back
vector<double>v1
v1.push_back(value)//v1.push_back(10)  

v[1][0].push_back(13);
//Ex  std::vector<int> myvector;
  for (int i=1; i<=5; i++) myvector.push_back(i);

vector<int> first;
first.begin() // 
first.end()   
first.size()

vector<vector<int>> v2d;  // 2D vector
// VECTOR 2D 3D 4D
	vector<int> matrix1d(5, 0);  // 1D
	vector<vector<int>> matirx2d(5, vector<int>(6, 0));   // 2D    matrix2d[0][1] = 13;
	vector<vector<vector<int>>> matrix3d(3, vector<vector<int>>(6,vector<int>(10,0)));  // 3D  matrix3d[0][0][1] = 13;
	vector<vector<vector<vector<int>>>> matrix4d(3, vector<vector<vector<int>>>(6, vector<vector<int>> (10, vector<int>(20, 0)))); // 4D

//Techniques  vector  vectors................................
#include <vector>
	vector<double>v1;
	v1.assign(100, 1);
	vector<double>v1(100);
	vector<double>::iterator it;
	it = v1.begin();
	it = v1.end();
	
//2D vectorint no_of_cols = 5;
int no_of_rows = 10;
int initial_value = 0;

// Vector Method of initializing
std::vector<std::vector<int>> matrix;
matrix.resize(no_of_rows, std::vector<int>(no_of_cols, initial_value));


// Read from matrix.
int value = matrix[1][2];

// Save to matrix.
matrix[3][1] = 5;

//push 2d
vector<vector<int>> matirx2d;
matirx2d.push_back({2,2,5,6});   // push in 2d or any row and size a   ex  push(2,3) push(2,3,4)

// .. .. .. . . ./..........................................................................
std::vector<int> myvector;
  for (int i=1; i<=5; i++) myvector.push_back(i);

// ITERATOR
// Returns an iterator pointing to the first element in the vector.

vector<double>::iterator it;  // Returns pointer !!
it = v1.begin();
cout << *it ;
it = v1.end()-1;
cout << *it << endl;
 
// vector resize
    vector <vector<int>> v;
    v.resize(col,vector<int>(row)); // Default value to  zero
	v.resize(col,vector<int>(row,intial_value));
	 
//SIZE()
	 vector<vector<int>> matirx2d(3, vector<int>(6, 0)); 
	 matrix2d.size() 	// show row size  i.e 3
	 matrix2d[0].size() // show column size  i.e 6
	 

	
	vector<vector<vector<int>>> matrix3d(3, vector<vector<int>>(6, vector<int>(10, 0)));
	std::cout << "0. size: " << matrix3d.size() << '\n';   // 3
	std::cout << "0. size: " << matrix3d[0].size() << '\n'; // 6
	std::cout << "0. size: " << matrix3d[0][0].size() << '\n';  // 10
	 
	 // EMPTY
	 myvector.empty() // CHECK EMPTY OR NOT RETURN TRUE OR FALSE
	 
	 // CLEAR  
myvector.clear();  // Removes all elements from the vector (which are destroyed), leaving the container with a size of 0.

	 // INSERT

	myints.insert(myints.end(), 20, 100); // MUST DEFINE ADDRESS   NEW 20 ELEMENT  myints.insert(myints.end()-5, 20, 100)
	std::cout << "2. size: " << myints.size() << '\n';

	

// POP_BACK()   // REMOVE ONE FROM BACK
	 myints.pop_back();
	std::cout << "3. size: " << myints.size() << '\n';
	
// SIZE()    
	std::vector<int> myints;
	std::cout << "0. size: " << myints.size() << '\n';

	
// QUEUE  :FIFO context (first-in first-out)
	queue<int> myqueue;
	
	
	
// Math

// Pow
	pow(a,2)  // a square
	
	
	
	
	
	
// this
// Access the constructor Variable value  (this -> variable)
	
//Ex
#include<iostream>
using namespace std;
class Test
{
	int a;
public:
	Test() { a = 100; }

	// Local parameter ‘a’ hides object’s member
	// ‘a’, but we can access it using this.
	void func(int a) { cout << this->a << " " << a; }  
};

int main(void)
{
    
Test obj;
obj.func(999);

return 0;
}
// output
// 100 " " 999
	
	
	
	
	
// ::
// scope resolution operator :: 
//We can access the Global variable (::Variable)
// And also to define funcition out side a Class  Ex    void A::fun(){};
// :: can be used to access static
// Multiple Inheritance	
http://www.geeksforgeeks.org/scope-resolution-operator-in-c/


//Ex   Global access
#include<iostream> 
using namespace std;

// Global x
int x=100; 
//
int main()
{
int x = 10; // Local x
cout << "Value of global x is " << ::x;
cout << "\nValue of local x is " << x; 
cout << endl<< a;
return 0;
}
	
	
	
//Ex   static access 	
#include<iostream>
using namespace std;
class Test
{
    static int x;  
public:
    static int y;   
 
    // Local parameter 'a' hides class member
    // 'a', but we can access it using ::
    void func(int x)  
    { 
       // We can access class's static variable
       // even if there is a local variable
       cout << "Value of static x is " << Test::x;
       cout << "\nValue of local x is " << x;  
    }
};

int Test::x = 1; // In C++, static members must be explicitly defined  // like this
int Test::y = 2; // Even it is private or public   // if private we can't access from out side, we can just define;
  
int main()
{
    Test obj;
    int x = 3 ;
    obj.func(x);
    cout << "\nTest::y = " << Test::y;
    return 0;
}
	
	
	
//Ex     Multiple inheritance.
#include<iostream>
using namespace std;
class A
{
protected:
    int x;
public:
    A() { x = 10; }
};
class B
{
protected:
    int x;
public:
    B() { x = 20; }
};
class C: public A, public B
{
public:
   void fun()
   {
      cout << "A's x is " << A::x;       // Access of Class A x
      cout << "\nB's x is " << B::x;	 // Access of Class B x
   }
};
int main()
{
    C c;
    c.fun();
    return 0;
}


	
	
	
	
	
// Techniques All,.....................................................................................................................................
//////////////////////////////////////////////////////////////////////////////////////////////////

cout << " (" ; // want to print brackets


//infinite loop
for(;;){};

// String
    string mystr ;
    cout << "Enter title: ";
	getline(cin, pmovie->title);  // Pointer Base !
	
	string mystr;
	cout << "Enter year :";
	getline(cin, mystr);
(stringstream)mystr >> pmovie->year;  // string to number   //year is int;


//Difference i++ and ++i  
// i++ = i=i+1  //Retrun old value		
// ++i=i+1   //Returns new increment value
i++ -> Assign -> increment
++i -> increment -> Assign

	int i = 1;
	int j = ++i; //  i returns increase value
	cout<< endl<< "i:" << i << "  j:" << j;  // i:2  j:2
	
	i = 1;
	j = i++; // i returns old value and then increments // dosent returns new increment value
	cout << endl << "i:" << i << "  j:" << j;// i:2  j:1
	
	i = 1;
	i++;
	j = 1;
	++j;
	cout << endl << "i:" << i << "  j:" << j;// i:2  j:2
	
	i = 1; i = i++;
	j = 1; j = ++j;
	cout << endl << "i:" << i << "  j:" << j;// i:2  j:2
	
	
// Iterator 
vector<double>::iterator it;
vector<double>v1;
	for (it = v1.begin(); it != v1.end(); ++it)
	{
		cout << "V1 is the Value: " << *it << endl;
	}

	
// 3D MATRIX IN TERMS OF MATLAB 3D SHOW AS LAYERS PROGRAM + Diff shows ............... 
	vector<int> matrix1d(5, 0);
	vector<vector<int>> matirx2d(3, vector<int>(6, 0));
	vector<vector<vector<int>>> matrix3d(3, vector<vector<int>>(6,vector<int>(10,0)));
	vector<vector<vector<vector<int>>>> matrix4d(3, vector<vector<vector<int>>>(6, vector<vector<int>> (10, vector<int>(20, 0))));
	matirx2d[2][3] = 6;
	for (int i= 1; i <= 10; i++)
	{
		matrix3d[0][0][i-1] = i;
		matrix3d[2][5][i - 1] = i*10;
	}

	for (int k = 0; k < 10; k++)
	{
		cout << endl;
		for (int i = 0; i < 3; i++)
		{
			cout << endl;
			for (int j = 0; j < 6; j++)
				{
					cout <<" " <<matrix3d[i][j][k];
				}
		}
	}

	cout << endl << endl;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 6; j++)
			{
				cout << endl;
				for (int k = 0; k < 10; k++)
				{
				cout << " " << matrix3d[i][j][k];
			}
		}
	}

		cout << endl << endl;
		cout << "{";

		for (int i = 0; i < 3; i++){
			cout << "{";
			for (int j = 0; j < 6; j++)
			{
				cout << endl<<"{";
				for (int k = 0; k < 10; k++)
				{
					cout << " " << matrix3d[i][j][k];
				}
				cout << "}";
			}
			cout << "}";
		}

		cout << "}";

	
// ............................... 
// vector function takes vector address
nline int& set_elem(vector<int>& m_, size_t i_, size_t j_, size_t k_)
{
    // you could check indexes here e.g.: assert in debug mode
    return m_[i_*N*P + j_*P + k_];
}


// Class cauling other class and calling functionsclass Circle
class circle
{
	double radius;
	double width, height;
public:
	Circle(double d, double y);
	Circle(double r) { radius = r; cout << endl << "Circle(double r)"; }
	Circle() { radius = 1000; cout << endl << "Circle()"; }
};

Circle::Circle(double x,double y) :width(x*y),height(y) {};


class rectangle {
	double height;
	Circle Cir1;
public:
	rectangle(double r, double h) :Cir1(h), height(h) { };
};


//

<< insertion operator
>> extraction operator 

cin >>> number1 >> number2;  // Left to Right assigned

int m =10;
cout << ::m // Call global m ,not localecon
setw(5) // Provide spaces p.no 50




// Friend Class 
// A friend class in C++ can access the private and protected members of the class in which it is declared as a friend.
// Friendship is not inherited
// Friendship is not mutual. If a class A is friend of B, then B doesn’t become friend of A automatically.

// Example
// 1 B wanna access A private Data
// 2 put B as friend class in A  :: so that it can access A data
// 3 call data of a using ADDRESS operator  (ex void function(A &x) | object x | x.a)
#include <iostream>
class A 
{
private:
	int a;
public:
	A() { a=0; }
	friend class B;	  // Friend Class 				// 2
};

class B 											// 1
{  
private:
	int b;
public:
	void showA(A& x)  								// 3
	{   // For Class Address varible  SYNTAX  !!!
		// Since B is friend of A, it can access
		// private members of A
		std::cout << "A::a=" << x.a;
	}
};

int main() {
A a;
B b;
b.showA(a);
return 0;
}

//FRUEBD FUNCTION
//FRIEND FUNCTION OF FUNCTION IE GLOBAL FUNCTION
//Friend Function Like friend class, a friend function can be given special grant
// to access private and protected members.

//Example 2 	GLOBAL FRIEND      A global function
// Function access to class  ???  ->  Such that i can call function directly {that get access to calss}
#include <iostream>
using namespace std;

class B;
class A
{
public:
int a =100;
friend void show(A& x) ;   							// 2    
};

void show(A& x) 									// 1   //3
{
	std::cout<< " show : "<< x.a;
}  	


int main()
{
	A a;
	// Since showA() is a friend, it can access
    // private members of A
	// Global function .. Function calling the class data.. so call direct function !!
	// friend function accessed the data of class A; 
		show(a); 
	return 0;
}

//FRIEND FUNCTION  OF CLASS
//Example 3 		FRIEND    A method of another class
// Function accessing to other class function
#include <iostream>
using namespace std;

class B;
class A        
{
    public:
    void showB(B& x);
};


class B
{
    int b;
    public:
    B(){b=0;}
    friend void A::showB(B& x); // 2 AFunction FriendFunctionin B i:e AFunction  access B data
};

void A::showB(B& x)         // 1 Wanna access B data   // 3 Call  Using Address
{
    std::cout<<"B::b  : " <<x.b;
};

int main()
{
	A a;
B b;
a.showB(b);
	return 0;
}


//Address of the Variable
int myvar = 25;
int *foo = &myvar;      // Store Address of myvar
int bar = myvar;		// Store Value   of myvar




//////////////
//Swapping Program

using namespace std;
int main()
{
	// Declaring first vector
	vector<int> v1;
	int i;

	for (i = 0; i < 10; ++i) {
		v1.push_back(i);
	}
	// v1 contains 0 1 2 3 4 5 6 7 8 9

	vector<int>::iterator i1, i2;

	i1 = v1.begin();
	i2 = v1.end() - 1;

	// Performing swap between first and last element
	// of vector
	for (i=1;i<=v1.size()/2 -1 ; i++)
	{
			std::iter_swap(i1++, i2--);
	}


	// Displaying v1 after swapping
	for (i = 0; i < 10; ++i) {
		cout << v1[i] << " ";
	}

	return 0;
}


/////////////////
// Static  . Same variable for all OBJECTS of that same class [ check example]
// Member of a class as static it means no matter how many objects of the class are created,
// there is only one copy of the static member.
// A static member is shared by all objects of the class
// Static int 
https://www.tutorialspoint.com/cplusplus/cpp_static_members.htm

#include <iostream>
using namespace std;
class Box {
   public:
      static int objectCount;
      
      // Constructor definition
      Box(double l = 2.0, double b = 2.0, double h = 2.0) {
         cout <<"Constructor called." << endl;
         length = l;
         breadth = b;
         height = h;
         
         // Increase every time object is created
         objectCount++;
      }
      double Volume() {
         return length * breadth * height;
      }
      
   private:
      double length;     // Length of a box
      double breadth;    // Breadth of a box
      double height;     // Height of a box
};

// Initialize static member of class Box
int Box::objectCount = 0;

int main(void) {
   Box Box1(3.3, 1.2, 1.5);    // Declare box1
   Box Box2(8.5, 6.0, 2.0);    // Declare box2
   Box Box3(8.5, 6.0, 2.0);    // Declare box2

   // Print total number of objects.
   cout << "Total objects: " << Box::objectCount << endl;

   return 0;
}
// output 
// Total objects: 3


// Class Example

#include <iostream>
using namespace std;

class Base //1
{
public:
 virtual void show() { cout<<" In Base \n"; }
 virtual void show_new() {cout << "show_new_Base Class \n";}
};

class Derived: public Base  //2
{
public:
	virtual void show() { cout<<"In Derived \n"; }
	 virtual void show_new() {cout << "show_new_Derrived Class \n";}
};

class Derived2 : public Derived
{
public:
virtual void show() { cout<< "In Derived2 \n";}

};

int main(void)
{
	Derived *bp = new Derived2;
	bp->show(); // RUN-TIME POLYMORPHISM
	bp->show_new();
	
	return 0;
}

// Class up down Base Derived call Examples
#include <iostream>
using namespace std;

class Base //1
{
public:
 virtual void show() { cout<<" In Base \n"; }
 virtual void show_new() {cout << "show_new_Base Class \n";}
};

class Base2 //1
{
public:
 virtual void show() { cout<<" In Base2 \n"; }
 virtual void show_new() {cout << "show_new_Base2 Class \n";}
};


class Derived: public Base  //2
{
public:
	virtual void show() { cout<<"In Derived \n"; }
	 virtual void show_new() {cout << "show_new_Derrived Class \n";}
};


class Derived2 : public Derived
{
public:
virtual void show() { cout<< "In Derived2 \n";}
void show_Derived2(){cout<< "derived2 show function";}
};

class Derived3 : public Base, public Base2
{
    public:
    void show(){ cout<< "Derived3 class\n";}
};
int main(void)
{
	Derived *bp = new Derived2;
	Derived2 D2;
//	bp->show_Derived2();  // Error cause no show_derived2 function in Derived class
	bp->Base::show();
	bp->Derived::show();
	D2.Base::show_new();
	D2.Derived::show_new();
	D2.Derived2::show();
	bp->show(); // RUN-TIME POLYMORPHISM
	bp->show_new();
	
	Derived3 D3;
	D3.show();
	D3.Base2::show();
	return 0;
}

/// 

// STATIC    eX TO COUNT CLASS CALL COUNT JUST SIMPLE EXAMPLE
// https://www.tutorialspoint.com/cplusplus/cpp_static_members.htm
//
#include <iostream>
 
using namespace std;

class Box {
   public:
      static int objectCount;
      
      // Constructor definition
      Box(double l = 2.0, double b = 2.0, double h = 2.0) {
         cout <<"Constructor called." << endl;
         length = l;
         breadth = b;
         height = h;
         
         // Increase every time object is created
         objectCount++;
      }
      double Volume() {
         return length * breadth * height;
      }
      
   private:
      double length;     // Length of a box
      double breadth;    // Breadth of a box
      double height;     // Height of a box
};

// Initialize static member of class Box
int Box::objectCount = 0;

int main(void) {
   Box Box1(3.3, 1.2, 1.5);    // Declare box1
   Box Box2(8.5, 6.0, 2.0);    // Declare box2

   // Print total number of objects.
   cout << "Total objects: " << Box::objectCount << endl;

   return 0;
}


//
// STATIC FUNCTION
// https://www.tutorialspoint.com/cplusplus/cpp_static_members.htm
// static functions are accessed using only the class name and the scope resolution operator ::. //   Box::getCount()   // Class Box !
// do not have access to the this pointer of the class.
#include <iostream>
 
using namespace std;

class Box {
   public:
      static int objectCount;
      static int a;
      
      // Constructor definition
      Box(double l = 2.0, double b = 2.0, double h = 2.0) {
         cout <<"Constructor called." << endl;
         length = l;
         breadth = b;
         height = h;

         // Increase every time object is created
         objectCount++;
         a = 10;
      }
      double Volume() {
         return length * breadth * height;
      }
      static int getCount() {
          a= 11;
         return objectCount;
      }
      
   private:
      double length;     // Length of a box
      double breadth;    // Breadth of a box
      double height;     // Height of a box
};

// Initialize static member of class Box
int Box::objectCount = 0;
int Box::a=0;

int main(void) {
   // Print total number of objects before creating object.
   cout << "Inital Stage Count: " << Box::getCount() << endl;

   Box Box1(3.3, 1.2, 1.5);    // Declare box1
   Box Box2(8.5, 6.0, 2.0);    // Declare box2

   // Print total number of objects after creating object.
   cout << "Final Stage Count: " << Box::getCount() << endl;

   return 0;
}

d:\design+_gui\dgnlib\ec_calc_reportlib\ec_ec2_beam_struct.h

//
// IsEmpty()
csCodeSRC.IsEmpty()


//
// NEW     
  // https://www.geeksforgeeks.org/new-and-delete-operators-in-cpp-for-dynamic-memory/
  // http://www.cplusplus.com/doc/tutorial/dynamic/
// New operator Initializes the memory and returns the address of the newly allocated and 
// Initialized Memory to the pointer variable
// For dynamically allocated memory like “int *p = new int[10]”,
// it is programmers responsibility to deallocate memory when no longer needed.
int *p = NULL;  // Pointer initialized with NULL
p = new int;    // Then request memory for the variable

float *p = NULL;   
p = new float;     

int * foo;
foo = new int [5];
OR
int *p = new int;    
int *p = new int(25);      	//pointer-variable = new data-type(value);
float *q = new float(75.25);
int *p = new int[10]  // new operator is also used to allocate a block(an array) of memory of type data-type


// DELETE
// Responsibility to deallocate dynamically allocated memory, programmers.
delete pointer-variable;  
delete p;

delete[] pointer-variable;   // It will free the entire array
delete[] p; 



//Reference  //https://www.geeksforgeeks.org/references-in-c/
Reference is Alternative name for an existing variable
variable can be declared as reference by putting ‘&’

int x = 10;      -> 10
int& ref =x;     -> 10
ref = 100 ;      -> ref =100,  x =100
int& ref2 =x;    -> ref2 = 100
ref2 =999;       -> ref2=999  ref =999,  x =999







	
	