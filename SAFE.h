SAFE  ::Slab, Beam, Foundation  :: Reinforcement and Posttension
// In safe install location
go thorough  pdfs
-> Key feathers
-> work flow
-> Tutorials

1. Set the Units
2. Begin a Model
3. Define Materials
4. Define Properties
5. Draw Objects
6. Select Objects
7. Assign Properties to the Model
8. Load the Model
9. Define Load Cases
10. View & Edit Model Geometry
11. Analysis and Design
12. Reinforcement Detailing
13. Display Results
14. Output Results and Reports

SAFE Menu
Commands:
􀂃 File
􀂃 Edit
􀂃 View
􀂃 Define
􀂃 Draw
􀂃 Select
􀂃 Assign
􀂃 Design
􀂃 Run
􀂃 Display
􀂃 Detailing
􀂃 Options
􀂃 Help
//
VOLUME 1 Using SAFE™
•Key Features & Terminology, Chapters 1-9
•Defining the Work Flow, Chapters 1-13
•Tutorial, Chapters 1 and 2
VOLUME 2 SAFE™ Design
•Post-Tensioning Concrete Design, Chapters 1-10
•Mild Reinforced Concrete Design, Chapters 1-10
VOLUME 3 SAFE™ Verification, Chapters 1 - 23

// design codes
various design codes included in SAFE, including the American,Australian, British, Canadian,
Chinese (requires Chinese license), European,
Indian, Hong Kong, New Zealand, and Singapore codes.
//
Users typically need not concern themselves with the meshing
a single area object can model an entire slab, regardless of the number of
spans and variety of loadings. With SAFE

// Geometry 
􀂃 Slab/Area objects are used to model slabs, drop panels, column geometry,
openings, soil supports, and surface loads.
􀂃 Wall/Ramp objects are used to model walls and ramps.
􀂃 Beam/Line objects are used to model beams and line loads.
􀂃 Column objects are used to model columns and braces.
􀂃 Tendon objects are used to model post-tensioning tendons and tendon
loads. Even though they are drawn in plan similar to a beam object

//
Point objects are automatically created at the corners or ends of all
other types of objects

//
Some typical vertical load patterns used for slabs might include:
􀂃 Dead load
􀂃 Superimposed dead load
􀂃 Live load
􀂃 Pattern live load
􀂃 Snow load

// Define menu > Coordinate Systems

// MATERIAL		
Steel concrete Rebar TEndon others

// Properties
slab, column support soil spring !

Slab Properties        Slab/Area Slab       Property Data
Beam Properties            Beam/Line        Beam Property Data
Soil Subgrade Properties 	Area Soil 		Subgrade Property Data
Point Spring Properties 	Point Point 	Spring Property Data


// Soil supports ::
For soil supports, SAFE generates equivalent LINEAR ELASTIC SPRINGS at
mesh points. COMPRESSION ONLY (ZERO TENSION) conditions in the soil supports
 are modeled using nonlinear gap elements. The key features of the
support elements are as follows:
􀂃 The support elements are weightless.
􀂃 Soil supports have a single vertical degree of freedom.
􀂃 The support reaction values are calculated at every supported mesh
point.

// Orthotropic
material science and solid mechanics, orthotropic materials have material properties that differ along three 
mutually-orthogonal twofold axes of rotational symmetry. They are a subset of anisotropic materials, 
because their properties change when measured from different directions.

// Subgrade
In transport engineering, subgrade is the native material
underneath a constructed road, pavement or railway track. 

// Draw  -> Draw -> All drawing things
Slab, beam, tendon, column, wall, and point
	//slab
Slabs or areas are used most commonly to create the main slabs (including
footings and mats) or openings in slabs
Draw menu > Draw Slabs/Areas


// TendonTendons -> Draw Menu -> tendon
are used to input post-tensioning forces into the model
Edit menu > Add/Edit Tendons > Edit Vertical
Profile


// wall
Draw Walls button or use the Draw
menu > Draw Walls


// On object  shift + left click  -?   Object information

// Assign
To enable analysis and design, these objects
must have properties assigned.

// Assign
Points Support Data > Point Restraints Point Restraints
Support Data > Point Springs Point Spring Properties / Point Spring
Property Data
Beams Beam Data > Properties Beam Properties/Beam Property Data
Beam Data > Property Modifiers Property/Stiffness Modification Factors
Beam Data > End Releases Assign Beam End Releases
Beam Data > Insertion Point Insertion Point
Support Data > Line Springs Line Spring Properties/Line Spring
Property Data
Tendons Tendon Properties Tendon Property Assign
Slab Data > Properties Slab Properties/Slab Property Data
Slab Data > Property Modifiers Property/Stiffness Modification Factors
Slabs
Slab Data > Vertical Offset Slab Offset
Slab Data > Local Axis Slab Local Axis
Slab Data > Edge Releases Slab Edge Releases
Slab Data > Line Releases Slab Line Releases
Slab Data > Rib Locations Slab Rib Location
Slab Data > Opening Slab Opening
Support Data > Soil Properties Soil Subgrade Properties/Soil Subgrade
Property Data
Column/Brace Data > Properties Column Properties/Column Property Data
Column/Brace Data > Property
Modifiers
Property/Stiffness Modification Factors
Column/Brace Data > Local Axis Column Local Axis
Columns/
Braces
Column/Brace Data > End Releases Assign Column End Releases
Column/Brace Data > Insertion Point Insertion Point
Wall/Ramp Data > Properties Wall Properties/Wall Property Data
Wall/Ramp Data > Property Modifiers Property/Stiffness Modification Factors
Wall/Ramp Data > Opening (Walls
Only)
Wall Opening
Walls/
Ramps
Wall/Ramp Data > Normal Offset Wall/Ramp Offset
Supports Support Data > Soil Properties Soil Subgrade Properties/Soil Subgrade
Property Data
Support Data > Line Springs Line Spring Properties/Line Spring Property
Data
Support Data > Point Restraints Point Restraints
Support Data > Point Springs Point Spring Properties/Point Spring Property
Data

// Load  // 		  Define menu > Load Patterns
defining and assigning loads to a model
SAFE automatically creates a load case for each load pattern

       

		//selfweight multiplier
Normally a self weight multiplier of 1 should be specified in one load
pattern only, usually the dead load pattern. All other static load patterns
then have self weight multipliers of zero.
If a self weight multiplier of 1 is defined for two different
load patterns and they are combined in a load case or combination,
the results for the load case or combination are based on an analysis
where double the self weight of the structure is applied.

SELFWEIGHT MULTIPLIER ONE FOR DEADLOAD ONE TIME  DD=1

//Scale factor 
scalefactor is for load combination for total load it ask scale factor 0.5 or 1 or anything

// Static
Static loads can be assigned to point, beam, tendon, and slab objects.

		// Assigning
		Assign menu > Load Data >Surface Loads
		Assign menu > Load Data > Slab Temperature
		Assign menu > Load Data > Point Loads
		Assign menu > Load Data > Tendon Loads
		Assign menu >Load Data > Tendon Losses
		Assignmenu > Load Data > Surface Loads
		

// MASS generally for dynimic analysis eq cg
Define menu > Mass Source
The program will take the loads associated with each selected
load pattern and will combine them using the input scale factors.
These combined loads will then be divided by gravity

// Load Cases
Define menu > Load Cases
The results of linear analyses
may be superposed, i.e., added together after analysis. The results of
nonlinear analyses normally should not be superposed

// View and Edit the Model Geometry

Options menu > Windows
Edit menu > Replicate     Ctrl + R

		// Data Base editing   	Ctrl + E
		Edit menu> Interactive Database Editing    	Ctrl + E
Interactive database editing is a very powerful editing capability within
SAFE that allows the model or a selection of the model to be edited directly
in SAFE

//MESH 
Set the Mesh Options  :: AUTO MESHESHS -> SO AFTER IMPORTING WE SHOULD HAVE TO MESH
Run > menu > Automatic Slab Mesh Options

// Design
Run menu > Run Analysis & Design
Design menu > Design Preferences

// Detailing
Detailing menu > Detailing Preferences
Detailing menu > Drawing Sheet Setup
Detailing menu > Slab/Mat Reinforcing Preferences and Beam Reinforcing Preferences
Detailing menu > Drawing Format Properties

To start the detailing
Run menu > Run Detailing
The first time the detailing is run for
a model, a default set of drawings is created

//Lock
After an analysis has been performed, SAFE automatically locks the
model to prevent any changes


// Show results : Display Menu
Display -> .*

// Report
File menu > Create Report
File menu > Modify/Show Project Information
File menu > Report Setup