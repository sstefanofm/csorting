#include "util/util.h"

int
main(void)
{
  int arr[] = { 1, 9, 6, 2, 5, 4, 8, 3, 0, 7 };
  int size = sizeof(arr) / sizeof(arr[0]);
  int min_i;

  printarr(arr, size);

  for (int i = 0; i < size - 1; ++i) {
    min_i = i;
    for (int j = i + 1; j < size; ++j)
      if (arr[j] < arr[min_i])
        min_i = j;
    if (min_i != i) /* changed */
      swap(&arr[i], &arr[min_i]);
    printarr(arr, size);
  }

  return 0;
}
