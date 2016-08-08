#include "wire.h" 
void setup() {
  // put your setup code here, to run once:
  Wire.begin();
  Wire.beginTransmission(0x20);
  Wire.write(0x00);//DDRA Address DDRB=0x01
  Wire.write(0x00);//Output
  Wire.endTransmission();
  
  Wire.beginTransmission(0x20);
  Wire.write(0x01);//DDRB Address DDRB=0x01
  Wire.write(0x00);//Output
  Wire.endTransmission();
  

  
}

void loop() {
  // put your main code here, to run repeatedly:
  Wire.beginTransmission(0x20);
  Wire.write(0x12);//PortA Register
  Wire.write(0xFF);//Output
  Wire.endTransmission();

  delay(1000);
  
  Wire.beginTransmission(0x20);
  Wire.write(0x12);//PortA Register
  Wire.write(0x00);//Output
  Wire.endTransmission();

}