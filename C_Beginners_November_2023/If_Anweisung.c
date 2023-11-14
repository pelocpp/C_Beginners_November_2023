#include <stdio.h>  // für die System-Bibliothek:  printf


void erste_Schritte_if_statement()
{
    int n = 0;  // Varianblen vereinbaren und vorbelegen
    int m = 0;

    n = 5;
    m = 7;

    if (n > m)    // Vergleichsoperator 'grösser'
    {
        printf("n is greater than m\n");
    }
    else
    {
        printf("n is NOT greater than m\n");
    }

    printf("hier geht es weiter\n");
}


void erste_Schritte_if_statement_02()
{
    int n = 0;  // Variablen vereinbaren und vorbelegen
    int m = 0;

    int x = 11;
    int y = 10;

    n = 7;
    m = 7;

    // 2 Bedingungen

    if (n != m || x > y)
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
    else if (n == 2)
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

