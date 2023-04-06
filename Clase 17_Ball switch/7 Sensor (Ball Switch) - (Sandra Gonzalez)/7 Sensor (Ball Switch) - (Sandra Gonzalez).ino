int ballPin = 2;      // Pin number for Ball switch signal 
int ledPin =  13;     // Pin number of LED 
int ballState = 0;    // Variable for reading the tilt switch status

void setup() {  
  pinMode(ledPin, OUTPUT);  // Set the LED pin as output      
  pinMode(ballPin, INPUT);  // Set the tilt switch pin as input
}

void loop() {
  // Get the tilt switch state
  ballState = digitalRead(ballPin);

  // Check if tilt switch is tilted.
  if (ballState == HIGH) {     
    digitalWrite(ledPin, HIGH);  
  } 
  else {
    digitalWrite(ledPin, LOW); 
  }
}