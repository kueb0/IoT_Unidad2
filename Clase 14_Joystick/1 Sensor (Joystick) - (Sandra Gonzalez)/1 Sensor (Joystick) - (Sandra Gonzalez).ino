#define VRX_PIN 32
#define VRY_PIN 34

int valueX = 0;
int valueY = 0;

void setup() {
  Serial.begin(115200);
}

void loop() {
  valueX = analogRead(VRX_PIN);
  valueY = analogRead(VRY_PIN);

  Serial.print("x = ");
  Serial.print(valueX);
  Serial.print(", y = ");
  Serial.println(valueY);
  delay(2000);
}
