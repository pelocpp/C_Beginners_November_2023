#include <stdio.h>    // printf


#include "MyTime.h"

struct Person
{
    int alter;
    char geschlecht;  // 'm' oder 'f'

    char vorname[32];
    char nachname[32];
};

struct Time
{
    int hours;
    int minutes;
    int seconds;
};

// als Verbesserung von 3 separaten Variablen:

//int hours;
//int minutes;
//int seconds;


void printTime(struct Time time)
{
    printf("%02d/%02d/%02d\n", 
        time.hours, time.minutes, time.seconds);
}

void test_Time()
{
    struct Time jetzt;    // Strukturvariable

    jetzt.hours = 10;     // Element einer Struktur
    jetzt.minutes = 5;
    jetzt.seconds = 30;

    struct Time pause;
    pause.hours = 10;
    pause.minutes = 30;
    pause.seconds = 0;

    // Ausgabe:
    //printf("%02d:%02d:%02d\n", jetzt.hours, jetzt.minutes, jetzt.seconds);

    //printf("%02d:%02d:%02d\n", pause.hours, pause.minutes, pause.seconds);

    printTime(jetzt);

    printTime(pause);

}

int gleich(struct Time t1, struct Time t2) {

    return 1;
}

void testSindGleich()
{
    struct Time jetzt; 
    struct Time dann;

    int ergebnis = gleich(jetzt, dann);

    if (ergebnis == 1) {
        printf("Die beiden Uhrzeiten sind gleich.");
    }
}

