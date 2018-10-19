// Angular
	// Single Page Application (JavaScript Fraemwork)
///////////////////////////////////
/////////////////////////////
////////// CONTENT
// 0  :: Basic
// 1  :: Installation  // Create Project // Initiation  // Console
// 2  :: Files
// 3  :: Generate components  
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

//0
// Basic
	// Angular Git
	https://github.com/angular/angular-cli/wiki
	// Angular Site
	https://angular.io/guide/quickstart
	
	// Angular Cannot connect to DATABASE 
	// Angular can connect to Server
	
	
// TypeScript  ( programming language )
	// https://www.tutorialspoint.com/typescript/
	// TypeScript (SuperScript of Java Script)
	// Sting input to string input not integer
	// Type Script Compiles to JavaScript


//1
// Installation
	https://github.com/angular/angular-cli/wiki

// Create Project
	// In Shell CMD (Bash) or Visual Studion Code [ Ctrl + ` ]
		ng new my-first-app-anyname
		cd my-first-app-anyname 
		ng serve
	// In Browser
		http://localhost:4200/
		Ctrl + U 
	
	
	Start : "ng serve"
	Build : "ng build"
	test  : "ng test"
	lint  : "ng lint"
	e2e   : "ng e2e"
	


	Navigate to 
	http://localhost:4200/

	To create
	src->app.componentName.ts

// Console  // In Chrome
	In browser F12 for Console.
	View Page Source (Ctrl + u)


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
	variable = "MIDAS" ; // DIRECT ASSIGNING  // in app.component.ts
	{{variable}}
	
	variable:string = "MIDAD";
	age:number;
	variable:any   //string or number cabe define
	
// Box for Input
`	<input type="text" >

// Directive  // Listion and save in virable	
	[(ngModel)]="VariavelName"  
	<input type="text" [(ngModel)]="name"> // EX

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
	
			address2:address;     //  withh in class
			
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


// Type Script Feature
		import { FormsModule } from '@angular/forms';  // In app.module.ts
		
		

