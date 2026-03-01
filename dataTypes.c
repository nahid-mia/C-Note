#include <stdio.h>
#include <stdlib.h>

int main()
{
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    char a = 65, b = 55, c = 78;
    char myWord = 'Hello';
    char myText[] = "Hello";
    printf("%c %c %c\n", a, b, c);

    // Only prints the last word
    printf("%c\n", myWord);

    // Prints all the words
    printf("%s\n", myText);

    // This helps to find the size of the datatype
    printf("%zu\n", sizeof(myInt));
    printf("%zu\n", sizeof(myFloat));
    printf("%zu\n", sizeof(myDouble));
    printf("%zu\n", sizeof(myChar));

    // This makes the value of y constant and it must be declared with a value
    const int y = 45;
    printf("%d\n", y);

    return 0;
}