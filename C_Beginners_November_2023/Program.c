#include <stdio.h>  // für die Bibliothek:  printf

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

    printf("Zahl = %d\n", n );
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




void erste_Schritte_if_statement()
{
    int n = 0;  // Varianblen vereinbaren und vorbelegen
    int m = 0;

    n = 5;
    m = 7;

    if ( n > m )    // Vergleichsoperator 'grösser'
    {
        printf("n is greater than m\n");
    }
    else
    {
        printf("n is NOT greater than m\n");
    }

    printf("hier geht es weiter\n");
}


void erste_Schritte_if_statement_02 ()
{
    int n = 0;  // Variablen vereinbaren und vorbelegen
    int m = 0;

    int x = 11;
    int y = 10;

    n = 7;
    m = 7;

    // 2 Bedingungen

    if ( n != m || x > y ) 
    {
        printf("Bedingung erfuellt\n");
    }
    else
    {
        printf("Bedingung nicht erfuellt\n");
    }

    printf("hier geht es weiter\n");
}


void erste_Schritte_if_statement_03()
{
    int n = 0;

    n = 4;

    if (n == 1)
    {
        printf("n hat den Wert 1\n");
    }
    else if ( n == 2 )
    {
        printf("n hat den Wert 2\n");
    }
    else if (n == 3)
    {
        printf("n hat den Wert 3\n");
    }
    else
    {
        printf("n hat weder den Wert 1 oder 2 oder 3\n");
    }

    printf("hier geht es weiter\n");
}


void aufgabe_schaltjahr()
{
    int year = 1999;

    printf("Das Jahr %d ", year);

    if (year % 4 != 0) {

        printf("ist kein Schaltjahr!\n");
    }
    else if (year % 100 != 0) {

        printf("ist ein Schaltjahr!\n");
    }
    else if (year % 400 != 0) {

        printf("ist kein Schaltjahr!\n");
    }
    else
    {
        printf("ist ein Schaltjahr!\n");
    }
}

void aufgabe_maximum_dreier_zahlen_erste_loesung ()
{
    int a = 123;
    int b = 123;
    int c = 123;

    if (a >= b && a >= c) { // if a is greater than both b and c, a is the largest

        printf("%d is the largest number.", a);
    }
    else if (b >= a && b >= c) { // if b is greater than both a and c, b is the largest

        printf("%d is the largest number.", b);
    }
    else { // if both above conditions are false, c is the largest

        printf("%d is the largest number.", c);
    }
}

void aufgabe_2_maximum_dreier_zahlen_zweite_loesung()
{
}




// Ansatz: Maximum dreier Zahlen

void erste_Schritte_aufgabe_maximum()
{
    int a = 12; 
    int b = 444;
    int c = 11;

    // diese Richtung soll die Auggabe gehen
   // if (a < b && ..............)

   // zB:  "444 ist die groesste Zahl"
}

void erste_Schritte_schaltjahr ()
{
    int jahr  = 1984;

    int rest;

    rest = jahr % 4;

    if (rest == 0)
    {
        printf("Jahr ist durch 4 teilbar \n");
    }
    else
    {
        printf("Jahr ist NICHT durch 4 teilbar \n");
    }


    // diese Richtung soll die Auggabe gehen
   // if (a < b && ..............)

   // zB:  "444 ist die groesste Zahl"
}


void erste_wiederholungs_anweisung()
{
    int n = 1;

    while ( n <= 3 )
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

void loesung_teuflische_folge()
{
    int number;
    int n = 1;

    printf("Teuflische Zahlenfolge\n");
    printf("======================\n");

    number = 7;  // start number
    n = 1;       // counter for length of sequence

    printf("Start: %d\n\n", number);

    while (number != 1)
    {
        if (number % 2 == 0)
        {
            number = number / 2;
        }
        else
        {
            number = 3 * number + 1;
        }

        printf("%3d: Zahl = %d\n", n, number);
        n++;
    }
}


void loesung_zins_berechnung()
{
    double capitalStock = 1000;
    double startCapitalStock = capitalStock;
    double interestRate = 5.0;
    int    numberYears = 10;

    printf("Zinstabelle fuer Grundkapital %.2f\n", capitalStock);
    printf("Verzinsung:                   %.2f\n", interestRate);
    printf("=====================================\n");
    printf("Kapitalstand zum Jahresende:\n\n");

    int year = 0;

    while (year < numberYears)
    {
        double interest = (capitalStock / 100.0) * interestRate;

        // auf addieren        
        capitalStock = capitalStock + interest;

        // es gibt eine kürzere Schreibweise fuer Zeile 21
        // capitalStock += interest;

        printf("Jahr: %2d    Kapital: %.2f\n", (year + 1), capitalStock);

        ++year;
    }

    printf("\nAus %.2f Grundkapital wurden in %d Jahren %.2f Euro.\n",
        startCapitalStock, year, capitalStock);
}

void main()
{
    zweite_wiederholungs_anweisung();
}

// Einsprungpunkt
//void main()
//{
//    printf("Hallo Seminar");
//}
