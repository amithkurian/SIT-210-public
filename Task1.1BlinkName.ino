#include <Arduino.h>

const int dotDelay = 1000;  // duration of a dot in milliseconds, a dot should last for 1 second
const int dashDelay = 3 * dotDelay;  // duration of a dash in milliseconds
const int spaceDelay = 3 * dotDelay;  // duration of space between letters

const int buttonPin = 2;  // Assuming the button is connected to digital pin 2

bool shouldBlink = true;  // Flag to control blinking

void blinkDot() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dotDelay);
  digitalWrite(LED_BUILTIN, LOW);
  delay(dotDelay);
}

void blinkDash() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dashDelay);
  digitalWrite(LED_BUILTIN, LOW);
  delay(dotDelay);
}

void blinkSpace() {
  delay(spaceDelay);
}

void blinkA() {
  blinkDot();
  blinkDash();
  blinkSpace();
}

void blinkM() {
  blinkDash();
  blinkDash();
  blinkSpace();
}

void blinkI() {
  blinkDot();
  blinkDot();
  blinkSpace();
}

void blinkT() {
  blinkDash();
  blinkSpace();
}

void blinkH() {
  blinkDot();
  blinkDot();
  blinkDot();
  blinkDot();
  blinkSpace();
}

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  // Check if the button is pressed
  if (digitalRead(buttonPin) == HIGH && shouldBlink) {
    // Blink "A"
    blinkA();

    // Blink "M"
    blinkM();

    // Blink "I"
    blinkI();

    // Blink "T"
    blinkT();

    // Blink "H"
    blinkH();

    // Stop blinking after "H"
    shouldBlink = false;
  }
}
