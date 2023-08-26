#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  while(!Serial) {
    // Do nothing
    delay(1000);
  }

  Serial.println("This is the setup...");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Hello World!");
  delay(1000);
}
