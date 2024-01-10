#include "sort.h"

void sort(int arr[], int n) {
  // Make a new array of size n
  for (int i = 0; i < n; ++i) {
    int min = arr[i], min_index = i;
    for (int j = i; j < n; ++j) {
      if (arr[j] < min) {
        min = arr[j];
        min_index = j;
      }
    }
    // Swap the arr[i] with arr[min_index]
    int temp = arr[i];
    arr[i] = arr[min_index];
    arr[min_index] = temp;
  }
}