#include <Arduino.h>
void setup() {
// write your initialization code here
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
// write your code here
    digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));
    delay(1000);
}