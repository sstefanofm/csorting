#include <stdbool.h>
#include "util/util.h"

int
main(void)
{
  int arr[] = { 1, 9, 6, 2, 5, 4, 8, 3, 0, 7 };
  int size = sizeof(arr) / sizeof(arr[0]);
  bool sorted = false;

  printarr(arr, size);
  
  while (!sorted) {
    sorted = true;
    for (int i = 1; i < size - 1; ++i) {
      if (arr[i] < arr[i - 1]) {
        sorted = false;
        swap(&arr[i], &arr[i - 1]);
      }
      if (arr[i] > arr[i + 1]) {
        sorted = false;
        swap(&arr[i], &arr[i + 1]);
      }
    }
    printarr(arr, size);
  }

  return 0;
}
