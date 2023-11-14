#include <stdio.h>

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


int maximum (int a, int b)
{
    if (a >= b) {

        return a;
    }
    else {

        return b;
    }
}
