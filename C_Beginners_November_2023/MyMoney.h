// data types
struct Money
{
    int euros;   // Greater 0 !!!
    int cent;    // 0 .. 99 is a valid value 
};


// Tipp // Besser // Einfacher
// 3 euro 50 cent  ===> 350
// Didaktik: Eine Struktur mit einer Variablen 
struct MoneyExtended
{
    int cents;

    // int euros;   // Greater 0 !!!
    // int cent;    // 0 .. 99 is a valid value 
};





// function prototypes // Beschreibung der Schnittstelle

void printMoney(struct Money* money);
void setMoney(struct Money* money, int euros, int cent);
void addEuros(struct Money* money, int euros);
void addCent(struct Money* money, int cent);
void addMoney(struct Money* money, struct Money* other);
int sameMoney(struct Money* money1, struct Money* money2);
int lessThanMoney(struct Money* money1, struct Money* money2);

//void printMoney(this);
//void setMoney(this, int euros, int cent);
//void addEuros(this, int euros);
//void addCent(this, int cent);
//void addMoney(this, struct Money* other);
//int sameMoney(this, struct Money* money2);
//int lessThanMoney(this, struct Money* money2);



// Bonus-Aufgabe :)
void subMoney(struct Money* money, struct Money* other);
