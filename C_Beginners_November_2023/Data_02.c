#include <stdio.h>   

extern int globalVariable; 

void useGlobaleVariable()
{
    int tmp = globalVariable;

    printf("globalVariable: %d\n", tmp);
}