#include <stdio.h>    // printf
#include <string.h>   // strlen ...


void single_character()
{
    char ch;

    ch = 0;      // '\0';

    printf("ch = %c, value = %d\n", ch, ch);

    ch = 70;

    printf("ch = %c\n", ch);

    // duality between char and int
    int value;

    value = 78;
    ch = value;  // char = int  GEHT
    printf("ch = %c\n", ch);  // N

    ch = ':';
    value = ch;   // int = char  GEHT
    printf("value = %d\n", value);  // N

    return;

    // print / generate an ASCII Table on the console:
    int i;
    for (i = 0; i <= 127; ++i) {

        printf("%d: %c\n", i, i);
    }
}

int _laenge_einer_Zeichenkette(char* ptr)
{
    int count = 0;

    // while (ptr[index] != 0 ) {

    while ( ptr[count] != '\0' ) {

        count = count + 1;
    }

    return count;
}

int laenge_einer_Zeichenkette(char* ptr)
{
    int count = 0;

    // while (ptr[index] != 0 ) {

    while ( *(ptr + count) != '\0') {

        // count = count + 1;
        ++count;
    }

    return count;
}

int laenge_einer_ZeichenketteEx(int* ptr)
{
    int count = 0;

    // Kann man Adressen inkrementieren:  0x1024 + 1 , 0x1025 .....
    // Ja: Zeiger - Arithmetik // "Hier fängt Real C an :)"

    // while (ptr[index] != 0 ) {

    while (*ptr != '\0') {

        ptr++;
        count = count + 1;
    }

    return count;
}

int laenge_einer_ZeichenketteExEx(int* ptr)
{
    int* ptrCopy = ptr;

    // Kann man Adressen inkrementieren:  0x1024 + 1 , 0x1025 .....
    // Ja: Zeiger - Arithmetik // "Hier fängt Real C an :)"

    // while (ptr[index] != 0 ) {

    while (*ptrCopy++ != '\0') {   // Persönlich: Für mich zuuuuu kompakt

      //  ptrCopy++;
    }

    return  (int) (ptrCopy - ptr);   // Differenz: Anzahl der Zeichen.
}

void multiple_character()
{
    // multiple characters: string

    // 2 Möglichkeiten:

    // a) using an ADDRESS as data type:
    // the address points to the FIRST character

  //   char* zeichen = "Hallo Seminar";
    char* zeichen = "Hallo";

    int laenge = laenge_einer_Zeichenkette(zeichen);

    //              int <== size_t == unsigned long long == 64 Bits
    laenge =       ( int )   strlen(zeichen);   // Umwandeln von 8 Bytes nach 4 Bytes

    printf("%s:  Laenge: %d\n", zeichen, laenge);

    // b) using an ARRAY of char as data type:

    char anderes_feld_von_zeichen[] = "vorbelegungsdfsdfsdfsdfsdfsdfsfsdfsdf";

    laenge = (int) strlen (anderes_feld_von_zeichen);   // Umwandeln von 8 Bytes nach 4 Bytes

    printf("%s:  Laenge: %d\n", anderes_feld_von_zeichen, laenge);

    char feld_von_zeichen[] = "Hallo";

    printf("%s\n", feld_von_zeichen);
}

void test_characters()
{
  //  single_character();
    multiple_character();
}