#include <stdio.h>

// index = elementNumber - 1

int main()
{
    int myNumbers[] = {1, 7, 8, 24, 98};
    myNumbers[2] = 3;                                             // This changes the element at position '2'
    printf("%d is the value of the 3rd element\n", myNumbers[2]); // This simply shows the element at position '2'

    int length = sizeof(myNumbers) / sizeof(myNumbers[0]); // sizeof(myNumbers) returns 20 since every element is 4 bytes, so we divide it by sizeof(myNumbers[0]) which is 4 bytes, thus we get that length == 5 //
    printf("%d is the length of the array\n", length);

    for (int i = 0; i < length; i++)
    {
        printf("%d\n", myNumbers[i]);
    }
    return 0;
}