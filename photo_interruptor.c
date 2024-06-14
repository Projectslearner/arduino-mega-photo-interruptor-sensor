/*
    Project name : Photo interruptor sensor
    Modified Date: 14-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-mega-photo-interruptor-sensor
*/

const int photoInterruptorPin = 2; // Digital pin connected to the photo interruptor sensor

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(photoInterruptorPin, INPUT_PULLUP); // Set the pin as input with internal pull-up resistor
}

void loop() {
  // Read the state of the photo interruptor sensor
  int sensorState = digitalRead(photoInterruptorPin);
  
  // Print the sensor state to the Serial Monitor
  if (sensorState == LOW) {
    Serial.println("Object Detected!"); // Print if object interrupts the sensor
  } else {
    Serial.println("No Object Detected"); // Print if no object is detected
  }
  
  delay(500); // Add a small delay before the next reading
}
