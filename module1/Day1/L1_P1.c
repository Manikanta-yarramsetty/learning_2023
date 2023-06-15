#include <stdio.h>

int findMaxUsingIfElse(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int findMaxUsingTernaryOperator(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;
}

int main() {
    int num1 = 10;
    int num2 = 20;
    int max;

    // Using if-else
    max = findMaxUsingIfElse(num1, num2);
    printf("Using if-else: The biggest number is %d\n", max);

    // Using ternary operator
    max = findMaxUsingTernaryOperator(num1, num2);
    printf("Using ternary operator: The biggest number is %d\n", max);

    return 0;
}