#include <Adafruit_ESP8266.h>

#include "DigiKeyboard.h"
# Board: Digispark Pro 16MHz
int led = 0;  // Change to pin 1 for MODEL A
int on_wait = 2000;  // How long to toggle CAPS LOCK for.
int off_wait = 2000;  // Delay between toggles.

void setup() {
  pinMode(led, OUTPUT);
  DigiKeyboard.update();
}

void loop() {
  DigiKeyboard.sendKeyStroke(57);
  digitalWrite(led, HIGH);
  delay(on_wait);
  DigiKeyboard.sendKeyStroke(57);
  digitalWrite(led, LOW);
  delay(off_wait);
}
