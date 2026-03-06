#include <stdio.h>
#include <string.h>
#include <time.h>

int main()
{
    time_t currentTime;
    time(&currentTime); // Getting the current time

    time_t now = time(NULL);        // This is another way to get current time
    struct tm *t = localtime(&now); // Converting to localtime structure and this is saved with time.h

    printf("%s", ctime(&currentTime));

    printf("Year: %d\n", t->tm_year);
    printf("Hour: %d\n", t->tm_hour);
    switch (t->tm_mday)
    {
    case 1:
        printf("Today is Sunday\n");
        break;
    case 2:
        printf("Today is Monday\n");
        break;
    case 3:
        printf("Today is tuesday\n");
        break;
    case 4:
        printf("Today is wednessday\n");
        break;
    case 5:
        printf("Today is thursday\n");
        break;
    case 6:
        printf("Today is friday\n");
        break;
    case 7:
        printf("Today is saturday\n");
        break;
    default:
        printf("Date not found");
        break;
    }
    return 0;
}