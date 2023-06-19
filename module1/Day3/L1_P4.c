#include <stdio.h>

int findLargestNumber(int num) {
    int largest = 0;
    int divisor = 1;

    while (divisor <= num) {
        int newNum = (num / (divisor * 10)) * divisor + (num % divisor);

        if (newNum > largest) {
            largest = newNum;
        }

        divisor *= 10;
    }

    return largest;
}

int main() {
    int number;
    printf("Enter a 4-digit number: ");
    scanf("%d", &number);

    if (number < 1000 || number > 9999) {
        printf("Invalid input. Please enter a 4-digit number.\n");
        return 1;
    }

    int largestNumber = findLargestNumber(number);
    printf("The largest number by deleting a single digit: %d\n", largestNumber);

    return 0;
}