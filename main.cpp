/**
 * NOTE:
 * (1) By default, the arduino does reset when establishing a (serial: TX0, RX0) connection with a PC, see: http://playground.arduino.cc/Main/DisablingAutoResetOnSerialConnection
 * (2) For communicating with the computer, use one of these rates: 300, 600, 1200, 2400, 4800, 9600, 14400, 19200, 28800, 38400, 57600, or 115200. 
 */
#include <arduino-core/Arduino.h>

int main() {
  init();// this needs to be called before setup() or some functions won't work there
  Serial.begin(9600);
  
  int i = 0;
  
  ++i;
  Serial.print("aaa "); Serial.println(i);
  delay(100);
  
  ++i;
  Serial.print("bbb "); Serial.println(i);
  delay(100);
  
  ++i;
  Serial.print("ccc "); Serial.println(i);
  delay(100);
  
  while (true) {
    ++i;
    Serial.print("loop "); Serial.println(i);
    delay(100);
  }
  
  Serial.end();
  return 0;
}
