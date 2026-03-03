#include <stdio.h>

int main()
{
    int i = 0;

    // This will 0, 1, 2, 3, 4
    while (i < 5)
    {
        printf("%d\n", i);
        i++;
    }

    // This will print 0, 1, 2, 3, 4
    i = 0;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i < 5);

    // and this will print 1, 2, 3, 4, 5
    i = 0;
    while (i < 5)
    {
        i++;
        printf("%d\n", i);
    }

    // Reversing a number using while loop
    int numbers = 45789;
    int reverse = 0;
    while (numbers)
    {
        reverse = reverse * 10 + numbers % 10;
        numbers /= 10;
    }
    printf("%d\n", reverse);

    return 0;
}
