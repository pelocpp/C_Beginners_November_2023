#include <stdio.h>    // printf
#include <stdlib.h>   // srand
#include <time.h  >   // time

void loesung_feld_mit_gesamt_summe()
{
    // Feld der Länge 10
    int zahlen[10];

    // für zufällige Zahlen
    time_t t;
    int jetzt = (int)time(&t);
    srand(jetzt);

    // Feld mit Zufallszahlen belegen
    for (int i = 0; i < 10; i = i + 1) {
        int zufall = rand();
        zahlen[i] = zufall;
    }

    // Feld ausgeben
    for (int i = 0; i < 10; i = i + 1) {
        printf("Zufallszahl: %d\n", zahlen[i]);
    }

    // Gesamtsumme bestimmen
    long summe = 0;
    for (int i = 0; i < 10; i = i + 1) {
        summe = summe + zahlen[i];
    }
    printf("\n");

    printf("Gesamtsumme: %ld\n", summe);
}

void loesung_feld_mit_maximum()
{
    // Feld der Länge 10
    int zahlen[10];

    // für zufällige Zahlen
    time_t t;
    int jetzt = (int) time(&t);
    srand(jetzt);

    // Feld mit Zufallszahlen belegen
    for (int i = 0; i < 10; i = i + 1) {
        int zufall = rand();
        zahlen[i] = zufall;
    }

    // Feld ausgeben
    for (int i = 0; i < 10; i = i + 1) {
        printf("Zufallszahl: %d\n", zahlen[i]);
    }

    // Groesste Zahl bestimmen
    int maximum = -1;
    for (int i = 0; i < 10; i = i + 1) {
        if (zahlen[i] > -1) {
            maximum = zahlen[i];
        }
    }
    printf("\n");

    printf("Maximum: %d\n", maximum);
}

