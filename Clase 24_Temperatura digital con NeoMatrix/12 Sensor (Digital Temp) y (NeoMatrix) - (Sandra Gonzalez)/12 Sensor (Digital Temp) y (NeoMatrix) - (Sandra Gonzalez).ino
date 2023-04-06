#include <Adafruit_NeoPixel.h>
#include <Adafruit_NeoMatrix.h>
#include <Adafruit_GFX.h>

#define PIN 13

int digitalPin = 2; // KY-028 digital interface
int analogPin = 34; // KY-028 analog interface
int digitalVal; // Digital readings
int analogVal;  // Analog readings

Adafruit_NeoMatrix matrix = Adafruit_NeoMatrix(10, 8, 3, 1, PIN,
  NEO_TILE_TOP   + NEO_TILE_LEFT   + NEO_TILE_COLUMNS   + NEO_TILE_PROGRESSIVE +
  NEO_MATRIX_TOP + NEO_MATRIX_LEFT + NEO_MATRIX_COLUMNS + NEO_MATRIX_ZIGZAG,
  NEO_GRB + NEO_KHZ800);

const uint16_t colors[] = {matrix.Color(136, 17, 205), matrix.Color(0, 255, 0), matrix.Color(0, 0, 255)};

void setup() {
  // Put your setup code here, to run once:
  Serial.begin(115200);
  matrix.begin();
  matrix.setTextWrap(false);
  matrix.setBrightness(40);
  matrix.setTextColor(colors[0]);

  pinMode(digitalPin, INPUT); // Sensor
  pinMode(analogPin, OUTPUT);
}

int x = matrix.width();
int pass = 0;

void loop() {
  // Put your main code here, to run repeatedly:
  digitalVal = digitalRead(digitalPin); 
  analogVal = analogRead(analogPin); 
 
  delay(200);
  
  matrix.fillScreen(0);
  matrix.setCursor(x, 0);
  matrix.print("Temp");
  matrix.print(" ");
  matrix.print(analogVal);
  
  if(--x < -100) {
    x = matrix.width();
    if(++pass >= 1) pass = 0;
    matrix.setTextColor(colors[pass]);
  }
  
  matrix.show();
  delay(100);
  Serial.println(analogVal);
}
