#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16, 2);

int digitalPin = 2;  // KY-028 digital interface
int analogPin = 34;  // KY-028 analog interface
int digitalVal; // Digital readings
int analogVal;  // Analog readings

void setup() {
  pinMode(digitalPin, OUTPUT);
  pinMode(analogPin, OUTPUT);
  
  Serial.begin(115200);
  
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);
}

void loop() {
  // Read the digital interface
  digitalVal = digitalRead(digitalPin); 
  analogVal = analogRead(analogPin); 
 
  if(analogVal < 270 ) {    
    lcd.print("T. Alta");
  } else if (analogVal >= 271 && analogVal < 499) {
    lcd.print("T. Media");
  } else if (analogVal > 500 && analogVal < 900){
    lcd.print("T. Baja"); 
  }

  Serial.println(analogVal);
  delay(1000);
  lcd.clear();
}
