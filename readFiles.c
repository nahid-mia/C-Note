#include <stdio.h>
#include <stdlib.h>

/*
    fgets functions take three parameters
    1. where to store the file content
    2. maximum size of data to read
    3. the file pointer name
*/

int main()
{
    FILE *fptr;
    fptr = fopen("newFile.txt", "r"); // Open a file in read mode
    char myText[200];
    fgets(myText, sizeof(myText), fptr); // Store the content inside myText, if i use this then only the first line will be shown.
    printf("%s\n", myText);              // Show the content
    while (fgets(myText, sizeof(myText), fptr) != NULL)
    {
        printf("%s", myText);
    }

    fclose(fptr);
    return 0;
}