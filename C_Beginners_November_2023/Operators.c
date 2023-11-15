#include <stdio.h>    // printf

void test_Operators()
{
    // Precedence

    int wert = 3 + 4 * 5;   // 23 oder 35: Korrekt ist 23 // "Punkt-vor-Strich"

    int a, b, c, d;

    a = b = c = d = 0;

    // ............

    if ( a > b || (c < d && a > d) )  // ....
        ;

        // Oder

    if ((a > b) && (c < d))  // ....  It works without parenthesis ( ..) Why
        ;

    // Operatoren - VORANG   // Operator Precedence

    // ----------------------------------------

    // Assoziativität 

    int x = (4 - 3) - 2;   // -1  (oder 3)

}