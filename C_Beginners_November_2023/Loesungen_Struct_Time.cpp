#include <stdio.h>    // printf

#include "MyTime.h"

int equal(struct Time t1, struct Time t2)
{
    if (t1.hours != t2.hours) {
        return 0;
    }
    else if (t1.minutes != t2.minutes) {
        return 0;
    }
    else if (t1.seconds != t2.seconds) {
        return 0;
    }
    else {
        return 1;
    }
}

int lessThan(struct Time t1, struct Time t2)
{
    if (t1.hours < t2.hours) {
        return 1;
    }
    else if (t1.hours == t2.hours && t1.minutes < t2.minutes) {
        return 1;
    }
    else if (t1.hours == t2.hours && t1.minutes == t2.minutes && t1.seconds < t2.seconds) {
        return 1;
    }
    else {
        return 0;
    }
}

struct Time add(struct Time t1, struct Time t2)
{
    struct Time ergebnis;

    ergebnis.hours = t1.hours + t2.hours;
    ergebnis.minutes = t1.minutes + t2.minutes;
    ergebnis.seconds = t1.seconds + t2.seconds;

    if (ergebnis.seconds >= 60) {
        ergebnis.seconds = ergebnis.seconds - 60;
        ergebnis.minutes = ergebnis.minutes + 1;
    }

    if (ergebnis.minutes >= 60) {
        ergebnis.minutes = ergebnis.minutes - 60;
        ergebnis.hours = ergebnis.hours + 1;
    }

    if (ergebnis.hours >= 24) {
        ergebnis.hours = 0;
    }

    return ergebnis;
}

void testSindGleich()
{
    struct Time jetzt;
    jetzt.hours = 11;
    jetzt.minutes = 5;
    jetzt.seconds = 30;

    struct Time dann;
    dann.hours = 11;
    dann.minutes = 5;
    dann.seconds = 0;

    int ergebnis = equal(jetzt, dann);

    if (ergebnis == 1) {
        printf("Die beiden Uhrzeiten sind gleich.\n");
    }
    else {
        printf("Die beiden Uhrzeiten sind verschieden.\n");
    }
}

void testSindKleiner()
{
    struct Time jetzt;
    jetzt.hours = 11;
    jetzt.minutes = 5;
    jetzt.seconds = 30;

    struct Time dann;
    dann.hours = 11;
    dann.minutes = 5;
    dann.seconds = 0;

    int ergebnis = lessThan(jetzt, dann);

    if (ergebnis == 1) {
        printf("Die erste Uhrzeit ist kleiner als die zweite Uhrzeit.\n");
    }
    else {
        printf("Die erste Uhrzeit ist nicht kleiner als die zweite Uhrzeit.\n");
    }
}

void testTimeAddition()
{
    struct Time jetzt;
    jetzt.hours = 9;
    jetzt.minutes = 30;
    jetzt.seconds = 0;
    printTime(jetzt);

    struct Time dann;
    dann.hours = 5;
    dann.minutes = 30;
    dann.seconds = 0;
    printTime(dann);

    struct Time ergebnis = add(jetzt, dann);
    printTime(ergebnis);
}


