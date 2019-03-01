Android

// Content ::
//0   :: Basic
//1   ::  
//2   ::  
//3   ::  
//4   ::  
//5   ::  
//6   ::  
//7   ::  
//8   ::  
//9   ::  
//10  ::  
//11  ::  
//12  ::  
//13  :: 
//14  :: 
//15  :: 


//0  
// https://www.tutorialspoint.com/android/
// Basic
 > Android is Linux-based Operating System
 > Android applications are usually developed in the Java language using the Android Software Development Kit.
 > store :: Google Play, SlideME, Opera Mobile Store, Mobango, F-droid and the Amazon Appstore.
 
 > Requirment
	> Java JDK5 or later version
	> Android Studio

 > Android Runtime	
	> Dalvik Virtual Machine
	
 > The actual application file which ultimately gets converted to a Dalvik executable and runs your application.
 
 
 // Code

 >
	 > onCreate()
	 > onStart()
	 > onResume()
	 > onPause()
	 > onStop()
	 > onDestroy()
	 > onRestart()
	
	 > onStartCommand()
	 > onBind()
	 > onUnbind()
	 > onRebind()
	 
	 > startService() 
	 > startService() 
	 
	 >  public void broadcastIntent(View view){}
	 >  public class MyReceiver extends BroadcastReceiver{}
	 
	 >  public class My Application extends  ContentProvider {}
	     > onCreate()
		 > query()
		 > insert()
		 > delete()
		 > update()
		 > getType()
		 
	 > Fragment
		> Fragment Start
		 > onAttach()
		 > onCreate()
		 > onCreateView()
		 > onActivityCreated()
		 > onStart()
		 > onResume()
		 
		> Fragment End
		 > onPause()
		 > onStop()
		 > onDestroyView()
		 > onDestroy()
		 
		 
		 
	 
	 
 > String msg = "Android : ";
 > Log.d(msg, "The onCreate() event");
 
 > private BluetoothAdapter BA;
 > BA = BluetoothAdapter.getDefaultAdapter();
 
 
 > Android - Clipboard  :: copying and pasting ;
	> ClipboardManager myClipboard;
    > myClipboard.setPrimaryClip(myClip);
	
 > public class MyBackUpPlace extends BackupAgentHelper {}   
      > adb shell bmgr enable true  // Data Backup Enabled
	  > 
 > DDMS stands for Dalvik debug monitor server
	  > Tools>Android>Android device Monitor
	  
 > Android - Gestures
	> GestureDetector myG;
	> myG = new GestureDetector(this,new Gesture());

 > Google Maps                        // https://www.tutorialspoint.com/android/android_google_maps.htm
	> Android allows us to integrate google maps in our application
	> addMarker()   // Customizing Google Map
	  > Marker TP = googleMap.addMarker(new MarkerOptions().position(TutorialsPoint).title("TutorialsPoint")); 
	  > googleMap.getUiSettings().setZoomGesturesEnabled(true);
		> addCircle(CircleOptions options)
		> addPolygon(PolygonOptions options)	
		> addTileOverlay(TileOverlayOptions options)
		> animateCamera(CameraUpdate update)
		> clear()
		> getMyLocation()

 > Android Image Effects              // https://www.tutorialspoint.com/android/android_image_effects.htm
	> private Bitmap bmp;
	> private ImageView img;
	
	> extractAlpha()
	
 > Android - Internal Storage         // https://www.tutorialspoint.com/android/android_internal_storage.htm
	> Writing file
	   > FileOutputStream fOut = openFileOutput("file name here",MODE_WORLD_READABLE);
	> Reading file
	   > FileInputStream fin = openFileInput(file);
	
 > Android - JetPlayer                // https://www.tutorialspoint.com/android/android_jetplayer.htm
	> JET audio content in your applications
		> JetPlayer jetPlayer = JetPlayer.getJetPlayer();
		

 > Android - JSON Parser
	> How to parse the JSON file and extract necessary information
	> JSONObject reader = new JSONObject(in);
	
> Android - LinkedIn Integration
	> Intent shareIntent = new Intent();
	> shareIntent.setAction(Intent.ACTION_SEND);
	
> Android - Loading Spinner
	>  loading progress bar
	> <ProgressBar ___>

> Android - Localization
	> The way of changing string into different languages is called as localization
		> <resources> <string name="hello_world">Ciao mondo!</string> </resources>
		> <resources> <string name="hello_world">Hola Mundo!</string> </resources>
		
> Android - Login Screen   // https://www.tutorialspoint.com/android/android_login_screen.htm

> Android - MediaPlayer    // https://www.tutorialspoint.com/android/android_mediaplayer.htm
	> audio/video files
	> MediaPlayer mediaPlayer = MediaPlayer.create(this, R.raw.song);
		> mediaPlayer.start();
		> mediaPlayer.pause();
		
> Android - Multitouch     // https://www.tutorialspoint.com/android/android_multitouch.htm
	> onTouchEvent() 
		> ACTION_DOWN
		> ACTION_MOVE
		> ACTION_UP
		
> Android - Navigation    //  https://www.tutorialspoint.com/android/android_navigation.htm

> Android - Navigation    // https://www.tutorialspoint.com/android/android_navigation.htm
	> navigation forward and backward between an application
	
> Android - Network Connection      //  https://www.tutorialspoint.com/android/android_network_connection.htm
	> ConnectivityManager check = (ConnectivityManager)

> Android - NFC Guide
		> NFC stands for Near Field Communication  
			>  short range wireless technology having a range of 4cm
			>  sending information over radio waves
		
> Android - PHP/MYSQL              // https://www.tutorialspoint.com/android/android_php_mysql.htm
		> useful in case you have a webserver
			> CREATE DATABASE
			> CREATE TABLE
			> Insert Into 
		
> Android - Progress Circle       // https://www.tutorialspoint.com/android/android_progress_circle.htm
> Android Progress Bar using ProgressDialog        // https://www.tutorialspoint.com/android/android_progressbar.htm
  
> Android - Push Notification     // https://www.tutorialspoint.com/android/android_push_notification.htm
	> notification is a message you can display
		> NotificationManager NM;

> Android - RenderScript        // https://www.tutorialspoint.com/android/android_renderscript.htm
	> 3D Rendering  
	>   perform very highly computational tasks
	
> Android - RSS Reader          // https://www.tutorialspoint.com/android/android_rss_reader.htm
	> RSS stands for Really Simple Syndication
	> easy way to share your website updates and content with your users
	
	
> Android - Screen Cast
	> desktop application to control an android device remotely.
	> Desktop > Android  || Desktop > Android  //  if you phone is rooted , you can communicate 
	
	
> Android - Sensors          // https://www.tutorialspoint.com/android/android_sensors.htm
	> SensorManager sMgr;
	> Sensor light; light = sMgr.getDefaultSensor(Sensor.TYPE_LIGHT);
		> Sensor.TYPE_ALL
		
> Android - Session Management      // https://www.tutorialspoint.com/android/android_session_management.htm
	> store user data outside your application
	> next time user use your application, you can easily get back his details 
	
> Android - SIP Protocol
	> SIP  (Session Initiation Protocol)
	> set up outgoing and incoming voice calls,
	> audio record or playback directly
		> Video conferencing
		> Instant messaging
		
> Android - Spelling Checker
	> spelling checker framework
	
> Android - SQLite Database      // https://www.tutorialspoint.com/android/android_sqlite_database.htm

> Android - Support Library
	> backward compatibility to your code > New Version to Older Version !
	
> Android - Testing
	> JUnit
	> Monkey
	
> Android - Text To Speech    // https://www.tutorialspoint.com/android/android_text_to_speech.htm

> Android - TextureView
	> live video stream or any content stream such as video or an OpenGL scene
	
> Android - Twitter Integration

> Android - WebView        //  https://www.tutorialspoint.com/android/android_webview_layout.htm
	> view that display web pages inside your application
	
> Android - Wi-Fi          // https://www.tutorialspoint.com/android/android_wi_fi.htm
	>  WifiManager mainWifiObj; > mainWifiObj = (WifiManager) getSystemService(Context.WIFI_SERVICE); 
	
> Android - Widgets        // https://www.tutorialspoint.com/android/android_widgets.htm
	> small gadget or control of your android application


> Android - XML Parser    // https://www.tutorialspoint.com/android/android_xml_parsers.htm
	> XML (Extensible Mark-up Language)
		>DOM
		>SAX
		>XMLPullParser 