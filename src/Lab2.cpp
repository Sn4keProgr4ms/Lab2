/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "/Users/admin/Desktop/Remys_Labs/Lab2/src/Lab2.ino"
void setup();
void loop();
#line 1 "/Users/admin/Desktop/Remys_Labs/Lab2/src/Lab2.ino"
uint16_t value;

SYSTEM_MODE(MANUAL)
SYSTEM_THREAD(ENABLED)

void setup() {
  Serial.begin(9600);
  pinMode(D5, OUTPUT);
}

void loop() {
uint16_t value = analogRead(value);
value = analogRead(A5);
digitalWrite(D5, HIGH);
delay(value);
digitalWrite(D5, LOW);
delay(value);

}