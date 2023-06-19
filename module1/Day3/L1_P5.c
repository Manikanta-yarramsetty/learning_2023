#include <stdio.h>

void findSmallestAndLargestDigits(int n, int numbers[]) {
    if (n < 1) {
        printf("Not Valid\n");
        return;
    }

    int smallestDigit = 9;
    int largestDigit = 0;
    int i, num;

    for (i = 0; i < n; i++) {
        num = numbers[i];

        while (num > 0) {
            int digit = num % 10;

            if (digit < smallestDigit) {
                smallestDigit = digit;
            }

            if (digit > largestDigit) {
                largestDigit = digit;
            }

            num /= 10;
        }
    }

    if (smallestDigit == 9 && largestDigit == 0) {
        printf("Not Valid\n");
    } else {
        printf("Smallest Digit: %d\n", smallestDigit);
        printf("Largest Digit: %d\n", largestDigit);
    }
}

int main() {
    int n, i;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Not Valid\n");
        return 1;
    }

    int numbers[n];

    for (i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    findSmallestAndLargestDigits(n, numbers);

    return 0;
}