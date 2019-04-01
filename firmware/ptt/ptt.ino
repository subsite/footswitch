
#include <Keyboard.h>

// Push-To-Talk footswitch

int buttonPin = 3;  // Set a button to any pin
char key = KEY_RIGHT_SHIFT;

void setup()
{
  pinMode(buttonPin, INPUT);  // Set the button as an input
  digitalWrite(buttonPin, HIGH);  // Pull the button high
  Keyboard.begin();
}

void loop()
{
  if (digitalRead(buttonPin) == 0) {
    Keyboard.press(key);
    delay(100);  
  } else {
    Keyboard.release(key);
  }
}
