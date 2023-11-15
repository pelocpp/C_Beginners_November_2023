// data types
struct Money
{
    int euros;   // Greater 0 !!!
    int cent;    // 0 .. 99 is a valid value 
};

// function prototypes
void printMoney(struct Money* money);
void setMoney(struct Money* money, int euros, int cent);
void addEuros(struct Money* money, int euros);
void addCent(struct Money* money, int cent);
void addMoney(struct Money* money, struct Money* other);
int sameMoney(struct Money* money1, struct Money* money2);
int lessThanMoney(struct Money* money1, struct Money* money2);

//void subEuros(struct Money* money, int euros);
//void subCent(struct Money* money, int cent);
void subMoney(struct Money* money, struct Money* other);