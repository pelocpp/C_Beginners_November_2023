// =====================================================
#include <stdio.h>    // printf

#include "MyMoney.h"

// =====================================================

// implementation
void setMoney(struct Money* money, int euros, int cent) {

    money->euros = 0;
    money->cent = 0;

    // convert cent to euros and remaining cent
    if (euros < 0) {
        printf("Negative value of euros not allowed.\n");
        return;
    }

    if ( ! ( cent >= 0 && cent < 100 ) ) {
        printf("Cent value between 0 and 99 expected!\n");
        return;
    }

    money->euros = euros;
    money->cent = cent;
}

int sameMoney(struct Money* m1, struct Money* m2)
{
    if (m1->euros == m2->euros && m1->cent == m2->cent) {
        return 1;
    }
    else {
        return 0;
    }
}

int lessThanMoney(struct Money* money1, struct Money* money2)
{
    if (money1->euros < money2->euros) {
        return 1;
    }
    else if (money1->euros == money2->euros && money1->cent < money2 ->cent) {
        return 1;
    }
    else {
        return 0;
    }
}



void addEuros(struct Money* money, int euros)
{
    money->euros = money->euros + euros;
}

void addCent(struct Money* money, int cent)
{
    // convert cent to euros and remaining cent
    if (cent <= 0) {
        printf("Negative value of cent not allowed.\n");
        return;
    }

    int euros = cent / 100;
    money->euros = money->euros + euros;

    int partialCent = cent % 100;

    if (partialCent + money->cent >= 100) {

        money->euros = money->euros + 1;
        money->cent = money->cent + (partialCent - 100);
    }
    else {
        money->cent = money->cent + partialCent;
    }
}

void addMoney(struct Money* money, struct Money* other)
{
    int euros = other->euros;
    int cent = other->cent;

    addEuros(money, euros);
    addCent(money, cent);
}

void printMoney(struct Money* money)
{
    printf("%d.%02d", money->euros, money->cent);
}

void subEuros(struct Money* money, int euros)
{
    if (euros > money->euros) {
        printf("Not enough Euros in Wallet!\n");
        return;
    }

    money->euros = money->euros - euros;
}

void subMoney(struct Money* money, struct Money* other)
{
    if (other->euros > money->euros) {
        printf("Not enough Money in Wallet!\n");
        return;
    }

    if (other->euros == money->euros && other->cent > money->cent) {
        printf("Not enough Money in Wallet!\n");
        return;
    }

    int euros = money->euros - other->euros;
    int cent = money->cent - other->cent;
    if (cent < 0) {
        // underflow
        euros = euros - 1;
        cent = cent + 100;
    }

    setMoney(money, euros, cent);
}

// =====================================================
// test functions

void testMoney_01()
{
    struct Money wallet = { 0, 0 };;

    setMoney(&wallet, -10, 50);
    printMoney(&wallet);
    printf("\n");

    setMoney(&wallet, 10, 999);
    printMoney(&wallet);
    printf("\n");

    setMoney(&wallet, 5, 55);
    printMoney(&wallet);
    printf("\n");

    addEuros(&wallet, 17);
    printMoney(&wallet);
    printf("\n");

    addCent(&wallet, 25);
    printMoney(&wallet);
    printf("\n");

    addCent(&wallet, 370);
    printMoney(&wallet);
    printf("\n");
}

void testMoney_02()
{
    struct Money wallet1;
    struct Money wallet2;

    setMoney(&wallet1, 30, 80);
    printMoney(&wallet1);
    printf("\n");

    setMoney(&wallet2, 20, 90);
    printMoney(&wallet2);
    printf("\n");

    addMoney(&wallet1, &wallet2);
    printMoney(&wallet1);
    printf("\n");
}

void testMoney_03()
{
    // test subtraction

    struct Money wallet1;
    struct Money wallet2;

    printf("subMoney:\n");
    setMoney(&wallet1, 5, 55);
    printMoney(&wallet1);
    printf("\n");

    setMoney(&wallet2, 4, 44);
    printMoney(&wallet2);
    printf("\n");

    subMoney(&wallet1, &wallet2);
    printMoney(&wallet1);
    printf("\n");

    // --------------------------

    printf("subMoney:\n");
    setMoney(&wallet1, 4, 44);
    printMoney(&wallet1);
    printf("\n");

    setMoney(&wallet2, 5, 55);
    printMoney(&wallet2);
    printf("\n");

    subMoney(&wallet1, &wallet2);
    printMoney(&wallet1);
    printf("\n");

    // --------------------------

    printf("subMoney:\n");
    setMoney(&wallet1, 4, 55);
    printMoney(&wallet1);
    printf("\n");

    setMoney(&wallet2, 3, 88);
    printMoney(&wallet2);
    printf("\n");

    subMoney(&wallet1, &wallet2);
    printMoney(&wallet1);
    printf("\n");
}

void testMoney_04()
{
    // lessThanMoney

    struct Money wallet1;
    struct Money wallet2;

    printf("lessThanMoney:\n");
    setMoney(&wallet1, 5, 55);
    printMoney(&wallet1);
    printf("\n");

    setMoney(&wallet2, 4, 44);
    printMoney(&wallet2);
    printf("\n");

    int ergebnis = lessThanMoney(&wallet1, &wallet2);
    printf("lessThanMoney ==> %d\n", ergebnis);

    // --------------------------

    printf("lessThanMoney:\n");
    setMoney(&wallet1, 4, 44);
    printMoney(&wallet1);
    printf("\n");

    setMoney(&wallet2, 5, 55);
    printMoney(&wallet2);
    printf("\n");

    ergebnis = lessThanMoney(&wallet1, &wallet2);
    printf("lessThanMoney ==> %d\n", ergebnis);

    // --------------------------

    printf("lessThanMoney:\n");
    setMoney(&wallet1, 5, 44);
    printMoney(&wallet1);
    printf("\n");

    setMoney(&wallet2, 5, 55);
    printMoney(&wallet2);
    printf("\n");

    ergebnis = lessThanMoney(&wallet1, &wallet2);
    printf("lessThanMoney ==> %d\n", ergebnis);

    // --------------------------

    printf("lessThanMoney:\n");
    setMoney(&wallet1, 5, 55);
    printMoney(&wallet1);
    printf("\n");

    setMoney(&wallet2, 5, 44);
    printMoney(&wallet2);
    printf("\n");

    ergebnis = lessThanMoney(&wallet1, &wallet2);
    printf("lessThanMoney ==> %d\n", ergebnis);
}

void testMoney()
{
    testMoney_01();
    testMoney_02();
    testMoney_03();
    testMoney_04();
}

// =====================================================