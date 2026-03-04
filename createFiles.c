#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    File *fptr;
    fptr = fopen(filename, mode); Filename = name of the actual file i want to open or create
    // Mode is the single character which specifies what i want to do with the file...
    // (w - writes to a file/ creates a file too)(a- appends new data to a file)(r- reads from a file)
*/

int main()
{
    FILE *fptr;
    fptr = fopen("newFile.txt", "w");
    fprintf(fptr, "Some new text in the notepad\nsince using \"W\" will mean that previous writing is overwritten");
    fclose(fptr);
    return 0;
}