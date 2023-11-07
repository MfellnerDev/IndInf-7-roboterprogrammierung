# Protokoll Labor 7.1 - Fellner

---

**Autor:** Manuel Fellner

**Version:** 10.10.2023



## 1. Use-Case definieren



## 2. Arduino-Logik einbauen und programmieren

Variante B Use-Case





## 3. Wenn Arduino-Teil fertig:

- Wie muss ich das verpacken, damit der Roboter die übergebene `id` übertragen bekommt?





## 1. Der Use-Case

Hier arbeiten wir mit NFC-Chips und einem dementsprechenden Lesegerät.

Wenn man die jeweilige NFC-Karte an das Lesegerät hält, wird der jeweilige Würfel angehoben und an eine Position gebracht.

Wir arbeiten hier mit einem NFC-Sensor und drei NFC-Karten:

- Karte 1: Beinhaltet die id=1

- Karte 2: Beinhaltet die id=2

- Karte 3: Beinhaltet die id=3



- Der Roboter weiß, wo welcher Würfel mit der entsprechenden id liegt! Hier sollte kein Programmieraufwand von meiner Seite aus notwendig sein.



#### Ablauf

1. Eine LED beim Arduino leuchtet: man kann eine Karte hinlegen

2. Die Karte wird gelesen und ab dem Moment, ab dem die Verarbeitung startet, leuchtet die LED NICHT MEHR (um zu signalisieren, dass die gelesene Karte bearbeitet wird)

3. Der gelesene Inhalt der Karte (numerische ID) wird an den Roboter gesendet

4. Der Roboter empfängt die ID und gibt sie sicherheitshalber noch einmal zurück

5. Der Roboter beginnt mit seiner Operation: Er kennt die Koordinaten des jeweiligen Würfels. Er navigiert zu diesem Würfel

6. Er nimmt diesen Würfel auf

7. Er transportiert diesen Würfel zu einer anderen Position)

8. Am Ende schickt der Roboter einen boolean (True oder False) zurück. Damit wissen wir, dass die Operation beendet ist

9. Ebenso leuchtet die LED jetzt wieder und signalisiert damit, dass das Programm wieder bereit für eine weitere Karte ist (**nicht vergessen, den Wert der würfel-id an diesem Punkt zurückzusetzen!**)



## 2. Arduino-Logik programmieren

Als nächstes programmieren wir die Arduino-Logik des Vorganges.


