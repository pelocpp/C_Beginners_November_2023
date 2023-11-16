#include <stdio.h>  // für die System-Bibliothek:  printf

#include "MyFunctions.h"

int globalVariable = 123;  // init value necessary


// "Hello World"
// void main()
// {
//     printf("Hallo Seminar");
// }

void main ()
{
    test_Contacts();
}


void main_aufruf_function_mit_ergebnis()
{
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