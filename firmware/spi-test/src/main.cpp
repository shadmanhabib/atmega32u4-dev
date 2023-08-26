#include <Arduino.h>

#define LED_BUILTIN 13

int i;

void setup() {
  // Initialise serial communication
  Serial.begin(9600);

  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);
  i = 0;

  delay(5000);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH);

  Serial.print(i);
  Serial.println("ms in loop");
  i++;

  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
}