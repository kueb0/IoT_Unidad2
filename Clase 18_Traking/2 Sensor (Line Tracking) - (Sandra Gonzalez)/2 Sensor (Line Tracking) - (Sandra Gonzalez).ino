#define sensor 2

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  
  pinMode(sensor, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  bool value = digitalRead(sensor);

  if (value == 0) {
    Serial.println("Blanco");
    delay(500);
  } else {
    Serial.println("Negro");
    delay(500);
  }
}
