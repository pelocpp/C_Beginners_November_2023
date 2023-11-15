#include <stdio.h>    // printf

#include "MyTime.h"

struct Person
{
    int alter;
    char geschlecht;  // 'm' oder 'f'

    char vorname[32];
    char nachname[32];
};


// als Verbesserung von 3 separaten Variablen:

//int hours;
//int minutes;
//int seconds;


void printTime(struct Time time)
{
    printf("%02d:%02d:%02d\n", 
        time.hours, time.minutes, time.seconds);
}


void setTime(struct Time time, int hours, int minutes ,int seconds) {

    time.hours = hours;
    time.minutes = minutes;
    time.seconds = seconds;
}

void setTimeEx (struct Time* ptime, int hours, int minutes, int seconds) {

    //time.hours = hours;
    //time.minutes = minutes;
    //time.seconds = seconds;

    // 1. Schreibweise

    // (*ptime).hours = hours;  // korrekt

    ptime -> hours = hours;  // okay, besser lesbar
    ptime->minutes = minutes;  
    ptime->seconds = seconds; 
}

void test_Time()
{
    struct Time jetzt;    // Strukturvariable

    jetzt.hours = 1;     // Element einer Struktur
    jetzt.minutes = 2;
    jetzt.seconds = 3;

    setTimeEx(&jetzt, 13, 30, 0);

    printTime(jetzt);

    return;

    struct Time pause;
    pause.hours = 10;
    pause.minutes = 30;
    pause.seconds = 0;

    //Ausgabe:
    //printf("%02d:%02d:%02d\n", jetzt.hours, jetzt.minutes, jetzt.seconds);
    //printf("%02d:%02d:%02d\n", pause.hours, pause.minutes, pause.seconds);

    printTime(jetzt);
    printTime(pause);
}
