#include <stdio.h>
#include <string.h>

struct myStructure
{
    int myNum;
    char myLetter;
    char myString[30];
};

int main()
{
    struct myStructure s1 = {55, 'N', "Hello World!"};
    struct myStructure s2;
    s2 = s1; // This copies s1 to s2
    s2.myNum = 10;
    s2.myLetter = 'A';
    // s2.myString = "New letter", This won't work because string is an array which cant be accessed directly from struct
    strcpy(s2.myString, "New text by C");
    printf("%d %c %s\n", s1.myNum, s1.myLetter, s1.myString);
    printf("%d %c %s\n", s2.myNum, s2.myLetter, s2.myString);
    return 0;
}