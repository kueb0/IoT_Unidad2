int motor = 2;

#define sensorInclinacion 14

void setup() {
  pinMode(motor, OUTPUT);
  pinMode(sensorInclinacion, INPUT);
    
  Serial.begin(115200);
}

void loop() {
  digitalWrite(motor, digitalRead(sensorInclinacion));
}
