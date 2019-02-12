# Digitale-Flugblaetter 


# Einleitung
Flugblätter waren in den letzten Jahrhunderten eine sehr erfolgreiche Technik. Nun habe ich Flugblätter und Computer verknüpft und Digitale Flugblätter erstellt, welche keine Resourcen verbrauchen und an das 21. Jahrhundert angepasst sind! Viel spaß damit, gebt die Programme gerne weiter oder Verbessert sie...

# Rechtliches 
Auch wenn sich die Digitalen Flugblätter vielleicht dafür eignen würden, sie auf Schul-Vertretungsplanern, Anzeigetafeln oder anderen Windowsbasierten Anzeigetafeln anzuwenden, ist es nicht erlaubt, wenn der Besitzer nicht vorher zugestimmt hat. Für mehr Informationen über die rechtliche Lage siehe https://www.eulisp.de/tl_files/eulisp%20abschlussarbeiten/loerke_michael.pdf oder https://www.internetrecht-rostock.de/hackerparagraf.htm. Ich übernehme keine Haftung für die Anwendung der beigefügten Programme, informiert Euch bitte vorher selbst, was erlaubt ist und was nicht.

Auch wenn die Digitalen Flugblätter hier im Beispiel Fridays for Future Plakate öffnen, sind sie nicht von Fridays for Future, und Fridays for Future steht weder in Verbindung mit mir noch ist Fridays for Future darüber informiert. Das Plakat dient hier nur als ein Beispiel. Ich finde das Anliegen von FFF aber gut. Engagiert Euch bitte auch für den Klimaschutz!

# Anleitung
Um die Digitalen Flugblätter einsetzen zu können, benötigt ihr ein DigiSpark ATtiny85 USB Development Board (Link zu Amazone:  https://www.amazon.de/AZDelivery-Digispark-Kickstarter-Development-ATtiny85/dp/B01N7SGC1I/ref=sr_1_1_sspa?ie=UTF8&qid=1549893293&sr=8-1-spons&keywords=digispark&psc=1 )
Nun ladet ihr (falls nicht schon vorhanden) die Arduino IDE herunter, um Programme für den DigiSpark zu Programmieren und schon vorhandene draufzuspielen.
(Link:https://www.arduino.cc/en/main/software )
Nun müsst ihr die treiber für den DigiSpark Installieren (Link: https://github.com/digistump/DigistumpArduino/releases/download/1.6.7/Digistump.Drivers.zip )
und Anschließend Folgende Schritte Ausführen (Anleitung mit Bildern aber auf Englisch hier: http://digistump.com/wiki/digispark/tutorials/connecting) :

0.)Steckt das DigiSpark board in die USB Schnittstelle eures Computers (sorum, das die rote Lampe leuchtet)

1.) Geht in die Arduino IDE und oben bei der toolbar auf Datei (file)  →  Einstellungen (Preferences)

2.)Gebt in das Feld "Zusätzliche Boards Manager-URLs" Folgendes ein: http://digistump.com/package_digistump_index.json

3.)Geht in der Toolbar auf "Tools" und dann zum Untermenü "Board" - wählt "Boards Manager" und dann aus der Dropdown-Liste "Contributed" :  „Digistump AVR Boards“

4.) Klickt auf Installieren

5.) Wenn die Installation zu Ende ist, geht ihr zurück ins Menü und dann auf Werkzeuge (Tools) → Boards → "Digispark (Default- 16,5 MHz)"

Fertig !

Nun Könnt ihr die Digitales_Flugblatt_DE datei öffnen (verbessern/anpassen) und auf den DigiSpark hochladen !
Danach ist er aktiv und führt das auf ihm gespeicherte Programm sofort aus, wenn er in den USB Port eines Computers gesteckt wird ! 
# Hinweise zu den Programmen 
Das Programm Digitales_Flugblatt_DE_T0 öffnet die über die Eingabeaufforderung einen Link (zu einem Fridays for Future Plakat) und Maximiert das Bild. Das Programm enthält KEINE Zeitverzögerung !

Das Programm Digitales_Flugblatt_DE_T05 offnet die Kommandozeile (cmd.exe), Downloadet ein Programm, welches, 5 Minuten nachdem es gestartet wurde, einen Link (zu einem Fridays for Future Plakat) öffnet und das Bild Maximiert. Danach löscht sich das Programm von selbst (um "Nicht den Computer zu vermüllen" ;) ). Sobalt die 2. rote LED am DigiSpark leuchtet, kann man den Stick wieder herrausziehen (Das Programm ist dann gestartet und ab dann läuft der 5 min Timer)

Das Programm Digitales_Flugblatt_DE_T30 macht das gleiche wie das Programm Digitales_Flugblatt_DE_T05, nur mit 30 min verzögerung...

Die Programme mit US im Namen sind für Computer mit Amerikanischem Tastatur Layout








