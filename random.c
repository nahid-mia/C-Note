#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
    int z = rand();
    srand(time(NULL));
    int r = rand();
    int x = rand() % 10; // This will give me random number between 0 and 9
    int y = rand() % 21; // This will give me random number between 0 and 20
    printf("%d\n", z);   // This will never change because it got called before srand()
    printf("%d\n", r);
    printf("%d\n", x);
    printf("%d\n", y);
    return 0;
}