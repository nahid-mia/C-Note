#include <stdio.h>
#include <string.h>

int main()
{
    char text[300];
    char line[100];

    printf("Enter your multiline string, type Exit and press enter to end\n");

    while (1)
    {
        fgets(line, sizeof(line), stdin);
        if (strcmp(line, "Exit\n") == 0)
        {
            break;
        }
        strcat(text, line);
    };

    printf("\n%s\n", text);
    return 0;
}