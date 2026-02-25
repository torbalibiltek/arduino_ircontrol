#include <IRremote.hpp>
#define IR_RECEIVE_PIN 11
long oku;

void setup()
{
  Serial.begin(9600); 
  IrReceiver.begin(IR_RECEIVE_PIN, ENABLE_LED_FEEDBACK); 
}

void loop() {
  if (IrReceiver.decode()) {
    oku=IrReceiver.decodedIRData.decodedRawData;
      Serial.println(oku,HEX); 
    IrReceiver.resume(); 
  }
  
}
