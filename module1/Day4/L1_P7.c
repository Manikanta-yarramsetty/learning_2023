#include <stdio.h>

int main()
{
    char str[] = "12345";  // Predefined string of digits
    int result = 0;
    int i = 0;

    while (str[i] != '\0')
    {
        int ival = str[i] - '0';
        result = result * 10 + ival;
        i++;
    }

    printf("String: %s\n", str);
    printf("Integer: %d\n", result);

    return 0;
}