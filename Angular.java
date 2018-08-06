// Angular

///////////////////////////////////
/////////////////////////////
////////// CONTENT
// 1  :: Installation  // Initiation  // Console
// 2  :: Files
// 3    
// 4  :: Variable,structures, Console
// 5  :: for loop 
// 6
// 7
// 8
// 9    
// 10 
// 11  
// 12
// 13


//1
// Installation
	https://github.com/angular/angular-cli/wiki

	Start : "ng serve"
	Build : "ng build"
	test  : "ng test"
	lint  : "ng lint"
	e2e   : "ng e2e"

	Navigate to 
	http://localhost:4200/

	To create
	src->app.componentName.ts

// Console
	In browser F12 for Console.


//2
	//Files
	.ts  -> typescript  //Main
	spec.ts -> Testing // Debug?test


//3 Generate components  
//Creates css, html,spec.ts,ts
	ng g component filelocation  // g =generate ->  components  // Terminal within visual studio code



// 4
wirtecode
// VARIABLE
	variable = "MIDAS" ; // DIRECT ASSIGNING
	{{variable}}
	
	variable:string = "MIDAD";
	age:number;
	variable:any   //string or number cabe define

// Array	
	hobbies:any[];     // Numbers or/and strings
	hobbies:string[];  // Array
	hobbies:numbers[];
	hobbies.push('hobbies Push Added in Array')// Adds at Last    // hobbies=['wirtecode','playgames']
	hobbies.ushift('hobbies Push Added in Array');
	
//Structres
		address:{
		street:string,
		city:string,
		state:string
		}

		this.address= {
		  street: 'Vashi',
		  city: 'Navi Mumbai',
		  state:  'maharashtra "so you think you can catch me" '
		}
		address.street  // Call in Html
		
		// Interface 
		// To defiene any thing outside class and then ass inside class like function and strutures
	
			address2:address;  //  withh in class
			
			interface address{    // Outside class
			street:string,
			city:string,
			state:string
			}
	
//CONSOLE	
	console.log('constructor ran..');   // console in browser press (F12 for console)

// 5
// for loop
  <li *ngFor= "let i of hobbies">{{i}}</li>  // hobbies=[playgames,listionstories]
  <li *ngFor= "let hobby of hobbies; let i = index">{{i}}: {{hobby}}</li>




