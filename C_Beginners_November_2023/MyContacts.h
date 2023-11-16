// Kontakte - App
// ===================================================

// Konstanten
#define  MaxContacts  2     // symbolische Konstante

// ===================================================
// Datentypen

struct Contact
{
    char name[64];
    int  number;
    int  isEmpty;    // 1 == leer, 0 == belegt  
};

// ===================================================
// Protytypen // Schnittstellen der Funktionen

extern void initContacts();
extern void menu();
extern void listEntry(int i);
extern void listsAllEntries();

extern int  searchEntry(char* searchName);
extern void deleteEntry(char* name);
