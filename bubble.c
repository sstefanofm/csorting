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
  int arr[] = { 0, 9, 6, 2, 5, 4, 8, 3, 1, 7 };
  int size = sizeof(arr) / sizeof(arr[0]);
  int sorted;

  printarr(arr, size);

  // sort alg
  sorted = 0;
  while (!sorted) {
    sorted = 1;
    for (int i = 0; i < size - 1; ++i)
        if (arr[i] > arr[i + 1]) {
          sorted = 0;
          swap(&arr[i], &arr[i + 1]);
        }
    printarr(arr, size);
  }

  return 0;
}
