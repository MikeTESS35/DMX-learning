#include <DMXSerial.h>

void setup() {
  DMXSerial.init(DMXController);
  
}

void loop() {
  
  DMXSerial.write(1,1);
  
delayMicroseconds(2000);
}
