/** @file    00-Blink.ino
 *  @author  Jorge Villalobos Carvajal (jorgemvc@gmail.com)
 *  @date    07.Ago.2018  
 *  @version 1.0
 *  
 *  @brief   Parpadeo de un led externo
 *
 *  @licence  MIT License
 */
int led = 3;           // Puerto del led (PWM)

void setup() {
  // ---- Declara el puerto del led como salida
  pinMode(led, OUTPUT);
}  // void setup

void loop() {
  // Enciende el led por un segundo (1000 milisegundos)
  digitalWrite(led, HIGH);
  delay(1000);

  // Apaga el led por un segundo (1000 milisegundos)
  digitalWrite(led, LOW);
  delay(1000);
} // void setup
