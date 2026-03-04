#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    fptr = fopen("newFile.txt", "a"); // If the file doesn't exist then a file will be created on it's own
    fprintf(fptr, "\nHello World!");
    fclose(fptr);
    return 0;
}