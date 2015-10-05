#include "logger.h"

#define DELAY 10
#define led 13

unsigned long time;

void setup() {
    Serial.begin(115200);
    time = millis();
    pinMode(led, OUTPUT);

}

void loop() {
    if ((millis() - time) > DELAY) {
        time = time + DELAY;

        digitalWrite(led, HIGH);
        int i = analogRead(4);
        digitalWrite(led, LOW);
        int v = analogRead(5);
        digitalWrite(led, HIGH);

        Serial.print(i);
        Serial.print(",");
        Serial.println(v);
        digitalWrite(led, LOW);
    }
}
