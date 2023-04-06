int ledRed = 2;
int ledGreen = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledRed, OUTPUT);    // Module's red pin
  pinMode(ledGreen, OUTPUT);  // Module's green pin

  digitalWrite(pinRed, LOW);   // Switch off red
  digitalWrite(pinGreen, LOW)
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pinRed, HIGH);   // Switch on red
  delay(1000)  // Wait 1 second
  digitalWrite(pinGreen, LOW);  // Switch off red
  delay(1000)  // Wait 1 second
  digitalWrite(pinGreen, HIGH); // Switch on green
  delay(1000)  // Wait 1 second
  igitalWrite(pinRed, LOW);   // Switch off green
  delay(1000)  // Wait 1 second
}
