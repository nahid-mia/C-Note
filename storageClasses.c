#include <stdio.h>
#include <string.h>

void count()
{
    int myNum = 0;
    myNum++;
    printf("num = %d\n", myNum); // This will always print 1
}

void staticCount()
{
    static int myNum = 0;
    myNum++;
    printf("num = %d\n", myNum); // this will change the value continuously, thus increasing the count
}

int main()
{
    count();
    count();
    count();
    staticCount();
    staticCount();
    staticCount();
    return 0;
}