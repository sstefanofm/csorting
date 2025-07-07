#include <stdio.h>
#include "util.h"

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
