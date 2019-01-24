// UNITY
///////////////////////////////////
/////////////////////////////
////////// CONTENT
// 0  :: Basic 
// 1  :: 
// 2  ::  
// 3  ::  
// 5  ::  
// 6
// 7
// 8
// 9    
// 10 
// 11  
// 12
// 13


// 0 
 


 // Python dll
	// For Nural nets Test !
	https://www.originlab.com/doc/OriginC/guide/Access-Python-via-External-DLL
	
// Debug 
// In Android Phone.
Developer Option > Debugger ON
	-> In Pc
		SDK install  // https://www.youtube.com/watch?v=1yLDxIMuRlo
		JDK install  //
		


// Basic
F selected object zooming
Ctrl D    Duplicates the selected object

// Scene view
	// Object Focus
	Hold F and Rt Click Move Mouse Up Down Left Right
	
	// ROTATE AROUND OBJECT
	Alt + Shift + MouseLeftClick Move
	
	
// Layers
	InInspector Layer> AddLayer
	// For Light 
			InInspector > Light > CullingMask >Check/UnCheck Layer
			
// BlackBackGround
Windows> Lighting>Environment(None)
MainCamera [ Inspector > camera > Background Black ;
// Toggle Axis
Hold V // Via Axis change the axis
// Debugging
	// In Unity
	  Ctrl+Shift+C //To Run Dubugger
	  Debug.Log(other.name); // Write in program
// Document Script
	https://docs.unity3d.com/ScriptReference/Mathf.html
	Ctrl + '  // Select in and then Ctrl+' in Visual Studio

// Console
Window > Console
Ctrl + Shift + C

// Build
// for PC or Android or Ios or All
File>Build Settings
Ctrl+Shift+B

// Save
	> Save Scenes (File > Save Scenes) 
	> Save Layout (AtTopRight > LayoutDropDown > Save Layout)

	 
// Object Focus
	> Click Object and Press F (focus)
	 
// Light Setting
	  Window>Lighting>Setting
			// To Make Default Intensity of Light Zero
		
// Light
	Hierarchy| Create > Light > Directional Light
	
// Duplicates
Ctrl + D // Select Object and then Ctrl + D

// Create MT
Ctrl+Shift+N
	  Hierarchy| > CreateEmpty 
	  // Reset it Once Before Using

// Material Create
	InProject Create>Material
	
	// Shader
		Particle > Addetive // Blace as 0 Vahishesh !
		Mobile > Particle > Addetive //[No tint colour in this ]
	  
// LAYER 	
	// Use to Light for specific Objects Only !!!

// SHADER
	// WE CAN HAVE OUR OWN CUSTOME SHADERS !!!

// Script
	>Inspector>AddComponents>NewScript>C# Add&Create
  //Update()
		Update function is the place to put code that will handle the 
		frame update for the GameObject
  //Start()
		The Start function will be called by Unity before gameplay begins 
		(ie, before the Update function is called for the first time) 
		and is an ideal place to do any initialization.

		
// Capsule
	AddComponent>Collider>Capsule
	// [Istregger]  // Tic it 

// Axis as Referance
	// Create Empty
	Hierarchy>Create Empty || Use this as Axis Referance !
		

// Tag
	InInspector >Tag(Dropdown)>AddTag
	// This tag is use to Sky Collsion contact in Program
		//EX : 
		   if(other.tag=="Boundry")  {return;} // Tag is "Boundry"
		

// Random
		Random.Range(-x,x) // In between Numbers

// Clamp
	// X or Y or Z Value with in Boundry LImit
	  Mathf.Clamp(rb.positionCheck.x, boundry.xMin, boundry.xMax)
			// Return Between Min and Max
	
// Wait Pause Hold delay
// for a Second
	yield return new WaitForSeconds(startWait);  // In Program
	
	StartCoroutine (SpawnWaves()); // function call    if have wait for a socond
			IEnumerator SpawnWaves() {}// Function Defination  if have wait for a socond
	

	// Pause  // In general C# not in Unity
		//Stop
		WaitForSeconds(time);
		yield return new  WaitForSeconds(time);
			// To function
			StartCoroutine(function()); // function() consist of -> yield return new  WaitForSeconds(time);
	
// Time	
	// Time.time
		// The time at the beginning of this frame (Read Only).
		// This is the time in seconds since the start of the game.
		// Time.time starts once all Awake functions have finished
		// Returns the same value if called multiple times in a single frame.
		
	// Time.deltaTime
	    // https://docs.unity3d.com/ScriptReference/Time-deltaTime.html
		// return time difference between relative frame
		// This property provides the time between the current and previous frame.
        //  Do not rely on Time.deltaTime inside MonoBehaviour.OnGUI. Unity can call OnGUI multiple times per frame.
		//  The application use the same deltaTime value per call.
    	//  The timer adds deltaTime each frame.
		Time.deltaTime	 // The Time Between the Current and Previous Frame
	 
		
		
	// Time.timeScale
		// Example
				Time.deltaScale = 0; // Make the game Pass/Stops
				Time.deltaScale = 1; // Normally (Runs for each Update)
				
				Time.deltaScale = 1 * speed;// Increase the Game speed
				Time.deltaScale = 1- speed/speedmax; // Decrease the Game Speed
	
				// Use this in Push buttons for Pausing the game
				
	// Time.fixedDeltaTime
        // https://docs.unity3d.com/ScriptReference/Time-fixedDeltaTime.html	
	
	
// Destroy 
// if obj is a GameObject it will destroy the GameObject, 
// all its components and all transform children of the GameObject.
https://docs.unity3d.com/ScriptReference/Object.Destroy.html

// GameObject  // Check all destroys!
// https://docs.unity3d.com/ScriptReference/GameObject.html

	// Objects
			// By TriggerBoundry Box Exit
			// By Contact Trigger Box
			// By time
			
	// Destroy by time   
	public float lifetime;
			Destroy(gameObject,lifetime); // Generally in void Start(){};
	// Just Destroy on trigger
			Destroy(gameObject); // Destroy instently
 

 

// Audio 
	https://unity3d.com/learn/tutorials/topics/audio/audio-listeners-sources
	// AudioClip        -Hold Sound Data/Files
	// AudioSources     -Play AudioClips in Scene
	// AudioListioners	
	
	// AudioSources
		Play on Awake // As it starts/Awake it Plays
		
		// In Programming
		AudioSource Myaudio = GetComponent<AudioSource>();
        Myaudio.Play();


// Viewport Space   ( in width and high 0,0 to 1,1 Left to right)
// Screen Space    (in pixels)
// GUI Text
	// To Keep text on screen
	https://docs.unity3d.com/ScriptReference/GUIText.html?_ga=2.13564215.1894978109.1545021849-1837931122.1544416243
    Inspector > Add Component > Rendering > GUI Text

   //In Programming
		public GUIText VarName;
			// scoreText.text = "Score: " + score;
 
 
// Find
	 // GameObject  // Find all finds functions
	 // https://docs.unity3d.com/ScriptReference/GameObject.html 
	// Find ::
		// Finds a GameObject by name and returns it.
		https://docs.unity3d.com/ScriptReference/GameObject.Find.html
		
		//Diff Between   "name"  "/name" 
		
			hand = GameObject.Find("Hand");
			
			// Hand must not have a parent in the Hierarchy view.
			hand = GameObject.Find("/Hand");
			
		
	// FindWithTag::
		// Finds a GameObject by tag and returns it.
		// Returns null if no GameObject was found.
	GameObject.FindWithTag("GameController"); // Finds with Tag // With in Enabled Objects
	
        //Point to Specifc Instance of Specific Class
        GameObject gameControllerObject = GameObject.FindWithTag("GameController");	
			//class instance:: Call its Specific class instance
			GameController gameController = gameControllerObject.GetComponent<GameController>();
			
	
	// FindGameObjectsWithTag:: 
	    //Returns a list of active GameObjects tagged tag. Returns empty array if no GameObject was found.
		
		
		
	// GameObject.transform	
		// Then fine  Search with in that instance.    //Verify ??
		


//Input Keys
Input.GetKeyDown(KeyCode.R) //R or any key
Input.GetButton("Fire1") // Fire button // Check in Edit>ProjectSetting>Input !
 // Touch Screen
 Coordinate starts from (Botton Left) in MobilePhones ???  [ botton Left (0,0)]

 
 // Touch Keys
	 Input.touchCount > 0
	 Touch touch = Input.GetTouch(0);
	 
	 
// Quit
// Quit Application
  Application.Quit();

// Restart Current Application/Scean ?
 Application.LoadLevel(Application.loadedLevel);
  
  // Load Scean
Application.LoadLevel (Application.loadedLevel); // Application.loadedLevel is current Loaded scean


// Trail
private TrailRenderer trail;
trail = GetComponent<TrailRenderer>();
trail.startColor = Color.red;
trail.endWidth = 3;

// Mouse Hovering
Vector2 pos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
transform.position = pos; // Camera
 
 
 
// System Include 
	using UnityEngine;
	using System.Collections;
	using UnityEngine.UI;
	
	// Use of Macros
	#if UNITY_EDITOR
	using UnityEditor;
	#endif
	
	
// UI tools
https://unity3d.com/learn/tutorials/modules/beginner/live-training-archive/using-the-ui-tools
 
 
// onGUI()
https://docs.unity3d.com/Manual/GUIScriptingGuide.html // All gui guide
https://docs.unity3d.com/ScriptReference/MonoBehaviour.OnGUI.html

	// Example
	    void OnGUI()
		{
			if (GUI.Button(new Rect(10, 10, 150, 100), "I am a button"))
			{
				print("You clicked the button!");
			}
		}

		
// Print
	print("You clicked the button!");

//Debug
	// Can Use as Print
	// Using Debug.log()
	  Debug.Log(Time.time);
	  Debug.Log("Anything");
	 
	// Debug DrawRay
	  Debug.DrawRay(transform.position, transform.TransformDirection(Vector3.forward) * hit.distance, Color.yellow);

// Transform

	// Translate
		// move // shift position
		   gameObject.transform.Translate(1, 1, 1);
		
	// Rotate
		Quaternion.identity
		Quaternion target = Quaternion.Euler(10, 0, 0);

	// Scaling
		transform.localScale += new Vector3(0.1F, 0, 0);
		
	// transform.Translate	
		// translate in any Direction !  // With respective to Local direction
		// https://docs.unity3d.com/ScriptReference/Transform.Translate.html
	 gameObject.transform.Translate(Vector3.right * moveWall/2, gameObject.transform);
	 
	 
	 
// Create 
	// Plane Sphere Cube
	// Programmitacly
	
	// Creates a game object with a primitive mesh renderer and appropriate collider.
		// Plane
		GameObject plane  = GameObject.CreatePrimitive(PrimitiveType.Plane);
		// Quad
		GameObject plane  = GameObject.CreatePrimitive(PrimitiveType.Plane);
		// Cube
		GameObject cube = GameObject.CreatePrimitive(PrimitiveType.Cube);
		cube.transform.position = new Vector3(0, 0.5f, 0);
		// Sphere
		GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
		sphere.transform.position = new Vector3(0, 1.5f, 0);
		// capsule
		GameObject capsule = GameObject.CreatePrimitive(PrimitiveType.Capsule);
		capsule.transform.position = new Vector3(2, 1, 0);
		// cylinder
		GameObject cylinder = GameObject.CreatePrimitive(PrimitiveType.Cylinder);
		cylinder.transform.position = new Vector3(-2, 1, 0);
		

// Coordinates Transformation
	// World to Local  ||   Local to World			
	// Vectors to Local and World Coordinates	 Verify??		
	
	// World  Coordinates
		 var worldP = obj.transform.TransformPoint(Vertexmeshfilter);
		 
	// Local Coordinates
		// convert to camera's local coordinates:
		var localP = transform.InverseTransformPoint(worldP);
		
	
// Mesh
		// https://docs.unity3d.com/Manual/PrimitiveObjects.html
	// Making Mesh from triangles !!
	https://docs.unity3d.com/Manual/Example-CreatingaBillboardPlane.html


// RayCast  
RaycastHit hit;
Physics.Raycast(transform.position, transform.TransformDirection(Vector3.forward), out hit, Mathf.Infinity, layerMask)

// SphereCast 
Physics.SphereCast(transform.position,1f,transform.forward,out hit,maxDist)



// 3D Files Format Supports y Unity
	.FBX
	.OBJ

// NetworkManager
	NetworkManager 	  // Add Script Instantiate Network
	NetworkMangerHub  // Instantiate Network Gui For Connecting

	NetworkIdentity // PreFab Must have Network identity as IDs

	NetworkTransform  // Automatically transformin Server

	using UnityEngine.Network
	NetworkBehaviour  // Class
	if (isLocalPlayer== true){}
	if (isserver== true){}
	NetworkServer.Span()//  To show on EveryOne Computer // Only Server Can Run

	[Command]  // We are in Server.	// Commands the Server to Execute the code with in and all clients
	function CmdFunctionName(){};    // Commands - which are called from the client and run on the server;

	[ClientRpc]  // Remote Procedure Calls   // Server to Clients
		     //  ClientRpc calls - which are called on the server and run on clients

	Register Span Prefab // NetworkManager.Instantiate(); // Must be regester in Newtork Manager to Instantiate()


	// Keys On Press Down
	Input.GetKeyDown(KeyCode.Space)

//////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////		
// Functions

	// Update()     {'No Fix Time for Frame refresh Process'}
	// FixedUpdate(){'Fix Time for Frame refresh Process'}

	// GetComponent()

	public Rigidbody rb;
	rb = GetComponent<Rigidbody>();


	// Serializable 
			// To view in Unity as Input
			//Class/Structure // 
	[System.Serializable]
	public class Boundry  
		// Class as a Structue
	{
		public float xMin, xMax, zMin, zMax;
	}


	//Mathf.Clamp
		// Clamp the boundry
		// Can pass rigidboject with in the boundry limit
		   rb.position = new Vector3(
				Mathf.Clamp(rb.position.x, boundry.xMin, boundry.xMax), // In xPosition minx maxx
				0.0f,                                                   // In yposition miny maxy
				Mathf.Clamp(rb.position.z, boundry.zMin, boundry.zMax)  // In zposition minz maxz
				);
		
	// Quaternion	
		// Rotation tilt Controle
		rb.rotation = Quaternion.Euler(0.0f, 0.0f, rb.velocity.x * -tilt);
		
		// Rotation Inputs for rotation
			Quaternion target = Quaternion.Euler(10, 0, 0);
	
	// OnTriggerExit()
		// Destroy everything that leaves the trigger
    void OnTriggerExit(Collider other)
    { 
        Destroy(other.gameObject);
    }
	
	// Random
	 // Random Rotation
		// insideUnitSphere() // Random rotation 
        rb.angularVelocity = Random.insideUnitSphere * tumble;
	

	// OnTriggerEnter
		// On Contact Destro other object
		//void OnTriggerEnter(Collider other)
		//{
		//    Destroy(other.gameObject);
		//    Destroy(gameObject);
		//}	
		
	// Instantiate
		// https://docs.unity3d.com/ScriptReference/Object.Instantiate.html
		 Instantiate(Object original, Vector3 position, Quaternion rotation);
		 
		// Run any Effect : like bullet, Explostion
		 Instantiate(explosion, transform.position, transform.rotation); // GameObject = explosion ! 
		 Instantiate(PlayerExplosion, other.transform.position, other.transform.rotation);// Other Object transform data
		
	
		
	// Wait Pause Hold 
		// for a Second
			yield return new WaitForSeconds(startWait);  // In Program
			
		    StartCoroutine (SpawnWaves()); // function call    if have wait for a socond
			        IEnumerator SpawnWaves() {}// Function Defination  if have wait for a socond
			        
			
			
			// Example
		 void Start()
				{
					StartCoroutine (SpawnWaves()) // Asteroid Waves
				}


			// Astroid Function !
			IEnumerator SpawnWaves()     // Not void if WaitForSeconds Exist !
			{
				yield return new WaitForSeconds(startWait); // When Game Starts Player Waits!

				while (true) // Infinite loop
				{
					for (int i = 0; i < hazardCount; i++)
					{
						Vector3 spawnPostion = new Vector3(Random.Range(-spawnValues.x, spawnValues.x), spawnValues.y, spawnValues.z);
						Quaternion spawnRotation = Quaternion.identity; // Rotation Zero
						Instantiate(hazard, spawnPostion, spawnRotation);
						yield return new WaitForSeconds(spawnWait);
					}
					yield return new WaitForSeconds(waivesWait);// Wait between waves
					spawnWait = spawnWait - spawnWait / 30; // Increase the Astroid after every wave
				}
			}
			
			
// Mesh
// Making Mesh from triangles !!

		var vertices: Vector3[] = new Vector3[4];

		vertices[0] = new Vector3(0, 0, 0);
		vertices[1] = new Vector3(width, 0, 0);
		vertices[2] = new Vector3(0, height, 0);
		vertices[3] = new Vector3(width, height, 0);

		mesh.vertices = vertices;

		 Remembering the clockwise rule for ordering the corners,
		 the lower left triangle will use 0, 2, 1 as its corner indices, 
		 while the upper right one will use 2, 3, 1.
		var tri: int[] = new int[6];

		//  Lower left triangle.
		tri[0] = 0;
		tri[1] = 2;
		tri[2] = 1;

		//  Upper right triangle.   
		tri[3] = 2;
		tri[4] = 3;
		tri[5] = 1;

		mesh.triangles = tri;


		light in the scene
		to see the effect.

		var normals: Vector3[] = new Vector3[4];

		normals[0] = -Vector3.forward;
		normals[1] = -Vector3.forward;
		normals[2] = -Vector3.forward;
		normals[3] = -Vector3.forward;

		mesh.normals = normals;


		UV values will all be 0 or 1, corresponding to the corners of the texture.

		var uv: Vector2[] = new Vector2[4];

		uv[0] = new Vector2(0, 0);
		uv[1] = new Vector2(1, 0);
		uv[2] = new Vector2(0, 1);
		uv[3] = new Vector2(1, 1);

		mesh.uv = uv;


//////////////////////////////////////////////////////////////////////////////////////////
