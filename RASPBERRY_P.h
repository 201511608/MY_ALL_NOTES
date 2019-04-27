RASPBERRY PI

// Content
//-1 :: // Python
// 0 :: // CMD
// 1 :: // BASIC
// 2 :: // Linux
// 3 :: // GPIO

// -1 
// python
// pip    // https://www.w3schools.com/python/python_pip.asp
// PIP is a package manager for Python packages
print(3 * '*')
print(a[i], end =" ")  
exit()
int('1') // convert to int
import time // time.sleep(0.3) //seconds
import sys 
// To take inputs from CMD
// This module provides access to some variables used or maintained by the interpreter and to functions
// that interact strongly with the interpreter. It is always available.
// https://docs.python.org/2/library/sys.html
sys.argv[1] // argv take as STRING 	
	// python filename.py string[1] string[2]






// 0
// CMD
nano filename // TextEditor
vi			  // TextEditor
vim			  // TextEditor // i = tostarttyping  // wq WriteQuit
sudo apt-get install PROGRAMNAME
cp file1 file2
passwd 		// CHANGE PASSWORD 
passwd LoginId  // sudo passwd LoginID
ifconfig -a // Ip info
sudo raspi-config  // Settings  // wifi and others
sudo iwlist wlan0 scan  // Scan all WIFI
sudo su // Make you super user
	cd /  // Access root files
	cd prok // Access root files
exit // Back to normal
sudo Anycommand   // superuser for that particular command
sudo reboot // Restarts
sudo shutdown -h now // -h hold  -r restart




// 1
// BASIC
// Help
http://helpdesk.txplore.com/support/home

// Git Documents Programs
https://github.com/futureshocked/RaspberryPiFullStack_Raspbian

PowerSupply 5V 2.5 mA

//RaspberryPi        //Arduino
OperationSysten        NooperatingSystem
C++, Python, Others    C++

// FULLFORMS
 UART is hardware while
 SPI is a communication protocol
 GPIO stands for General Purpose Input Output. 
 
 CLI Command Line Interface
 Electronic stability control (ESC),also referred to as 
 electronic stability program (ESP) 
 or dynamic stability control (DSC)

// Operating Systems
https://www.raspberrypi.org/downloads/
	// FLASH MEAMORY
		https://www.balena.io/etcher/

 Raspbian Pi
 
 // wifi config
 wpa_supplicant.conf  // filename
		network={  // inside file
					ssid="YOUR_NETWORK_NAME"
					psk="YOUR_PASSWORD"
					key_mgmt=WPA-PSK
				}
				
 // ssh  ~ secure shell
	https://www.raspberrypi.org/documentation/remote-access/ssh/
	SSH is typically used to log into a remote machine and execute commands,
	but it also supports tunneling, forwarding TCP ports and X11 connections; 
	it can transfer files using the associated SSH file transfer (SFTP) or 
	secure copy (SCP) protocols. SSH uses the client-server model.
	
// Default User
	user = pi
	pass = raspberry  // change password by typing 'passwd'
	
	
// Connect to Raspberrypi from any laptop
	// ssh connections	
		ssh pi@192.168.0.109  //ip addresss
		ssh root@192.168.0.109 //ip address
		
// Ip Scanner from windows software
	// https://www.advanced-ip-scanner.com/
		// putty for connect to raspberryPi
			// https://www.putty.org/
	



// root access from remote ssh
sudo su
	nano /etc/ssh/sshd_config  // Change
		PermitRootLogin yes  

// Restart config
sudo /etc/init.d/ssh restart

// BackUp All Check Video

// RASPBERRYPI PINS NUMBERING
1  2
3  4
.....
39 40
EVEN ODD

// Python 3 2008 Released








// 2
// Linux
diskutil list // List of all disk
sudo dd if=FROMLOCATION of=~TOLOCATION/FILENAME.IMG/DMG // BACK UP IN Linux
sudo newfs_msdos -F 16 DISKLOCATION // TO FORMATDISK //fs fileSystem  -F fat DISKLOCATION from disutil list
sudo dd if=FILELOCATION.IMG/DMG of=~DISKLOCATION //RESTORE BACKUP FILE // DISKLOCATION FROM diskutil list

python --version // CheckVersion
python3 --version // CheckVersion



// 3
// GPIO
	// General Puropse Input Output
rpi.gpio // raspberryPi lib for python
sudo apt-get install rpi-gpio
pip3 install rpi-gpio

import RPi.GPIO as GPIO    // GPIO
GPIO.setmode(GPIO.BOARD) 
GPIO.setmode(GPIO.BCM)   // Body Control Module 
GPIO.setup(pin,GPIO.OUT)
GPIO.setup(pin,GPIO.IN)
GPIO.output(pin,GPIO.LOW)
