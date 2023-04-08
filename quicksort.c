#include <stdio.h>

void
printarr(int *arr, int size)
{
  printf("[ ");
  for (int i = 0; i < size; ++i)
    printf("%d ", arr[i]);
  printf("]\n");
}

void
swap(int *a, int *b)
{
  *a += *b;
  *b = *a - *b;
  *a -= *b;
}

int
main(void)
{
  int arr[] = { 1, 6, 2, 3, 9, 5, 7, 4, 0, 8 };
  int size = sizeof(arr) / sizeof(arr[0]);
  int sorted;

  printarr(arr, size);
  
  // sort alg
  sorted = 0;
  while (!sorted) {
    sorted = 1;
    for (int i = 1; i < size - 1; ++i) {
      if (arr[i] < arr[i - 1]) {
        sorted = 0;
        swap(&arr[i], &arr[i - 1]);
      }
      if (arr[i] > arr[i + 1]) {
        sorted = 0;
        swap(&arr[i], &arr[i + 1]);
      }
    }
    printarr(arr, size);
  }

  return 0;
}
