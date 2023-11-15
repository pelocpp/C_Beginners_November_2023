#include <stdio.h>

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

void erste_Schritte_schaltjahr()
{
    int jahr = 1984;

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

void aufgabe_maximum_dreier_zahlen_erste_loesung()
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

void loesung_zusatz_aufgabe_01()
{
    int n = 10;

    int summe = 0;

    int index = 1;

    // Summe aller Zahlen von 1 bis n

    while (index <= 10) {

        printf("Index: %d -  Summe = %d\n", index, summe);

        summe = summe + index;

        index = index + 1;
    }

    printf("Summe: %d\n", summe);
}
