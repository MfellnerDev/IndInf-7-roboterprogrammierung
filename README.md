# IndInf 7.1 Roboterprogrammierung [GK] – 4h

Abschlussbedingungen

**Erledigt:** Anzeigen **Zu erledigen:** Abgabe einreichen **Zu erledigen:** Eine Bewertung erhalten

# Roboterprogrammierung

Roboter sind IT-Systeme, die mit der Welt physikalisch interagieren. Die Programmierung unterscheidet sich in vielen Punkten von der klassischen "Applikationsentwicklung", da hier Problemfelder wie Sicherheit (im Sinne körperlicher Sicherheit, Verletzungsvermeidung, ...) und verlässlicher Betrieb in Zusammenarbeit mit vielen verschiedenen Geräten und Komponenten in Spiel kommen.

Diese Übung soll einen kleinen Einblick in diese spannende Welt geben, um "Awareness" für eine mögliche zukünftige Zusammenarbeit mit Mechatronikern und Automatisierung zu schaffen - und um einmal mit den coolen Spielzeugen hantieren zu dürfen 😄

## Voraussetzungen

Im 3. Jahrgang hast du schon Kontakt mit einem Industrieroboter gehabt. Dabei sollten folgende Ziele erreicht worden sein:

-   Du hast die Sicherheitseinweisung am spezifischen Roboter mitgemacht.
-   Du kannst den Roboter grundlegend in Betrieb nehmen und einfache Meldungen des Systems bearbeiten.
-   Du kannst alle Achsen des Roboters benennen und per Handbediengerät bewegen.
-   Du kennst die Bewegungseinschränkungen und Limits aller Achsen und kannst den TCP gezielt an einen Punkt im Raum steuern.

## Ziele dieser Übung

-   Du kennst die verschiedenen Koordinatensysteme, die bei Roboterbewegungen eingesetzt werden, und die Gründe dafür.
-   Du kannst eigene Werkzeug- und Basis-Koordinatensysteme definieren und Roboterbewegungen sinnvoll einsetzen.
-   Du kannst ein einfaches Programm zum Abfahren eines Pfades schreiben, ausführen und testen.

## Abgabe

In dieser Übung soll vor allem praktisch mit dem Roboter gearbeitet werden. Notiere dabei aber dennoch, wie du deine Aufgaben umgesetzt hast, um dies später (im 2. Semester) ohne nochmalige Erklärungen umsetzen zu können.  
Seine Arbeit informativ, übersichtlich und effizient protokollieren zu können, ist ein wesentlicher Skill eines Ingenieurs, der auch in dieser Übung geübt werden soll.

### Abzugeben sind:

-   **kommentierter** Quelltext aller erstellten Module (Sourcecode + Variablendatei) - pro Gruppe
-   ein Video der Programmausführung wie weit ihr gekommen seid (alle Beteiligten müssen darauf zumindest kurz zu sehen sein) - pro Gruppe
-   PDF-Protokoll, das die Notizen der eigenen Tätigkeit und eine Kurzreferenz der verwendeten KRL-Befehle und der dafür benötigten Parameter enthält - **pro Person**

Dateinamen sollen immer alle beteiligten Namen enthalten: z.B. Video: `IndInf_7.1_Müller-Schneider-Sams.mp4`, Protokoll: `IndInf_7.1_Müller.pdf`

## Aufgabenstellung

### Teil 1 (GK)

1.  Befestige die Schablone "Layout 4" (Format A3, Farbe) im Arbeitsbereich des Roboters.
    
2.  Setze 3 Würfel auf die Plätzen 1, 2 und 3. Anschließend setze mithilfe des Roboters die Würfel folgendermaßen um:
    
    Schüler 1: 1-->4, 2-->4 (Würfel 2 horizonal greifen)  
    Schüler 2: 2-->5, 3-->5 (Würfel 3 horizonal greifen)  
    Schüler 3: 3-->4, 2-->5 (Würfel 2 horizonal greifen)  
    Schüler 4: 1-->5, 3-->5 (Würfel 2 horizonal greifen)
    
    **Beim horizontalen Greifen ACHTUNG auf den Abstand zwischen Roboterarm und Tisch!**
    
3.  Vermiss die durch das blaue Koordinatenkreuz gegebene Basis und speichere die Konfiguration unter Basis Nummer 10. Verwende dazu das bereits vermessene Werkzeug "LISE0 Greifer" (Nummer 2)
    
4.  Wiederhole die Bewegungen aus 2. Welche Verbesserungen ergeben sich durch Benutzung des Basiskoordinatensystems beim Umsetzen der Würfel?
    

### Teil 2 (GK)

Nun sollen die Bewegungen in automatisch ablaufende Programme umgesetzt werden. Damit nach jedem Schülerteil die Würfel wieder in die Ausgangslage gelegt werden können, soll jeweils eine 3 Sekunden Pause programmiert werden.

1.  Erstelle ein neues Modul mit den Name aller Schüler (ev. abgekürzt)
    
2.  Programmiere die Bewegungsabläufe: "Teache" alle erforderlichen Bewegungspunkte. Überlege, welche Punkte sich für mehrere Bewegungen nutzen lassen und verwende sie wieder (**nicht** die selbe Koordinate in mehrere Variablen speichern). **Benenne alle Punkte nachvollziehbar!**  
    Achte darauf, den Greifer nicht schon während der Bewegung zu öffnen bzw. zu schließen, sondern erst bei Stillstand des Roboters.
    
3.  Verwende für Wege zwischen Würfelpositionen Point-to-Point-Bewegungen, für das Greifen der Würfel Linearbewegungen.
    
4.  Teste das Programm ausführlich.
    

### Teil 3 (EK)

Die Bewegungen des Roboters können durch "Überschleifen" optimiert werden. Dabei fährt ein Roboter einen "überschliffenen" Punkt nicht mehr genau an und bleibt dort stehen, sondern setzt seine Bewegung unmittelbar zum nächsten Punkt fort. Der "überschliffene" Punkt kann dabei nur "gestreift" werden. Schau dir dazu auch das entsprechende Kapitel in der Dokumentation an.

1.  Baue "Überschleifen" sinnvoll in das Programm ein. **Teste sehr langsam**, da sich hier teils unvorhersehbare Bewegungen ergeben können!
    
2.  Durch Nutzung des Basiskoordinatensystems und Wissen um die Abstände der Würfelpositionen lassen sich viele Roboterpositiohen auch im Programm errechnen und müssen so nicht geteacht werden. Informiere dich, wie Punktvariablen gezielt im Sourcecode manipuliert werden können (z.B. 50mm zur X-Koordinate eines Punktes hinzufügen) und optimiere das Programm damit.  
    Deklariere und verwende wo sinnvoll zusätzliche Variablen (z.B. Abstand der Position des Greifers über einem Würfel zur tatsächlichen Greifposition könnte für alle Würfel gleich sein -> Wert in einer Variable speichern)
    

**Achtung**: für 2. benötigt ihr mindestens "Experten"-Rechte, damit ihr manuell Code ohne Formulare ergänzen könnt.

![Basisvermessung.pdf](https://elearning.tgm.ac.at/theme/image.php/boost_union/core/1678884806/f/pdf "Basisvermessung.pdf") [Basisvermessung.pdf](https://elearning.tgm.ac.at/pluginfile.php/109713/mod_assign/introattachment/0/Basisvermessung.pdf?forcedownload=1)

25. September 2023, 23:01

![Dokumentation Kuka.pdf](https://elearning.tgm.ac.at/theme/image.php/boost_union/core/1678884806/f/pdf "Dokumentation Kuka.pdf") [Dokumentation Kuka.pdf](https://elearning.tgm.ac.at/pluginfile.php/109713/mod_assign/introattachment/0/Dokumentation%20Kuka.pdf?forcedownload=1)

25. September 2023, 23:01

![KRL_Cheatsheet.pdf](https://elearning.tgm.ac.at/theme/image.php/boost_union/core/1678884806/f/pdf "KRL_Cheatsheet.pdf") [KRL_Cheatsheet.pdf](https://elearning.tgm.ac.at/pluginfile.php/109713/mod_assign/introattachment/0/KRL_Cheatsheet.pdf?forcedownload=1)

25. September 2023, 23:01

![KUKA KRL-Quickguide.pdf](https://elearning.tgm.ac.at/theme/image.php/boost_union/core/1678884806/f/pdf "KUKA KRL-Quickguide.pdf") [KUKA KRL-Quickguide.pdf](https://elearning.tgm.ac.at/pluginfile.php/109713/mod_assign/introattachment/0/KUKA%20KRL-Quickguide.pdf?forcedownload=1)

25. September 2023, 23:01

![SYT-Lab Layout 4.pdf](https://elearning.tgm.ac.at/theme/image.php/boost_union/core/1678884806/f/pdf "SYT-Lab Layout 4.pdf") [SYT-Lab Layout 4.pdf](https://elearning.tgm.ac.at/pluginfile.php/109713/mod_assign/introattachment/0/SYT-Lab%20Layout%204.pdf?forcedownload=1)

25. September 2023, 23:01