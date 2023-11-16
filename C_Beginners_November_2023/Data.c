#include <stdio.h>  // printf
#include <stdlib.h> // malloc , free  

#include "MyFunctions.h"


void someProcedure()
{
    int var = 123;    // lokalen Variablen
    // ..........
}

void anotherProcedure()
{
    // var = 456;
}


void workWithDynamicData(int* data)
{

}

void dynamicData()
{
    // möchte eine int-Variable dynamisch anlegen.

    int anzahlBytes = sizeof(int);  // 4

    int* zeiger = malloc(anzahlBytes);

    workWithDynamicData(zeiger);

    // einen Wert schreiben  // indirekt

    *zeiger = 123;

    // einen Wert lesen  // indirekt

    int temp = *zeiger;

    printf("Wert = %d\n", *zeiger);

    // Speicher FREIGEBEN
    free(zeiger);
}


void test_data()
{
    dynamicData();
}
