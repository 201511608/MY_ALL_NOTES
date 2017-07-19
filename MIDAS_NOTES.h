// MIDAS GEN

//OFFSET:   // Make vdo of offset transfor of force cg to offset to nodes
LOAD APPLY AT CG SHIFT TO OFFSET LOCATION
THEN SHIFT TO DISPLAY NODES    //THAT GENERATES EXTRA MOMENT AND FORCE !

//OFFSET:






//NOTES
-software do analysis for uncracked section
-to do cracked section just add Ixx Iyy Izz ratio multipliers  //@!!!  or K sfiffness Modifiers

//PLATE OUT PLANE FORCES
//MEMBRAIN IN PLANE FORCES
//SHELL IN MIX OF BOTH MEMBRAIN AND PLATE ELEMENT