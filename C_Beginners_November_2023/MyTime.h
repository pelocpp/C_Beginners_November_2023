// function prototypes of struct Time

// Schnittstellen der Funkionen : Struktur Time

struct Time
{
    int hours;
    int minutes;
    int seconds;
};


void printTime(struct Time time);

int equal(struct Time t1, struct Time t2);
int lessThan(struct Time t1, struct Time t2);

struct Time add(struct Time t1, struct Time t2);
