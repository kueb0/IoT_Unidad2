//Definición de las variables
int pinRed = 4;
int pinBlue = 2;
int pinGreen = 15;

//Definición de la función que se ejecuta una vez
void setup() {
  // put your setup code here, to run once:
  //Declaración del modo del pin a utilizar como salida:
  pinMode(pinRed, OUTPUT);
  pinMode(pinBlue, OUTPUT);
  pinMode(pinGreen, OUTPUT);
}

/*
  Declaración de la función que se estara
  ejecutando rapidamente
*/

void loop() {
  // put your main code here, to run repeatedly:
  //Se enciende el pin rojo.
  digitalWrite(pinBlue, 0);
  digitalWrite(pinGreen, 0);
  digitalWrite(pinRed, 255);
  delay(2000);

  //Se enciende el pin verde.
  digitalWrite(pinBlue, 0);
  digitalWrite(pinRed, 0);
  digitalWrite(pinGreen, 255);
  delay(2000);

  //Se enciende el pin amarillo.
  digitalWrite(pinRed, 255);
  digitalWrite(pinGreen, 255);
  digitalWrite(pinBlue, 0);
  delay(2000);
}
