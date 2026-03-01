#include <stdio.h>
#include <math.h>
// type VariableName = value
// int myNum = 15;
/*
    int myNum;
    myNum = 15;
*/

int main()
{
    int a, b, c;
    int myNum = 15;
    float myFloat = 16.7;
    long long int x;
    x = 35e6; // This means that 35 * 10^6
    char myLetter = 'D';
    char myWord[20] = "Danny";
    printf("%d\n", myNum);
    printf("%f\n", myFloat);
    printf("%c\n", myLetter);
    printf("%s\n\n", myWord);
    printf("%lld\n", x);

    // Here the values are interchanged
    printf("Put the value of a and b And I will interchange them for you\n");
    scanf("%d %d", &a, &b);
    c = a + b;
    a = b;
    b = c - a;
    printf("%d %d", a, b);
    return 0;
}