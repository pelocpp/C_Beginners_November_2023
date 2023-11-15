#include <stdio.h>

// Unterprogramm ==> Funktion
int isEven(int wert)
{
    int result;
    int rest;

    // ist wert gerade oder ungerade
    rest = wert % 2;  // % Rest bei Division durch 2

    if (rest == 0) {
        result = 1;
    }
    else {
        result = 0;
    }

    return result;  // 0 oder 1 wird als Ergebnis zurückgegeben
}

// ============================================================

int maximum (int a, int b)
{
    if (a >= b) {

        return a;
    }
    else {

        return b;
    }
}

int maximum3(int a, int b, int c)
{
    if (a >= b && a >= c) {
        return a;
    }
    else if (b >= a && b >= c) {
        return b;
    }
    else {
        return c;
    }
}

void test_maximum()
{
    int x = 123; 
    int y = 456;
    int z = 789;

    int result = maximum(x, y);

    printf("maximum(123, 456) ==> %d\n", result);

    result = maximum3(x, y, z);

    printf("maximum3(x, y, z) ==> %d\n", result);
}

// ============================================================

int wieOft(int zahl, int teiler)
{
    int result = 0;

    // zahl = 7 // teiler = 3  ===> zahl % teiler = 1 
    while (zahl % teiler == 0) {

        zahl = zahl / teiler;
        
        // result = result + 1;
    
        ++ result;  // ++: erhöht die Variable 'result' um 1
    }

    return result;
}

void test_wieOft()
{
    int ergebnis = wieOft(36, 3);
    printf("wieOft(36, 3) = %d\n", ergebnis);

    ergebnis = wieOft(7, 3);
    printf("wieOft(36, 3) = %d\n", ergebnis);
}


// ============================================================

long long fakultaet(int n)
{
    int i;
    long long result;

    result = 1;
    for (i = 2; i <= n; i++) {
        result *= i;
    }

    return result;
}

void test_fakultaet()
{
    int n = 5;

    long long fakul_5 = fakultaet(n);

    printf("%d! = %lld\n", n, fakul_5);

    // ================================

    for (int i = 1; i <= 30; ++i) {

        long long result = fakultaet(i);

        //if (i == 25)
        //    printf("Stopper\n");

        printf("%d! = %lld\n", i, result);
    }
}

// ============================================================

