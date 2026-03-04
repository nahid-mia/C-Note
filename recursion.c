#include <stdio.h>

long int factorial(int n) // Using recursion to get the factorial
{
    if (n > 1)
    {
        return n * factorial(n - 1);
    }
    else
    {
        return 1;
    }
}

long int fibonacci(int n) // Using recursion to get the fibonacci series
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    long int result = factorial(5);
    printf("%ld\n", result);
    int n = 2; // number of terms in the fibonacci series.
    printf("Fibonacci series is\t");
    for (int i = 0; i < n; i++) // This loop will return the values one by one from the buffer state
    {
        printf("%ld ", fibonacci(i));
    }

    return 0;
}