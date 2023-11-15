# Aufgaben zu Strukturen

### Aufgabe 1 - Gleichheit zweier Strukturen `Time`

Schreiben Sie ein Unterprogramm `gleich`,
dass zwei Struktur-Variablen auf Gleichheit vergleicht.

*Beispiel*:

```cpp
struct Time jetzt; 
struct Time dann;

......

int ergebnis = gleich(jetzt, dann);

if (ergebnis == 1) {
    printf("Die beiden Uhrzeiten sind gleich.");
}
```

### Aufgabe 2 - Vergleich zweier Strukturen `Time`

Schreiben Sie ein Unterprogramm `kleiner`,
dass zwei Struktur-Variablen bzgl. der Eigenschaft *kleiner* vergleicht.

```cpp
struct Time jetzt; 
struct Time dann;

......

int ergebnis = kleiner (jetzt, dann);

if (ergebnis == 1) {
    printf("Die erste Uhrzeit ist kleiner als die zweite Uhrzeit");
}
```

### Aufgabe 3 - Addition zweier Strukturen `Time`

Schreiben Sie ein Unterprogramm `addiere`,
dass zwei `Time` Struktur-Variablen addiert.

Beispiel:

`09:30:00` plus `05:30:00` = `15:00:00`.

