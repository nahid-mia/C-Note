#include <stdio.h>

int main()
{
    float avg = 5 / 2;

    // This keeps the average to 2.0000 because 5 and 2 were int
    printf("%f\n", avg);

    // This makes the average to 2.5 by changing the data type
    float avg2 = (float)5 / 2;
    printf("%.1f\n", avg2);

    return 0;
} 