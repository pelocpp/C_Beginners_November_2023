#include <stdio.h>    // printf
#include <stdlib.h>   // srand
#include <time.h>     // time

void loesung_feld_mit_gesamt_summe()
{
    // Feld der Länge 10
    int zahlen[10];

    // für zufällige Zahlen
    time_t t;
    int jetzt = (int)time(&t);
    srand(jetzt);

    // Feld mit Zufallszahlen belegen
    int i;
    for (i = 0; i < 10; ++i) {

        int zufall = rand();

        zufall = zufall % 100;

        zahlen[i] = zufall;
    }

    // Feld ausgeben
    for (i = 0; i < 10; ++i) {
        printf("Zufallszahl: %d\n", zahlen[i]);
    }

    // Gesamtsumme bestimmen
    long summe = 0;
    for (int i = 0; i < 10; ++i) {
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
        zufall = zufall % 100;
        zahlen[i] = zufall;
    }

    // Feld ausgeben
    for (int i = 0; i < 10; ++i) {
        printf("Zufallszahl: %d\n", zahlen[i]);
    }

    // Groesste Zahl bestimmen
    int maximum = -1;

    for (int i = 0; i < 10; ++i) {

        if (zahlen[i] > maximum) {

            maximum = zahlen[i];
        }
    }
    printf("\n");

    printf("Maximum: %d\n", maximum);
}

