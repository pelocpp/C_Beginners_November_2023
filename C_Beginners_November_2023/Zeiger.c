#include <stdio.h>    

// timesTwo
void malZwei( int value )
{
    value = 2 * value;
}

void malZweiEx(int* pvalue)   // int* ==> address of an int
{
    int tmp;

                    // LESEN / READ
    tmp = *pvalue;  // Feature:
                    // Give me the value behind an address
                    // Wert von // value-of
                    // Antwort: Operator *  // INDIRECT READ

    tmp = 2 * tmp;

                    // SCHREIBENS / WRITE
                    // Write 'tmp' back to the memory location,
                    // where the address pvalue points to

    *pvalue = tmp;   // INDIRECT WRITE

    // value = 2 * value;
}

void malZweiExEX(int* pvalue)   // int* ==> address of an int
{
    int tmp = *pvalue;
    tmp = 2 * tmp;
    *pvalue = tmp;

    // Oder --- Ganz:

    *pvalue = 2 * *pvalue;
}

void test_Zeiger()
{
    int x = 5;

    printf("x = %d\n", x);     // 5

    malZwei(x); // timesTwo

    printf("x = %d\n", x);     // 5 

    malZweiEx(&x); // '&' means: the address of 'x' is passed as argument

    printf("x = %d\n", x);     // 5 
}

