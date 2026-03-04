#include <stdio.h>
#include <string.h>

int main()
{
    char alphabet[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char str1[] = "Hello";
    char str2[] = " World";
    printf("%zu\n", strlen(alphabet));
    printf("%zu\n", sizeof(alphabet)); // If 50 was not given then the answer would be 27
    strcat(str1, str2);
    printf("%s\n", str1);
    strcpy(str2, str1);
    printf("%s\n", str2);
    printf("%d\n", strcmp(str1, str2)); // Compares if the strings are equal char by char, if 0 then equal
    return 0;
}