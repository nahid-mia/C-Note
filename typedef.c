#include <stdio.h>
#include <string.h>

struct Car
{
    char brand[30];
    int year;
};

typedef float temperature;

typedef struct
{
    char brand[30];
    int year;
} Car;

int main()
{
    temperature today = 25.5;    // Temperature is just another name for float here
    temperature tomorrow = 26.4; // But it is easier to read

    printf("%.2f %.2f\n", today, tomorrow);

    struct Car car1 = {"Toyota", 1645}; // With this we always have to write struct
    Car car2 = {"Brand", 1457};         // This is coming from typedef, so the code is shorter

    printf("%s %d\n", car1.brand, car1.year);
    printf("%s %d\n", car2.brand, car2.year);
    return 0;
}