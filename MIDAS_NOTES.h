// Content ::
//1  :: OFFSET
//2  :: General Software NOTES
//3  :: Plate Membrain shell wall Elements  ? 
//4  :: DESIGN+ Language change
//5  :: Change Element local axis 
//6  :: Elastic link
//7  :: Coordinate system
//8  :: Diaphragm
//9  :: 
//10  :: 
//11  :: 



// MIDAS GEN
//1
//OFFSET:   // Make vdo of offset transfor of force cg to offset to nodes
	LOAD APPLY AT CG SHIFT TO OFFSET LOCATION
	THEN SHIFT TO DISPLAY NODES    //THAT GENERATES EXTRA MOMENT AND FORCE !
	 


//2
//General Software NOTES
	-software do analysis for uncracked section
	-to do cracked section just add Ixx Iyy Izz ratio multipliers  //@!!!  or K sfiffness Modifiers



//3
// SHELL // MEMBRANE // PLATE
// PLATE OUT PLANE FORCES
	// Plate  OUT plane  :: plate element resists bending only out- plane direction  [Resist Forces Bm sf torsion reaction]
	// MEMBRAIN IN PLANE FORCES
	// SHELL IN MIX OF BOTH MEMBRAIN AND PLATE ELEMENT
	// In Elements Shell Inplane and outplane :: Plate element resists Bending in in-plane and outplane direction. [Resist Forces Bm sf torsion reaction]
	// In Elements WallElement: Wall beam and column Modified way.  
    // Cable and Beam
	//? Beam element can bend but bar element not. This is like membrane element and plate element. Plate element can bend but membrane element not.
	//? Membranes are flexible sheets like rubber where in plane tension is through transverse loads where plates resist these types of loads by moments and shear forces
	
// 4
// DESIGN+ Language change
	LANGUAGE ENGLISH 
		->PRODUCT.INFO    (OPEN AND CHANGE TO ENGLISH)
			->LOCATION    DESIGN+ -> BIN -> DEBUG -> X86 -> (PASTE PRODUCH.INFO/IF AVALILABE CHANGE TO ENGLISH)
			
// 5
// Change Element Local Axis
	// Change local axis from : NODE/ELEMENT -> CHANGE PARAMETERS -> REVERCE LOCAL AXIS		
	//Element Local axis as per Element Node Connectivity
	//Node Connectivity :   218     4   239   802
	//Node Connectivity :     4   218   802   239


//6
// Elastic link is like spring 
	// High stiff spring total  transfor of force
	// Lower stiff spring   Lower transfor of force
	// Modify after applying :: via table : change the value and click to next row.

//7
// Coordinate system
	// Global coordinate system (GCS)
	// User Coordinate System   (UCS)
	//Element
		//Element Coordinate System (ECS)
	//Node
		//Node local Coordinate System (NCS)
		

//8  
//Diaphragm
	//In structural engineering, a diaphragm is a structural element that transmits lateral loads
	// to the vertical resisting elements of a structure (such as shear walls or frames). Diaphragms are typically 
	// horizontal, but can be sloped such as in a gable roof on a wood structure or concrete ramp in a parking garage.//

//9
//Line, Grillage, Cross beam.
//http://globalsupport.midasuser.com/helpdesk/KB/View/5264151-load-----what-is-the-difference-between-lane-element-and-cross-beam-method-for-vehicular-load-distribution-when-should-each-be-used
	//Civil Lane element and Cross beam
    //It is method for vehicular load distribution	
	// Difference considering the transverse rigidity of the system
	 // Line element and is assigned whole transverse cross-sectional property
	 // Grillage models, live load distribution occurs as per the rigidity of transverse members (
	 // Cross beam method, a cross-beam structure group (transverse elements group) has to be defined and selected for transverse distribution of vehicular load as shown
	 
//9 
// Rigid link
// Boundary condition as whole Master and Slave Ex 6 nodes if rigid totally act as rigid,if plane totally act as plane
// The deformations of master and slave nodes of a rigid link are not exactly same
//The rotations of slave node must be the same as master node. But, the translational displacements of slave node
//Maternode as referal  //if rotates it rotates related to master Mode !!!???!!!