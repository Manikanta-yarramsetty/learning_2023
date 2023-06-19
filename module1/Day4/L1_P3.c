#include <stdio.h>

void reverse_array(int *array, int size) {
  int start = 0;
  int end = size - 1;

  while (start < end) {
    int temp = array[start];
    array[start] = array[end];
    array[end] = temp;
    start++;
    end--;
  }
}

int main() {
  int array[] = {64, 84, 20, 36, 12, 90, 72, 10, 45, 56};
  int size = sizeof(array) / sizeof(int);

  printf("Original Array: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");

  reverse_array(array, size);

  printf("Reversed Array: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");

  return 0;
}