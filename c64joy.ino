#include <Keyboard.h>

#define JOY_UP        11
#define JOY_DOWN      10
#define JOY_LEFT      9
#define JOY_RIGHT     8
#define JOY_BUTTON    12

void setup() {

  Keyboard.begin();

  pinMode(JOY_BUTTON, INPUT_PULLUP);
  pinMode(JOY_UP, INPUT_PULLUP);
  pinMode(JOY_DOWN, INPUT_PULLUP);
  pinMode(JOY_LEFT, INPUT_PULLUP);
  pinMode(JOY_RIGHT, INPUT_PULLUP);

}

void loop() {

  if (!digitalRead(JOY_BUTTON)) { Keyboard.press('q'); }
  else { Keyboard.release('q'); }
  
  if (!digitalRead(JOY_UP)) { Keyboard.press('w'); }
  else {  Keyboard.release('w'); }

  if (!digitalRead(JOY_DOWN)) { Keyboard.press('s'); }
  else {  Keyboard.release('s'); }

  if (!digitalRead(JOY_LEFT)) { Keyboard.press('a'); }
  else {  Keyboard.release('a'); }

  if (!digitalRead(JOY_RIGHT)) { Keyboard.press('d'); }
  else {  Keyboard.release('d'); }

}
