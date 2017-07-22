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


CONVERT CONVERTION
//Float to Intlfloat f = 12.345;
float f = 12.345;
int i = (int)f;



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



//vector  vectors ..............................................................................................
#include <vector>
vector<int> matrix1d(5, 0); // 5 row and value=0
vector<vector<int>> matirx2d(5, vector<int>(6, 0));  // 5 row  and 10 column and value =0
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

//ITERATOR
Returns an iterator pointing to the first element in the vector.
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
	 matrix2d.size() // show row size  i.e 3
	 matrix2d[0].size() // show column size  i.e 6
	 

	
	vector<vector<vector<int>>> matrix3d(3, vector<vector<int>>(6, vector<int>(10, 0)));
	std::cout << "0. size: " << matrix3d.size() << '\n';   // 3
	std::cout << "0. size: " << matrix3d[0].size() << '\n'; // 6
	std::cout << "0. size: " << matrix3d[0][0].size() << '\n';  // 10
	 
	 // EMPTY
	 myvector.empty() // CHECK EMPTY OR NOT RETURN TRUE OR FALSE
	 // CLEAR  // Removes all elements from the vector (which are destroyed), leaving the container with a size of 0.
myvector.clear();

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
	
// Techniques All,.....................................................................................................................................
//////////////////////////////////////////////////////////////////////////////////////////////////

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


//Difference i++ and ++i  // i++ = i=i+1  //Retrun old value		// ++i=i+1   //Returns new increment value
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