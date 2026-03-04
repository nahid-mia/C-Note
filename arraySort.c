#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int numbers[] = {5, 2, 8, 1, 7, 3, 9, 4, 6, 5};
    int length = sizeof(numbers) / sizeof(numbers[0]);
    qsort(numbers, length, sizeof(int), compare);
    for (int i = 0; i < length; i++)
    {
        printf("%d ", numbers[i]);
    }
    return 0;
}