#include <stdio.h>  // für die System-Bibliothek:  printf

void felder_01()
{
    // ein Feld mit 6 Werten: SYNTAX eines Felds

    int lotto_zahlen[6];   // Länge: KONSTANT / FEST !!!

    // Ziehung:   
    // Zugriff // Access of an array: Index
    // First Index: 0
    // Last Index:  Length - 1 // 6 - 1 = 5

    // Erste Zahl: 23

    lotto_zahlen[0] = 23;  // "erstes Element"   / "first element"
    lotto_zahlen[1] = 17;  // "zweites Element" 
    lotto_zahlen[2] = 1;   // "drittes Element" 
    lotto_zahlen[3] = 5;   // "viertes Element" 
    lotto_zahlen[4] = 39;  // "fuenftes Element"
    lotto_zahlen[5] = 34;  // "sechtes Element"

    // Ein Feld durchlaufen

    // Two - in - One // Buy One - Get Two

    // Kontrollstruktur:  while // for

    for (int i = 0; i < 6;  i = i + 1)
    {
        printf("%d: %d\n", i, lotto_zahlen [i]);
    }

}