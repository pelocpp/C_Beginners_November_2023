#include <stdio.h>    // printf
#include <stdlib.h>   // srand
#include <time.h  >   // time

void felder_01()
{
    // ein Feld mit 6 Werten: SYNTAX eines Felds

    int lotto_zahlen[6];   // Länge: KONSTANT / FEST !!!

    // Ziehung:   
    // Zugriff // Access of an array: Index
    // First Index: 0
    // Last Index:  Length - 1 // 6 - 1 = 5

    // Erste Zahl: 23

    lotto_zahlen[0] = 23;  // "erstes Element"   / "first element"
    lotto_zahlen[1] = 17;  // "zweites Element" 
    lotto_zahlen[2] = 1;   // "drittes Element" 
    lotto_zahlen[3] = 5;   // "viertes Element" 
    lotto_zahlen[4] = 39;  // "fuenftes Element"
    lotto_zahlen[5] = 34;  // "sechtes Element"

    // Ein Feld durchlaufen
    // Two - in - One // Buy One - Get Two
    // Kontrollstruktur:  while // for

    for ( int i = 0; i < 6;  i = i + 1 )
    {
        printf("%d: %d\n", i+1, lotto_zahlen [i]);
    }
}

void eineZufallszahl()
{
    int zufall;

    // Wie bekomme ich verschiedene Startwerte hin

    //// Black-Box
    //time_t t;
    //int jetzt = (int) time(&t);  // ich frage die Uhr  // milli sekunden

    //// Wie bekomme ich wirklich zufällige Zahlen hin - von Aufruf zu Aufruf
    //srand(jetzt);  // Dies ist ein "Startwert" für die Berechnung zufälliger Zahlen

    zufall = rand();   // 1. Aufruf

    // zahl auf den Bereich von 0 bis 100 abbilden
    zufall = zufall % 100;
    printf("Zufallszahl %d\n", zufall);

    zufall = rand();   // 2. Aufruf
    zufall = zufall % 100;
    printf("Zufallszahl %d\n", zufall);

    for (int i = 0; i < 20; i = i + 1) {
        zufall = rand();
        zufall = zufall % 100;
        printf("Zufallszahl %d\n", zufall);
    }
}