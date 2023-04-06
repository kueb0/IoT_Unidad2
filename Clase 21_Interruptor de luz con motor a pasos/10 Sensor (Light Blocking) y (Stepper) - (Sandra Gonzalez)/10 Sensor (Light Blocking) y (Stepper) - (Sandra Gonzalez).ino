#include <Stepper.h>

// Define step constants
#define FULLSTEP 14
#define SENSOR_PIN 34

int val; // Defines a numeric variable                // Create servo object to control a servo

// Variables will change:
int angle = 0; // The current angle of servo motor
const int stepsPerRevolution = 2038;
Stepper myStepper = Stepper(stepsPerRevolution, 14, 27, 26, 25);

void setup() {
  Serial.begin(9600);         // Initialize serial
  pinMode(SENSOR_PIN,INPUT_PULLUP);
}

void loop() {
  // Rotate CW slowly at 5 RPM
  if(digitalRead(SENSOR_PIN) == HIGH)
  {
    myStepper.setSpeed(10);
    myStepper.step(-stepsPerRevolution);
    delay(1000);
  }
}


