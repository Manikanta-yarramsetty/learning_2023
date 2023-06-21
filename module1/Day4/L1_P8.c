#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char timeString[] = "12:34:56"; // Predefined time string
    char *token;
    unsigned long hours, minutes, seconds;
    unsigned long totalSeconds;

    token = strtok(timeString, ":");
    hours = strtoul(token, NULL, 10);

    token = strtok(NULL, ":");
    minutes = strtoul(token, NULL, 10);

    token = strtok(NULL, ":");
    seconds = strtoul(token, NULL, 10);

    totalSeconds = (hours * 3600) + (minutes * 60) + seconds;

    printf("Total seconds: %lu\n", totalSeconds);

    return 0;
}