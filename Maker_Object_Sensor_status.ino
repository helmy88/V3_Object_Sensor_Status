const int sensorPins[] = {2, 3, 4, 5, 6}; // Array of sensor pins
const int numSensors = sizeof(sensorPins) / sizeof(sensorPins[0]); // Number of sensors

void setup() {
  Serial.begin(9600); // Initialize Serial Monitor
  
  for (int i = 0; i < numSensors; i++) {
    pinMode(sensorPins[i], INPUT); // Set sensor pins as input
  }
}

void loop() {
  for (int i = 0; i < numSensors; i++) {
    checkSensor(i); // Call the function to check the sensor
    delay(1000); // Delay before checking the next sensor
  }
}

void checkSensor(int sensorIndex) {
  int sensorState = digitalRead(sensorPins[sensorIndex]);
  
  // Display status based on sensor state
  Serial.print("Sensor ");
  Serial.print(sensorIndex + 1);
  if (sensorState == HIGH) {
    Serial.println(": Opponent Detected!");
  } else {
    Serial.println(": No Opponent Detected");
  }
}
