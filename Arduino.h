// ARDUINO

// Content
// 1 :: Serial
// 2 :: 
// 3 :: 
// 4 :: 
// 5 :: 
// 6 :: 

// Serial
https://www.arduino.cc/en/Serial/Readhttps://www.arduino.cc/en/Serial/Readhttps://www.arduino.cc/en/Serial/Readhttps://www.arduino.cc/en/Serial/Read
Serial.begin(9600);  //Serial communications, at 9600 bits of data per second, between your board and your computer 
if (Serial.available() > 0) {}
rx_byte = Serial.read(); 
InCommingdata=digitalRead(Pin);   // https://www.arduino.cc/reference/en/language/functions/communication/serial/println/
InCommingdata=digitalRead(Pin, format);   // format = DEC,HEX, OCT,BIN
InComingdata=analogRead(PIR);
Serial.print("Welcome ");
Serial.println(rx_str);

pinMode(A1, INPUT);
pinMode(A1, INPUT_PULLUP); // Creats Resistance with output voltage

Left Left 24