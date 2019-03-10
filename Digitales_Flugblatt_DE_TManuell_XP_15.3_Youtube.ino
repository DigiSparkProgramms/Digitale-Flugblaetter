
#include "DigiKeyboard.h"
#define KEY_TAB     43
#define KEY_DOWN_ARROW 0x51
void setup() {
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(0);//Nachfolgende Befehle Schließen das WinXP Dialog Fenster
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);
  DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);
 // DigiKeyboard.delay(7500000);//Manuelle Wartezeit
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(3000);
  DigiKeyboard.print("cmd.exe");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("Start iexplore @zoutube.com&embed&D1monu7dsoZ_autoplaz)1^loop)1^fullscreen)1^plazlist)D1monu7dsoZ@");
  //DigiKeyboard.print("https>&&www.zoutube.com&embed&D1monu7dsoZ_autoplaz)1^loop)1^fullscreen)1^plazlist)D1monu7dsoZ");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);
  DigiKeyboard.sendKeyStroke(KEY_F11);

}


void loop() {
  //-.- 
}
