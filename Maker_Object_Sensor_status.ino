const int opponentSensorPin = 2; // Change this to the appropriate pin number

void setup() {
  Serial.begin(9600); // Initialize Serial Monitor
  pinMode(opponentSensorPin, INPUT); // Set the sensor pin as input
}

void loop() {
  // Read the state of the opponent sensor
  int opponentState = digitalRead(opponentSensorPin);
  
  // Check the opponent sensor's state and display status
  if (opponentState == HIGH) {
    Serial.println("Opponent Detected!");
  } else {
    Serial.println("No Opponent Detected");
  }
  
  delay(1000); // Delay to avoid rapid Serial Monitor output
}
