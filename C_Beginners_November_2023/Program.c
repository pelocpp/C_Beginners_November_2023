#include <stdio.h>  // für die System-Bibliothek:  printf

// "Hello World"
// void main()
// {
//     printf("Hallo Seminar");
// }

#include "MyFunctions.h"


void main ()
{
    // wie oft wird der Begrüßungstext ausgegeben:
    // möchte ich dem Unterprogramm mitgeben

    felder_01();

    return;

    int count = -3;

    myGoodMorning(count);   // Aufruf eines Unterprogramms

    tueEtwas();

    int ergebnis = 0;

    ergebnis = malDrei(5); // brauche eine Wertzuweisung,
                           // um das Ergebnis abzuholen !

    printf("malDrei(5) ==> %d\n", ergebnis);

    printf("Fertig.\n");

    // printf("==> %d\n", ergebnis);
}



void tueWasAnderes()
{
    printf("Ich tue etwas anderes ...\n");
}


void tueEtwas()
{
    printf("Ich tue etwas ...\n");

    tueWasAnderes();
}