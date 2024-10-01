#include <Arduino.h>
#include <WSerial.h>

#define LED_PIN PC13

void setup() {
  Serial.begin(115200);

  pinMode(LED_PIN, OUTPUT);
  delay(3000);
  Serial.println("Start!");
}

void loop() {
  Serial.println("LED off!");
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  Serial.println("LED on!");
  digitalWrite(LED_PIN, LOW);
  delay(1000);
}