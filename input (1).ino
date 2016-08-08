#include "wire.h" 
void setup() {
  // put your setup code here, to run once:
  Wire.begin();
  Wire.beginTransmission(0x20);
  Wire.write(0x00);//DDRA Address DDRB=0x01
  Wire.write(0xFF);//Input
  Wire.endTransmission();
}

void loop() {

  Wire.beginTransmission(0x20);
  Wire.write(0x12);//DDRA Address DDRB=0x01
  Wire.endTransmission();

  Wire.requestFrom(0x20,1);
  byte inputData= Wire.read();
  if(input>0){
    Serial.println(input,BIN);
    delay(1000);
    }
}