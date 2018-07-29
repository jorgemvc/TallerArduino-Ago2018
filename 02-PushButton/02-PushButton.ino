/** @file    02-PushButton.ino
 *  @author  Jorge Villalobos Carvajal (jorgemvc@gmail.com)
 *  @date    07.Ago.2018  
 *  @version 1.0 
 *  
 *  @brief   Uso de un pulsador.
 *
 *  @licence  MIT License
 */
// ---- Variables
int
  pinLed = 3,     // Puerto utilizado para el pinLed
  pinBoton = 2;   // Puerto utilizado por el pinBoton

void setup() {
  pinMode(pinBoton, INPUT);
  pinMode(pinLed, OUTPUT);
  Serial.begin(9600);
}  // setup

void loop() {
  if (digitalRead(pinBoton) == HIGH) {
    digitalWrite(pinLed, HIGH);
  } else {
    digitalWrite(pinLed, LOW);
  }
  // Se agrega un tiempo de espera para mejorar
  // la simulación.
  delay(10); 
} // loop
