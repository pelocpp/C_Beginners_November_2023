#include <stdio.h>

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
