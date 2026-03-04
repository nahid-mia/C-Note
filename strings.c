#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char greetings[] = "hello World";
    char greetArr[] = {'h', 'e', 'l', 'l', 'o', '\0'}; // This is string creation by array
    printf("%s\n", greetings);
    printf("%s\n", greetArr);
    printf("%zu\n", strlen(greetings)); // strlen is included in string.h
    printf("%zu\n", strlen(greetArr));
    greetings[0] = 'j';
    printf("%s\n", greetings);
    return 0;
}
