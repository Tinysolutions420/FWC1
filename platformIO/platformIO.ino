// Define the input and output pins
const int inputPin1 = 2;
const int inputPin2 = 3;
const int outputPin = 4;

// Define the state of the LED
int ledState = LOW;

void setup() {
  // Set the input pins as inputs
  pinMode(inputPin1, INPUT);
  pinMode(inputPin2, INPUT);

  // Set the output pin as an output
  pinMode(outputPin, OUTPUT);

  // Initialize the LED state
  digitalWrite(outputPin, LOW);
}

void loop() {
  // Read the values of the input pins
  digitalWrite(inputPin1,HIGH);
  digitalWrite(inputPin2,HIGH);
  int inputValue1 = digitalRead(inputPin1);
  int inputValue2 = digitalRead(inputPin2);

  // If the correct option is popped, then turn on the LED
  if (inputValue1 == LOW&& inputValue2 == LOW) {
    ledState = HIGH;
  } 
  if (inputValue1 == LOW&& inputValue2 == HIGH) {
    ledState = HIGH;
  } 
  if (inputValue1 == HIGH && inputValue2 == LOW) {
    ledState = LOW;
  } 
  if (inputValue1 == HIGH && inputValue2 == HIGH) {
    ledState = HIGH;
  } 
  // Write the LED state to the output pin
  digitalWrite(outputPin, ledState);

  // Make the LED blink
  delay(500);
//  digitalWrite(outputPin, LOW);
  delay(500);
}
