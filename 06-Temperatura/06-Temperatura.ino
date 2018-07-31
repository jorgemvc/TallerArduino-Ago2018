/** @file    06-Temperatura.ino
 *  @author  Jorge Villalobos Carvajal (jorgemvc@gmail.com)
 *  @date    07.Ago.2018  
 *  @version 1.0 
 *  
 *  @brief   Lectura de un sensor de temperatura
 *
 *  @licence  MIT License
 */
int
  tempPin = A1,
  sensorValue;

void setup() {
  Serial.begin(9600);
}  // void setup

void loop() {
  // Realiza la lectura del sensor
  sensorValue = analogRead(tempPin);

  // Voltaje obtenido de los 5V posibles
  float voltage = (sensorValue / 1024.0) * 5.0;

  // La base del sensor está desplazada 
  // 500mV (-50 grados)
  // Cada 10mV se incrementa 1 grado celsius
  float temp = (voltage - 0.5) * 100;
  delay(500);
  
//  Serial.print("Voltaje: ");
//  Serial.print(voltage);
//  Serial.print(" - Temperatura: ");
//  Serial.print(temp);
//  Serial.println(" C");

  Serial.println(temp);
} // void loop
