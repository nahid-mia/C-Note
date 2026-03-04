// A pointer is a variable that stores the memory address of another variable as it's value.

#include <stdio.h>

int main()
{
    int myAge = 43;
    int *ptr = &myAge;
    printf("%d\n", myAge);
    printf("%p\n", &myAge);
    printf("%p\n", ptr);
    printf("%d\n", *ptr);

    int myNumbers[] = {1, 2, 3, 4, 5};
    printf("%p\n", myNumbers);
    printf("%p\n", &myNumbers[0]);
    printf("%d\n", *myNumbers);       // We get the value of the first element of myNumbers
    printf("%d\n", *(myNumbers + 1)); // We get the value of the second element of myNumbers

    // pointer to pointer or double pointer, basically the second pointer keeps track of the location of the first pointer,,, This can be usefull when passing pointers to functions or something like that
    int myNum = 10;
    int *ptr1 = &myNum;
    int **pptr = &ptr1;
    printf("%d\n", myNum);
    printf("%d\n", *ptr1);
    printf("%d\n", **pptr);

    return 0;
}

/*
    When we add 1 to a pointer, it moves forward by the size of the thing it points to -not just by 1 byte.
    for example:
     >> An int* pointer moves by the size of an integer
     >> A char* pointer moves by the size of an character
    so, If both start at 1000
     >> int* -> p + 1 would move to address 1004
     >> char* -> p + 1 would move to address 1001
*/