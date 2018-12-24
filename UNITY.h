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
	Alt + Shuft + MOuseLeftClice Move
	
	
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
	
// Wait Pause Hold 
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
		

// Destroy 
	// Objects
			// By TriggerBoundry Box Exit
			// By Contact Trigger Box
			// By time
			
	// Destroy by time   
	public float lifetime;
			Destroy(gameObject,lifetime); // Generally in void Start(){};
 
 

 

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
 
 
// Instance 
	GameObject.FindWithTag("GameController");
	
        //Point to Specifc Instance of Specific Class
        GameObject gameControllerObject = GameObject.FindWithTag("GameController");	
			// Call its Specific class instance
			GameController gameController = gameControllerObject.GetComponent<GameController>();
			
//Print
	// Using Debug.log()
	  Debug.Log(Time.time);
	    Debug.Log("Anything");
		
		


//Input Keys
Input.GetKeyDown(KeyCode.R) //R or any key
Input.GetButton("Fire1") // Fire button // Check in Edit>ProjectSetting>Input !
 // Touch Screen
 Coordinate starts from (Botton Left) in MobilePhones ???  [ botton Left (0,0)]

 
 // Touch Keys
	 Input.touchCount > 0
	 Touch touch = Input.GetTouch(0);
	 
	 

// Quit Application
  Application.Quit();

// Restart Current Application/Scean ?
 Application.LoadLevel(Application.loadedLevel);
  
  // Load Scean
Application.LoadLevel (Application.loadedLevel); // Application.loadedLevel is current Loaded scean




 
 
 
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

//////////////////////////////////////////////////////////////////////////////////////////