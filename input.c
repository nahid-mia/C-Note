#include <stdio.h>
#include <string.h>

int main()
{
    int myNum;
    char myChar[50];
    char myName[50];
    printf("Enter the number\n");
    scanf("%d", &myNum);
    getchar(); // This helps with the buffer line deletion, so that fgets works.
    printf("here is your number %d\n", myNum);
    printf("Enter the name\n");
    scanf("%s", myChar); //  here &myChar is invalid
    while (getchar() != '\n'); //This deletes everything in the buffer for fgets to work
    printf("Here is your name %s\n", myChar); // It will not show anything after space
    printf("Enter your full name here to get it shown to you\n");
    fgets(myName, sizeof(myName), stdin); // This will help us to get the full name even after spaces
    printf("Here is your full name %s\n", myName);
    return 0;
}
