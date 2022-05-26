#include <SoftwareSerial.h>


#define BAUD_RATE 9600

SoftwareSerial arduino(9, 10);
SoftwareSerial arduino2(11,12);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(BAUD_RATE);
  arduino.begin(9600);
  arduino2.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  while (arduino.available()) {
    //String image = String(esp.read());
    //String frame = Serial.write(esp.read());
    Serial.write(arduino.read());

    arduino2.write(Serial.read());
    

  }
}
