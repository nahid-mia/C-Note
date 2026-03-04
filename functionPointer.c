#include <stdio.h>
#include <math.h>

void add(int a, int b)
{
    printf("The result is %d\n", a + b);
}

void subtract(int a, int b)
{
    printf("The result is %d\n", a - b);
}

void multiply(int a, int b)
{
    printf("The result is %d\n", a * b);
}

int main()
{
    int choice, x = 10, y = 15;

    void (*operations[3])(int, int) = {add, subtract, multiply};
    printf("Choose an Operation\n");
    printf("1: Addition\n2: Subtraction\n3: Multiplication\n");
    scanf("%d", &choice);

    while (choice)
    {

        if (choice >= 1 && choice <= 3)
        {
            operations[choice - 1](x, y);
        }
        else if (choice == 0)
        {
            printf("Exiting...\n");
            break;
        }
        else
        {
            printf("Invalid Choice\n");
        }
        printf("Choose an Operation\n");
        printf("1: Addition\n2: Subtraction\n3: Multiplication\n0: Exit\n");
        scanf("%d", &choice);
    }
    return 0;
}