#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    bool isWrong = true;
    bool isRight = false;
    bool wasPresent = true;

    /*if (!isWrong)
    {
        printf("You are right\n");
    }
    else if (isRight)
    {
        printf("you are wrong\n");
    }
    else if (wasPresent)
    {
        printf("You were present\n");
    }*/

    // This is called the ternary operator and it is good to use in case of one if block;
    (isRight) ? printf("You are right\n") : printf("You are wrong\n");
    return 0;
}