#include <stdio.h>  // stdio == standard input output

// Realisierung eines Unterprogramms
void myTitle()
{
    printf("Hallo Seminar\n");
    printf("C ist keine einfache Programmiersprache ...\n");
    printf("... aber wir schaffen das\n");
}

void myGoodMorning(int wieOft)   // -5
{
    if (wieOft < 0) {

        printf("Falscher Parameter Wert: %d\n", wieOft);

        return;  // Anweisung
    }

    int counter = 0;

    while ( counter < wieOft)
    {
        printf("Hallo Seminar\n");

        counter = counter + 1;
    }
}

// =========================================================

// Beispiel f�r ein Unterprogramm,
// das ein Ergebnis berechnet:
// mit 'return' wird der berechnete Wert zur�ckgegeben

int malDrei(int wert)
{
    int result;  

    result = wert * 3;

    return result;
}
