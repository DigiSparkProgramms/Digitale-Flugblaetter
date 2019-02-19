#include "DigiKeyboard.h"
void setup() {
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(3000);
  DigiKeyboard.print("https>&&enough/is/enough14.org&wp/content&uploads&2019&01&schulstreikflzer.jpg"); //öffnet einen Link  (zu einem Bild) im Internet
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_F11); // Maximiert das Bild
}

void loop() {
  //Credits to Herolias

}
