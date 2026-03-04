#include <stdio.h>
#include <string.h>

// Always use parameter declaration in c, there are no parameters then write void myFunction(void)

int difference;   // this is a global variable and can be accessed anywhere now.
int x = 25;       // This is the global value for x ,, this can be modified and will be modified
const int y = 30; // This is the global variable for y and will never be fully modified

int sumFunction(float x, int y) // the datatype int will return a integer.
{
    return x + y;
}

int subtractionFunction(int x, int y)
{
    return x - y;
}

void myFunction(void)
{
    printf("%d\n", ++x);
}

static inline int multiplyFunction(int x, int y) // This is good for fast programming however uses more space and should use it only for small code block
{
    return x * y;
}

int main()
{
    int x = 10; // this is a local function and can not be accessed outside.
    int y = 20;
    int sum = sumFunction(x, y); // here local value of x will be accessed.
    int sum2 = sumFunction(5, 7);
    difference = subtractionFunction(x, y);
    printf("%d\n", sum);
    printf("%d\n", sum2);
    printf("%d\n", difference);
    int multiplied = multiplyFunction(4, 2);
    printf("%d\n", multiplied);

    // Before using this comment the first two declarations of int x and int y
    myFunction();
    printf("%d\n", x); // Here the value of x will be changed too, since x is the global variable
    return 0;
}