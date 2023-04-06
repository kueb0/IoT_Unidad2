#include <ESP32Servo.h>

int hm = 15;
int pinServo = 13;
Servo servo;

void setup() {
  pinMode(hm, INPUT);
  Serial.begin(115200);
  servo.attach(pinServo, 500, 2500);
}


void loop() { 
  Serial.print(digitalRead(hm));
  if (digitalRead(hm)) {
    servo.write(90);
    delay(1000);
  } else {
    servo.write(0);
    delay(1000);
  }
}
