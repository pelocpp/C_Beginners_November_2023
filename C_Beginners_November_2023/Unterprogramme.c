#include <stdio.h>  // stdio == standard input output

// Realisierung eines Unterprogramms
void myTitle()
{
    printf("Hallo Seminar\n");
    printf("C ist keine einfache Programmiersprache ...\n");
    printf("... aber wir schaffen das\n");
}

void myGoodMorning(int wieOft)
{
    //printf("Hallo Seminar\n");
    //printf("Hallo Seminar\n");
    //printf("Hallo Seminar\n");
    //printf("Hallo Seminar\n");
    //printf("Hallo Seminar\n");

    int counter = 0;

    while ( counter < wieOft)
    {
        printf("Hallo Seminar\n");

        counter = counter + 1;
    }
}

// =========================================================

// Beispiel für ein Unterprogramm, das ein Ergebnis berechnet:

