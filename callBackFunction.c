#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void addNumbers(int a, int b)
{
    printf("The sum is %d\n", a + b);
}

void subtractNumbers(int a, int b)
{
    printf("The difference is %d\n", a - b);
}

void multiplyNumbers(int a, int b)
{
    printf("The product is %d\n", a * b);
}

void divideNumbers(int a, int b)
{
    printf("The quotient is %.2f\n", (float)a / b);
}

void calculate(void (*callback)(int, int), int x, int y)
{
    callback(x, y);
}


int main()
{
    int num1, num2;
    printf("Enter the first number\n");
    scanf("%d", &num1);
    printf("Enter the second number\n");
    scanf("%d", &num2);
    calculate(addNumbers, num1, num2);
    calculate(subtractNumbers, num1, num2);
    calculate(multiplyNumbers, num1, num2);
    calculate(divideNumbers, num1, num2);
    return 0;
}