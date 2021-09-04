#include <Arduino.h>
#include <Ultrasonico.h>

Ultrasonico ultrasonicoCocina(5,6);
Ultrasonico ultrasonicoBano(1,2);
Ultrasonico ultrasonicoPieza(3,4);
Ultrasonico ultrasonicoGaraje(7,8);
Ultrasonico ultrasonicoTerraza(8,9);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  ultrasonicoCocina.init();
  ultrasonicoBano.init();
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(ultrasonicoCocina.read());
  Serial.println("hola hola");
}