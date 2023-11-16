#include <stdio.h>  // printf
#include <stdlib.h> // malloc , free 
#include <string.h> 

#include "MyContacts.h"


// Array / Feld von 10 Kontakten
// Feld fixer Länge
struct Contact g_contacts[MaxContacts];

void initContacts()
{
    for (int i = 0; i < MaxContacts; ++i) {
        
        g_contacts[i].isEmpty = 1;
    }
}

void menu()
{
    printf("My awesome Contacts App:\n");
    printf("=======================:\n\n");

    printf("1 == New Contact\n");
    printf("2 == Search Number\n");
    printf("3 == List all Entries\n");
    printf("4 == Delete Entry\n");
    printf("9 == Exit Program\n");
    printf("\n");

    int active = 1;

    char buffer[32];
    buffer[0] = 0;   // um warnings zu vermeiden -- überflüssig
    int number;

    while (active) { 

        printf("Enter choice: ");
        int choice;
        scanf_s("%d", &choice);   // 1, 2, 3

        // Fallunterscheidung
        switch (choice)
        {
        case 1:
            printf("New Contact:\n\n");
            printf("Enter Name: ");
            scanf_s("%s", buffer, 32);

            printf("Enter Phone Number: ");
            scanf_s("%d", &number);

            // search empty entry in array 'g_contacts'
            int indexEmtpy = -1;
            for (int i = 0; i < MaxContacts; ++i) {

                if (g_contacts[i].isEmpty == 1) { // 1 == frei

                    indexEmtpy = i;

                    // vorzeitiges Verlassen der Schleife,
                    // wenn ein Wert gefunden worden ist
                    break;
                }
            }

            if (indexEmtpy != -1) {
                // Einfügen, Kopiere 'number' und 'name' in das Feld an der Stelle 'index' um
                g_contacts[indexEmtpy].number = number;
                strcpy_s(g_contacts[indexEmtpy].name, 64, buffer);

                g_contacts[indexEmtpy].isEmpty = 0;   // Markiere den Eintrag als 'belegt'
            }
            else
            {
                // Kein freier Platz mehr
                printf("No more memory available!\n");
            }
            break;

        case 2:
            printf("Search Number\n\n");

            printf("Enter Name: ");
            scanf_s("%s", buffer, 32);

            int foundNumber = searchEntry(buffer);

            if (foundNumber == -1) {

                printf("Name %s does not exist!\n", buffer);
            }
            else {

                printf("Name %s has Phone Number %d!\n", buffer, foundNumber);
            }

            break;

        case 3:
            printf("List all Entries\n\n");
            listsAllEntries();
            break;

        case 4:
            printf("Delete Entry: ");

            printf("Enter Name: ");
            scanf_s("%s", buffer, 32);

            deleteEntry(buffer);

            break;

        case 9:
            printf("Exit Program\n\n");
            active = 0;
            break;

        default:
            printf("Falsche Eingabe - bitte wiederholen\n\n");
            break;
        }

    }

    // Namen eingeben: Kontakt eingeben
    // Tel. eingeben: Kontakt eingeben
    // 
    // Kontakte suchen
    // 
    // Alle Kontakte ausgeben.
    // 
    // Kontakt löschen
    // 
    // Programm beenden
    // ..................
        
    printf("Done.\n\n");
}

int searchEntry(char* searchName)
{
    int searchNumber = -1;

    for (int i = 0; i < MaxContacts; ++i) {

        if (g_contacts[i].isEmpty == 0) {   // 0 == ist belegt

            // 1. Name: Steht in 'g_contacts[i].name'
            // 2. Name: Parameter 'searchName'

            // sind beide Namen gleich:  strcmp : string compare

            if (strcmp(g_contacts[i].name, searchName) == 0) {

                searchNumber = g_contacts[i].number;

                printf("Found number of %s: %d\n", searchName, searchNumber);

                return searchNumber;
            }
        }
    }

    printf("No name %s found!\n", searchName);
    return -1;
}

void deleteEntry(char* name)
{
    for (int i = 0; i < MaxContacts; ++i) {

        if (g_contacts[i].isEmpty == 0) {   // 0 == ist belegt

            // 1. Name: Steht in 'g_contacts[i].name'
            // 2. Name: Parameter 'searchName'

            // sind beide Namen gleich:  strcmp : string compare

            if (strcmp(g_contacts[i].name, name) == 0) {

                g_contacts[i].isEmpty = 1;  // 1 == ist frei !!!

                // Optional
                g_contacts[i].name[0] = '\0';    // "John"  "\0ohn
                g_contacts[i].number = 0;

                printf("   ... Entry %s deleted!\n", name);
                return;
            }
        }
    }

    printf("No name %s found!\n", name);
}


void listEntry(int i)
{
    printf("Eintrag %d: Name=%s [%d]\n",
        i, g_contacts[i].name, g_contacts[i].number);
}


void listsAllEntries()
{
    for (int i = 0; i < MaxContacts; ++i) {

        if (g_contacts[i].isEmpty == 0) {
            listEntry(i);
        }
    }
}

void test_Contacts()
{
    initContacts();

    menu();
}