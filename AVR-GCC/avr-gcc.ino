#include<avr/io.h>
#define LED_PIN 5

void setup() {
  pinMode(LED_PIN, OUTPUT);
  

}

void loop() {
    // Manually declare the states of A and B
  int inputA = 1;  // Set to 1 for logic HIGH, 0 for logic LOW
  int inputB = 1;  // Set to 1 for logic HIGH, 0 for logic LOW

  // Perform AND operation
  int result = inputA && inputB;

  // Blink LED only when Z is 1
  if (result) {
    digitalWrite(LED_PIN, HIGH);
  } else {
    digitalWrite(LED_PIN, LOW);
  }

}
