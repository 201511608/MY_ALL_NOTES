C++...............................


CString is from MFC
string is from c++


using namespace std;
#include <iostream>   // for cout cin
#include <string>    // for using string
#include <sstream>  // to print sting in cout!!  // getline(cin, yours.title);


CHAR
char c[10] = "Muzafar"; 	    	// It asignes single by single a[0] ='m' .....
c[10] = "Muzafar";		  	// Error it can't assign // assign by a[0] ='m' .. then valid



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



ENUM   Enumerated types (enum) //types that are defined with a set of custom identifiers
enum colors {black,red,green}; // black =0 ;red =1 ....
enum colors {black,red,green=101}; // 0 1 101  //can define value in between
enum colors {black=100,red,green}; // 100 101 102  // starting value gets on increse



VIRTUAL FUNCTION
// Virtual functions allow us to create a list of base class pointers and call methods of 
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
 
 
 
 
 
 
 STUCUTRES
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



//vector  vectors
#include <vector>

vector<double>v1(100);
vector<int> first;
first.assign(7,100); // Assign   || Assigning 7 ints with a value of 100

//push_back
vector<double>v1
v1.push_back(value)//v1.push_back(10)  

//Ex  std::vector<int> myvector;
  for (int i=1; i<=5; i++) myvector.push_back(i);

vector<int> first;
first.begin() // 
first.end()   
first.size()


//ITERATOR
Returns an iterator pointing to the first element in the vector.
vector<double>::iterator it;  // Returns pointer !!
it = v1.begin();
cout << *it ;
it = v1.end()-1;
cout << *it << endl;
 

// Techniques,.........................................................................................
cout << " (" ; // want to print brackets


//infinite loop
for(;;){};

// String
    string mystr ;
    cout << "Enter title: ";
	getline(cin, pmovie->title);
	string mystr;
	cout << "Enter year :";
	getline(cin, mystr);
(stringstream)mystr >> pmovie->year;  // string to number   //year is int;


//vector  vectors
#include <vector>
	vector<double>v1;
	v1.assign(100, 1);
	vector<double>v1(100);
	vector<double>::iterator it;
	it = v1.begin();
	it = v1.end();