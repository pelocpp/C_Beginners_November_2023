#include <stdio.h>  // für die System-Bibliothek:  printf

void erste_Schritte_01()
{
    int n;  // hier wird eine Variable (n) vereinbart / definiert. 
    int x;

    n = 5;   // Wertzuweisung
    x = n;   // hier wird n gelesen

    n = 10;   // 2. Wertzuweisung
    // hier wird n geschrieben

    n = 2 * n + 1;  // hier wird n zuerst gelesen ..und 
    // dann in DIESELBE Variable zurückgeschrieben

// n = 21474836999999;    // zu gross, wird abgeschnitten

    printf("Zahl = %d\n", n);
}

void erste_Schritte_02()
{
    double x = 0.0; // Variable mit Namen x wird definiert

    x = 55.55;

    x = 1.0 / 3.0;

    // Vorsichtig:

    int n = 123;

    x = n;   // das geht: Eine ganze Zahl passt in eine Kommazahl:  123.0

    // n = x;  // VORSICHT: : '=': conversion from 'double' to 'int', 
             // possible loss of data: Abschneiden


    printf("Zahl = %f\n", x);  // %f: Ausgabe Gleitpunkt, 3 Nachkommastellen
}


void erste_Schritte_ueberlauf()
{
    int grosseZahl;

    grosseZahl = 2147483647;   // 2 Milliarden ...

    printf("Zahl = %d\n", grosseZahl);

    // Überlauf // Overflow // Unterlauf  // underflow

    grosseZahl = grosseZahl + 1;          // erwartet: 214748364

    // ABER: -2147483648 ist das Ergebnis

    printf("Zahl = %d\n", grosseZahl);
}

void erste_Schritte_ueberlauf_02()
{
    double grosseZahl;

    grosseZahl = 2147483647;   // 2 Milliarden ...

    printf("Zahl = %f\n", grosseZahl);

    printf("Zahl = %%\n");

    // Überlauf // Overflow // Unterlauf  // underflow

    grosseZahl = grosseZahl + 1;          // erwartet: 214748364

    // ABER: -2147483648 ist das Ergebnis

    printf("Zahl = %.30f\n", grosseZahl);
}


void erste_Schritte_03()
{
    //  printf("%d\n", sizeof (long long));
}


