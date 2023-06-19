#include <stdio.h>

void find_min_max(int *array, int size, int *min, int *max) {
  *min = array[0];
  *max = array[0];

  for (int i = 1; i < size; i++) {
    if (array[i] < *min) {
      *min = array[i];
    }
    if (array[i] > *max) {
      *max = array[i];
    }
  }
}

int main() {
  int array[] = {64, 84, 20, 36, 12, 90, 72, 10, 45, 56};
  int min, max;
  
  find_min_max(array, sizeof(array) / sizeof(int), &min, &max);
  
  printf("Min: %d\n", min);
  printf("Max: %d\n", max);
  
  return 0;
}