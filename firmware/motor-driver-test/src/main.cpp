#include <Arduino.h>

#define PHASE 7
#define SPEED 9

void setup() {
  // put your setup code here, to run once:

  // pinMode(PHASE, OUTPUT);
  DDRE = (1 << PE6);

  // pinMode(SPEED, OUTPUT);
  DDRB = (1 << PB5);

  // Set up PWM frequency, OC1A set, 8-bit Fast PWM, 31.37kHz
  TCCR1A = (1 << COM1A1) | (1 << WGM10);
  TCCR1B = (1 << WGM12) | (1 << CS10);

}

void loop() {
  // put your main code here, to run repeatedly:

  // digitalWrite(PHASE, HIGH);
  PORTE |= (1 << PE6);

  // analogWrite(SPEED, 32);
  OCR1A = 32;

  // delay(1000);
  _delay_ms(1000);

  // digitalWrite(PHASE, LOW);
  PORTE &= ~(1 << PE6);

  // analogWrite(SPEED, 16);
  OCR1A = 16;

  // delay(2000);
  _delay_ms(2000);
}
