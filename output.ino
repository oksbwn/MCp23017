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
  
  Wire.beginTransmission(0x20);
  Wire.write(0x01);//DDRB Address DDRB=0x01
  Wire.write(0x00);//Output
  Wire.endTransmission();
  
}

void loop() {
  // put your main code here, to run repeatedly:

}