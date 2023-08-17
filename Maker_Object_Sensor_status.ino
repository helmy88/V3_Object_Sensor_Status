int pin_FL = A2;
int pin_FC = A4;
int pin_FR = A0;
int pin_L = A3;
int pin_R = A5;

int threshold = 500; // Adjust this threshold value based on your sensor characteristics

void setup() {
  Serial.begin(9600); // Initialize Serial Monitor
}

void loop() {
  int reading_FL = analogRead(pin_FL);
  int reading_FC = analogRead(pin_FC);
  int reading_FR = analogRead(pin_FR);
  int reading_L = analogRead(pin_L);
  int reading_R = analogRead(pin_R);
  
  Serial.println("Sensor Statuses:");
  Serial.print("Front Left: ");
  Serial.println(reading_FL > threshold ? "Obstacle Detected!" : "No Obstacle Detected");
  
  Serial.print("Front Center: ");
  Serial.println(reading_FC > threshold ? "Obstacle Detected!" : "No Obstacle Detected");
  
  Serial.print("Front Right: ");
  Serial.println(reading_FR > threshold ? "Obstacle Detected!" : "No Obstacle Detected");
  
  Serial.print("Left: ");
  Serial.println(reading_L > threshold ? "Obstacle Detected!" : "No Obstacle Detected");
  
  Serial.print("Right: ");
  Serial.println(reading_R > threshold ? "Obstacle Detected!" : "No Obstacle Detected");
  
  delay(1000); // Delay to avoid rapid Serial Monitor output
}
