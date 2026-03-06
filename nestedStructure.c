#include <stdio.h>
#include <string.h>

struct Owner
{
    char firstName[30];
    char lastName[30];
};

struct Car
{
    char brand[30];
    int year;
    struct Owner owner; // Here the Owner structure is nested
};

int main()
{
    struct Owner person = {"John", "Doe"};
    struct Car car1 = {"Toyota", 1946, person}; // Here the person variable goes
    printf("%d\n", car1.year);
    printf("%s %s\n", car1.owner.firstName, car1.owner.lastName);
    return 0;
}
