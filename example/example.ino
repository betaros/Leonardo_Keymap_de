/*
 * Open Notepad and writes 'Hello World'
 * when Arduino is connected
 */

#include "../keycodes_de.h"

void setup() {
  Keyboard.begin();
}

void loop() {
  delay(100);

  // WINDOWS-R:
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(100);
  Keyboard.releaseAll();

  // open Notepad
  Keyboard.print("notepad");
  delay(100);
  Keyboard.releaseAll();

  // ENTER
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.releaseAll();

  // Writes Hello World
  sendInput("Hello World");
  
  // do nothing:
  while (true);
}
