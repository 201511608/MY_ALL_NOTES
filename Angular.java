// Angular
	// Single Page Application (JavaScript Fraemwork)
///////////////////////////////////
/////////////////////////////
////////// CONTENT
// 0  :: Basic         // Angular  // CSS   // BootStrap   // Html
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
// 11 :: Console
// 12 :: Directives	
// 13 :: ng-template, Class in Style
// 14 :: Date
// 15 :: Chapter 3
// 16 :: Links : Grid, 
// 17 ::
// 18 ::
// END :: Techniques


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
	// But Angular can connect to Server
	
	// HTML
	    https://www.w3schools.com/html/html_examples.asp
		https://www.w3schools.com/html/
	// BootStrap
		https://www.w3schools.com/bootstrap/bootstrap_examples.asp
		https://www.w3schools.com/bootstrap/
	// CSS
		https://www.w3schools.com/css/css_examples.asp
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
			.components.spec.ts // Testing file
			.components.ts      // Main
			.module.ts
			
		//After any change Save it to update in WEB page
		
		
	// Requirment
		Nodejs  // https://nodejs.org/en/
		npm (Node packet manager)  // https://www.npmjs.com/get-npm
		Visual Studio Code // Ctrl + K  +  Ctrl + K [All shortCuts]
		Git bash
		Git bash
		
	
    // Styles 
		Add filelocatoion in Angular.json file   // Then Reload ngserve
		Ex:
			"styles": [
				  "node_modules/bootstrap/dist/css/bootstrap.min.css",
				  "src/styles.css"
				      ]
					  
	// In Angular Programming	
			// [] Propert Binding
			// {} Java Script				

//1
// Installation
	https://github.com/angular/angular-cli/wiki
	
// Quick Start
	npm install -g @angular/cli  // Set up the Development Environment
	ng new my-app  		// Create a new project  // my-app or any name
	cd my-app  			// Serve the application 
	ng serve --open     // Serve the application 
   
	http://localhost:4200/  //In Web Browser  
				//Change Localhost
 // ng serve --host 0.0.0.0 --port 4201
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
		
		public name: string; // Can access from outside
		
		
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
			address:
			{
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
	// in HTML
			//  https://coryrylan.com/blog/angular-ng-for-syntax
			//  https://stackoverflow.com/questions/36535629/repeat-html-element-multiple-times-using-ngfor-based-on-a-number
	  <li *ngFor= "let i of hobbies">{{i}}</li>  // hobbies=[playgames,listionstories]
	  <li *ngFor= "let hobby of hobbies; let i = index">{{i}}: {{hobby}}</li>
		in
	// for repeats n Timestamp
	<ng-container *ngFor="let item of ' '.repeat(Number_Any).split(''), let i = index ">
    p {{i}}
    </ng-container>

	
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
			ng g c MentionNameAny/Anyname
			ng g c MentionNameAny --spec false  // Debug file [name.spec.ts] will not be created !
		
	// Node package Manager NPM
		// Install BootStrap   
			// Install Logcally not Globally
			npm install -- save bootstrap@3  
			// Then Must adding Styles under 'angular.json' file   // Then Reload ngserve
					//EX::
						 "styles": [
									  "src/styles.css",
									  "node_modules/bootstrap/dist/css/bootstrap.min.css"
									]		
		// When BootStrap is added in 'angular.json' then automatically/default html takes bootstrap styles !									
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
		
		// Install Logcally not Globally
			npm install -- save bootstrap@3  
	

	//Button
		https://www.w3schools.com/bootstrap/bootstrap_buttons.asp
		<button>AnyName</button>
		<button class="btn btn-primary">AnyName</button>
		
			//https://www.w3schools.com/jsref/event_onclick.asp
		<button onclick="onCreateServer()">Click me</button>
		or 
		<button>(click) ="onCreateServer()">Add Server</button>

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
									 `p{color: green;
										padding: 20 px;
										background-color: rose;
										border: 1px solid red;
									   }`
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
			
					// Button with Postion
					CheckUserName=True  // Assignment 2
					<button class="btn btn-success btn-block" style="position:relative; left:50%; margin-left:-20px; margin-bottom:-27px"
					(click)="Reseat()"
					[disabled] = "!CheckUserName"
					>ButtonClick</button>
					
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
								[disabled]="!allowNewServer"    // [disabled]="UserVariable===''" // Check condition  // <button class="btn btn-primary" [disabled]="userName.length < 1" (click)="reset()">Add User</button>
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
	
	
		// TwoWay Binding
		// Typescript <-> Templet(Html)
		// Like Live Update 
		 Two-Way-Binding ([(ngModle)]  = "dataVariableName" )  // ngModle is directive !
		
		
		<input type="text" class="form-control" (input)="onUpdateServerName($event)"> // OnWay
		<input type="text" class="form-control" [(ngModel)]="serverName"> // Two way   // serverName =""
			
						
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


// 12
// Directives		
	// In HTML
	// Instructions in the DOM!
	// ngif is Structural Directive
	ngif is  Directive
	*  forstructural directive
		// IF condition
			*ngif
			<p *ngIf="serverCreate">Directive DOM</p>  
			<p *ngIf="!serverCreate">ELSE JUST NOT CONTDION TO IF</p>
			
		// If and Else
			<p *ngIf="serverCreate ; else noServerElse">If True Impelemnt This Server Created ! Directive DOM</p>
							<ng-template #noServerElse>
								<p>Else This is Implemented !</p>
							</ng-template>
			
	
	//If and else 
	//In Components //i.e TypeScript Language
		// If and else 
			// in Components  // from typeScript
		ButtonCheck=true;ButtonClickCount=0;
		onButton()
		  {
			if (this.ButtonCheck==true)
			{
			  this.ButtonCheck=false;
			}
			else
			{
			  this.ButtonCheck=true;
			}
		  this.ButtonClickCount=this.ButtonClickCount+1;
		  }
		  // or
		  onButton(){ // Replacement of if and else condition
		  this.ButtonCheck=!this.ButtonCheck;
		  }
		  
		  
	// 	Attributes 		
		// ngStyle
		 // Dynamically add or change Styles (Colour text font size ....) 
		ngStyle  // Dynamically Updates the style
				 // [] property Binder  // ngStyle Directive
		<p [ngStyle]="{backgroundColor: getColor()}">This is in app-server and the Status is with ngstyle :: {{ServerStatus}}</p>
										getColor()
												{
													return this.ServerStatus === 'online' ? 'green' : 'red';
												}
					
			
		
		// ngClass
		// Dynamically add or change CSS 

		<p [ngStyle]="{backgroundColor: getColor()}"
           [ngClass]="{online:ServerStatus==='online'}">This is in app-server and the Status is with ngstyle :: {{ServerStatus}}</p>

								@Component({
											selector: 'app-server',templateUrl: './server.component.html',
											styles: [`
											        .online{               // Define Class in style
											             color: white;
														   }
													`]
		
		// ngFor  
			Syntax
		  *ngFor = "let anyname of existArray"
		// * Structural directive
			// Ex::
				<p *ngFor = "let server of servers">{{server}}</p> // paragraf print for n times as fpr lop
			
			ButtonClickCount=10
			<ng-container *ngFor="let item of ' '.repeat(ButtonClickCount).split(''), let i = index ">
			p {{i}}
			</ng-container>
		
// 13 
	// ng-template  
	// Can Create Function like Paragraf call using CONITIONAL operators
	<ng-template #noServerElse>
		<p>Else NoServer Created !</p>
	</ng-template>	
				// Can Call Like Else !
				<p *ngIf="serverCreate ; else noServerElse">Server Created ! Directive DOM</p>
				
		
	// Class in Style
	 // Dynamically add or change CSS 
		// [] Propert Binding
		// {} Java Script
	@Component({
				selector: 'app-server',
				templateUrl: './server.component.html',
				styles: [`
							.online {             // Key and Value  // Define Class in style
									 color: white;
									}
						`]
						
							EX:
							<p [ngStyle]="{backgroundColor: getColor()}"
							   [ngClass]="{online:ServerStatus==='online'}">This is in app-server and the Status is with ngstyle :: {{ServerStatus}}</p>
								// in ngClass Key and Value
	C:\Users\midas\Desktop\Angular\my-first-app\src\app\server\server.component.html
	
//14
// Date
	// in components.ts  // typescript
new Date()
	
	
	
// 15
// Chapter 3
// Project::

// 16
// Links

// Grid Container
	// Creates Box grid like table
	https://www.w3schools.com/css/css_grid_container.asp

	
	
	
	
	
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
////////////////////////////////////////////////////////////////////////////	
// END
// Techniques
// If and thenfor 
	// html together
	<ng-container *ngIf="CountCheck" >
	 <p
	 *ngFor = "let element of ButtonArray">
	  Button count {{element}}
	 </p>
	</ng-container>
	
	// for and then if
		<template *ngFor="let nav_link of defaultLinks"  >
			<li *ngIf="nav_link.visible">
				.....
			</li>
		</template>
		
// if 
// in html ngif  // Equal to  condition
<li *ngIf ="i===2">
	Button Count{{i}} {{element}}
</li>
 //
<li *ngIf ="i<=5">
	Button Count{{i}} {{element-1}}
</li>
//
<li *ngIf ="i>5">
  Button Count{{i}} {{element-1}}
</li>



// Techinques of Variabel assigning
src="{{recipe.imagePath}}"  //  String + Attribute
[src]="recipe.imagePath"  //  Source Property Base


// Class as DataStructure
		// Class with Constructor : as Datatype/Structure !
			// Learn this
		export class Recipe{
			public name: string;
			public description: string;
			public imagePath: string; // url for Images

			constructor(name: string, desc: string, imagePath: string){
				this.name=name;
				this.description=desc;
				this.imagePath=imagePath;
			}
		}
			// Using
			  recipes: Recipe[] = [
				new Recipe('A Test Recipe', 'This is simply a test', 'https://upload.wikimedia.org/wikipedia/commons/1/15/Recipe_logo.jpeg'),
				new Recipe('A Test Recipe', 'This is simply a test','https://c.pxhere.com/photos/8b/0f/food_meat_recipe_power_pork_dishes-604134.jpg!d')
			  ];
			  
			  
		// Type Script Class methods
		//    1 Method  
		public name: string;
		public amount: number;
		constructor(name: string,amount: number)
		{
		this.name=name;
		this.amount=amount;
		}


		// 2 Method (Similor to above)

		constructor(public name: string,public amount: number)
		{}
