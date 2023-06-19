#include <stdio.h>

int main() {
  int array[] = {64, 84, 21, 36, 17, 90, 77, 10, 48, 55};
  int size = sizeof(array) / sizeof(int);
  int sum_even = 0;
  int sum_odd = 0;

  for (int i = 0; i < size; i++) {
    if (array[i] % 2 == 0) {
      sum_even += array[i];
    } else {
      sum_odd += array[i];
    }
  }

  int difference = sum_even - sum_odd;

  printf("Sum of even elements: %d\n", sum_even);
  printf("Sum of odd elements: %d\n", sum_odd);
  printf("Difference between even and odd elements: %d\n", difference);

  return 0;
}