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
// 6  :: Visual Studio Code 
// 7  :: ng commands  // 7.1 CLI commands
// 8  :: HTML/BootStrap
// 9  :: Chapter 2
// 10 :: Timer
// 11  
// 12
// 13

//0
// Basic
	// Angular Git
	https://github.com/angular/angular-cli/wiki
	// Angular Site
	https://angular.io/guide/quickstart
	
	// Quick Start Angular
	https://angular.io/guide/quickstart
	https://youtu.be/KhzGSHNhnbI
	
	
	// Angular Cannot connect to DATABASE 
	// Angular can connect to Server
	
	// BootStrap
		https://www.w3schools.com/bootstrap/
	
	// TypeScript  ( programming language )
		https://www.tutorialspoint.com/typescript/
		 TypeScript (SuperScript of Java Script)
		 Sting input to string input not integer
		 Type Script Compiles to JavaScript
		
	// Basic+
		Angular is Frontend/Clint Framework.  // FrontEnd
		Single Page Application (SPAs)
		MangoDb  // Back end 

		NodesJs
		HTML
		TypeScript
		BootStrap

		Injectable
		USERS
		
		Use save all every time to update web page  // Ctrl + K, S
		e2e // End to end testing
			
		// Plugins
			emmet
			
		//Files in Angular
			.components.css
			.components.html
			.components.spec.ts // -Testing file
			.components.ts  // Main
			.module.ts
			
		//After any change Save it to update in WEB page
		
	// Requirment
		Nodejs  // https://nodejs.org/en/
		npm (Node packet manager)  // https://www.npmjs.com/get-npm
		Visual Studio code
		Git bash
		
	
    // Styles 
		Add filelocatoion in Angular.json file   // Then Reload ngserve
		Ex:
			"styles": [
				  "node_modules/bootstrap/dist/css/bootstrap.min.css",
				  "src/styles.css"
				      ]

//1
// Installation
	https://github.com/angular/angular-cli/wiki
	
// Quick Start
	npm install -g @angular/cli  // Set up the Development Environment
	ng new my-app  		// Create a new project  // my-app or any name
	cd my-app  			// Serve the application 
	ng serve --open     // Serve the application 
   
	http://localhost:4200/  //In Web Browser
	file->src->app->app.module.ts

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
	.html   // Write pages
	.css    // Style
	.ts  -> typescript  // Main
	.spec.ts -> Testing // Debug?test


//3 Generate components  
//Creates css, html,spec.ts,ts
	ng g c fileName // g =generate ->  component  // Terminal within visual 
	ng generate component fileName  
	studio code  // filename/location ??



// 4
// VARIABLE
	// Variables
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
			
			

	// 6
	// Visual Studio Code 
		Ctrl + ` // Opens Command shell
		File->Preferance->Setting // Change Default settings
		
		Saveall // Ctrl + K, S
		Indentation // Ctrl + K + F

	
	
// 7
// ng commands
	// Check this is file /Pakage.json
		"start": "ng serve",
		"build": "ng build",
		"test": "ng test",
		"lint": "ng lint",
		"e2e": "ng e2e"
		
		
		//GENERATE COMPONENTS  // AFTER Ctrl + `
			ng g component Components/user  // MAKE DEFAULT COMPONENTS
		
	// Node package Manager NPM
		// Install BootStrap   
			// Install Logally not Globally
			npm install -- save bootstrap@3  
			// Then Must addin Stles under angular.json file   // Then Reload ngserve
		
// 7.1
	https://www.tutorialspoint.com/angular4/angular4_examples.htm
	// CLI Commands
		//To Create New Componets Directly
		ng g c NameFolder  // g or generate || c or component
		
// 8
// HTML  
// BootStrap
		// BootStrap
		https://www.w3schools.com/bootstrap/
	

	//Button
		https://www.w3schools.com/bootstrap/bootstrap_buttons.asp
		<button>AnyName</button>
		<button class="btn btn-primary">AnyName</button>
		
			//https://www.w3schools.com/jsref/event_onclick.asp
		<button onclick="onCreateServer()">Click me</button>

	// Input Box
		<input type="text" [(ngModel)]="name" >
		<p>{{name}}</p>
		
	// Horizontal Line seperator
	<hr>	
	
	// Paragraf headings
	<h1></h1>
	<h2></h2>
	<h3></h3>
	<h4></h4>
	<h5></h5>

	// Line
	<li></li>
	
	// Paragraf
	<p></p>
	
	// Numbering
	 <ol>
		<li></li>   //->1 line
		<li></li>   //->2  line
	 </ol>

	// Styles bootstraps
		// Shortcut .container and enter. -> it assign as <div class="container">
	<div class="container">
		<div class="row">
			<div class="col-xs-12">

			</div>
		</div>
	</div>
		

	
// 9 
// Chapter 2
	Index.html  //Is the single page file !
		// Title name can be changed i.e tab name | Which appears when we open the file.
		  <app-root></app-root> // where app files get loaded
								// We can even change <app-root> Name to any thing
		
	main.ts // This the first file get exucated
	.ts typescript  //file

	//App Start Flow
	main.ts->app.module.ts->app.components.ts/spec.ts/html/css->index.html  ||-> via <app-root>Load..<app-root>
	
	//Angular in the end is javascript framework, changes DOM(html) at runtime!

	// components
		// Each componets is one HTML  
		// Like boxes in html page
		// Component is just a typescript class
			Ex1:	export class ServerComponent{ }   // Typescript class
			Ex2:	export class ServersComponent implements OnInit    {
														constructor()  {}
														   ngOnInit()  {}
																        }
		// Decerator Enhanses Class Decerator.
				@Component({})
				@Component({
							selector: 'app-server',		// Selector  for html <app-server><app-server>
							templateUrl: './server.component.html'
						  })
		//  Decerator Enhanses Class to implement is we should have to Use decerator. So import it !
				import { Component } from '@angular/core';  // Core functionality of Components
		
		
		// Naming
			// File/Folders Class
			// Good Practice Folder/SubFold/file/Subfile Name equal to Component Name  // All in Small letters
			
			// Class name is    FolderNameComponent   // Camel case names 
			// capital at beggining of EachWordletter
				

	// App Module 
		app.module.ts
		Bundles all components to gether !
		
		//New component class to be add in app.module.ts
			import { ServerComponent} from './server/server.component';
			@NgModule({
						declarations: [
						              ServerComponent
									  ]
					 })

		

	// in app.component.ts Under @Component
		// Use '' or `` Write code in between '' or ``
	
	// template	
		templateURL: 'file.html'
		or
		templet:  '<p> direct code No html ear</p>'
		

	// Styles
		//app.compoents.ts
			 // In app.component.css -> h3 {   color: blue;} //Ex in: h3 h2 p 
			 styleUrls: ['./app.component.css']:  // h3 {   color: blue;} //Ex in: h3 h2 p 
			0r
			 styles:['h3{color: dodgerblue;}', 'h3{color: dodgerblue;}']
					 EX:       styles: [
									 `p{ color: green;
										padding: 20 px;
										background-color: rose;
										border: 1px solid red;}`
										]
										 
	//Selector
		// In app.components.ts
			selector: 'app-server'   // -> <app-server></app-server> Must use like this	   || As Elements
				or
			selector: '.app-server'  // -> <div class="app-server"></div> Must use like this   || As Class
				or
			selector: '[app-server]' // -> <div>app-server></div>	
									 //  As Attribute
				
	// Assignment 1
		1- Create two new components
		2- Output beneath each other
		3- Output as warging or success message in the components
		4- style the components red or blue
		
	// Databinding
			TypeScriptCode(BLogic)      <->  Template(HTML)
			DataBase->DataProcess       <->  Show/Take Input
			
			// OneWay databinding
				//OutPut Typescript -> Templet(Html)
				String Interpolation ( {{ data}} )
				Property Binding     ( [property]="data" )
				
				//Input // Templet(Html) -> OutPut Typescript 
				Event Binding ( (event) ="expression")
				
			// Twoway databinding
			// Typescript <-> Templet(Html)
				Two-Way-Binding ( [(ngModle)] = "data" )
				
				
		// String Interpolation ( {{ data}} )	
						//Where  data = Must be String  
						//or anynumber/.. finally convert to string
			
			Server =10;
			Server: number = 10;
			
			ServerStatud = 'offline';
			ServerStatus: string = 'offline';
          
				<p>Server ID {{ ServerId }}  is {{ServerStatus}} </p>
				<p>{{'Server ID'}} {{ ServerId }}  is {{ServerStatus}} </p>
				
			//Funcion Methon in Class of name.component.ts
				getServerStatus(){
					return this.ServerStatus;  // ServerStatus: string = 'offline';
									}			
			
		
		// Property Binding     ( [property]="data" )
							// [] Dynamiclly bind some property of with is brackets[]!
							// [property] to be show or not ex:
			EX:	    allowNewServer = false;  // in .ts file
			        <button class="btn btn-success btn-block"
                     [disabled]="!allowNewServer"> Add Server
					</button>
					 <p>{{allowNewServer}}</p>  // To Cross Check
					
			// InnerText            
				// [InnerText] :  =  <p> InnerText </p>  // Similar to this !
				<p>{{allowNewServer}}</p>
				<p [innerText]="allowNewServer"></p> //same as above
				 
					 
					 
		// Event Binding ( (event) ="expression")
			//Input // Templet(Html) -> OutPut Typescript 	
						// On Button Click Call function which changes test
						
						Ex: (click)
						serverCreationStatus = 'No Server was Created !'
						onCreateServer(){this.serverCreationStatus = 'Server was Created!';}
			            <button class="btn btn-success btn-block"
								[disabled]="!allowNewServer"
								(click) ="onCreateServer()">Add Server</button>
						<p>{{serverCreationStatus}}</p>
						
						EX2: (input)
						serverName=''
						<input type="text"
						class = "form-control"
						(input)="onUpdateServerName($event)">
						<p>{{serverName}}</p>
							  onUpdateServerName(event: Event)
								  {
									 this.serverName=(<HTMLInputElement>event.target).value;
								  }

										
		
	
		
		// Console
			console.log()
			 onUpdateServerName(event: any)
				  {
					  console.log(event);
				  }
			onUpdateServerName($event) // Function call in Html
				
		
		
		(=> (click)).
        OUR_ELEMENT properties  or YOUR_ELEMENT events		
						
// 10			
// Timer
	 setTimeout( ()=>{}, 2000 ); // es6 Arrow funciton  // 2000 = 2 seconds
Ex:  setTimeout( (Argument)=>{FunctionBody}, 2000 ); // es6 Arrow funciton
EX2: setTimeout( ()=> {
                        this.allowNewServer=true;
                      }, 2000 
			   );


// 11			   
// Console
			console.log()
			 onUpdateServerName(event: any)
				  {
					  console.log(event);
				  }
			onUpdateServerName($event) // Function call in Html			