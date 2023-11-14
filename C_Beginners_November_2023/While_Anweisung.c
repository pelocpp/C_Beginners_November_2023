#include <stdio.h>  // für die System-Bibliothek:  printf

void erste_wiederholungs_anweisung()
{
    int n = 1;

    while (n <= 3)
    {
        printf("eine Anweisung: n = %d\n", n);

        n = n + 1;
    }

    printf("Danach\n");
}

void zweite_wiederholungs_anweisung()
{
    int n = 1;
    int ende = 20;

    // alle ungeraden Zahlen zwischen 1 und 20 berechnen
    while (n <= ende)
    {
        if (n % 2 == 1)
        {
            printf("Ungerades n: %d\n", n);
        }

        n = n + 1;
    }

    printf("Danach\n");
}

