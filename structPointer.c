#include <stdio.h>
#include <string.h>

struct Car
{
    char brand[30];
    int year;
};

void updateYear(struct Car *c) // This function updates the brand
{
    strcpy(c->brand, "Yamaha"); // the change is happening because the same address is being saved in *c and in *sptr
}

int main()
{
    struct Car car1 = {"Toyota", 1945};
    struct Car *sptr = &car1; // This is where the pointer is declared
    updateYear(&car1);
    printf("%s %d", sptr->brand, sptr->year);
    return 0;
}