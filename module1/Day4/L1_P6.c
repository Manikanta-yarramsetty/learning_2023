#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[] = "Hello, World!";  // Predefined string
    int i = 0;

    while (str[i])
    {
        if (isupper(str[i]))
        {
            str[i] = tolower(str[i]);
        }
        else if (islower(str[i]))
        {
            str[i] = toupper(str[i]);
        }
        i++;
    }

    printf("Toggled case: %s\n", str);

    return 0;
}