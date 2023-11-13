#include <stdio.h>  // für die Bibliothek:  printf

void erste_Schritte_01()
{
    int n;  // hier wird eine Variable (n) vereinbart / definiert. 

    n = 123;   // Wertzuweisung

    n = 456;   // 2. Wertzuweisung

    // n = 21474836999999;    // zu gross, wird abgeschnitten

    printf("Zahl = %d\n", n );
}





void erste_Schritte_02()
{
  //  printf("%d\n", sizeof (long long));
}

void main()
{
    erste_Schritte_01();
}

// Einsprungpunkt
//void main()
//{
//    printf("Hallo Seminar");
//}
