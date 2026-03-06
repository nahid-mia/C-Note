#include <stdio.h>
#include "calc.h"

int main()
{
    printf("5 + 5 = %d\n", add(5, 5));
    printf("7 - 3 = %d\n", subtract(7, 3));
    return 0;
}

/*
    Multiple files can be compiled at once by using
    like gcc main.c calc.c -o program
*/