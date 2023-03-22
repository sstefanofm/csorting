#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 10

void
rng(int *list)
{
  srand((unsigned) time(NULL));
  
  for (int i = 0; i < SIZE; ++i)
    list[i] = rand() % 15;
}

int
maxfrec(int *frec)
{
  int max;

  max = 0;
  for (int i = 0; i < SIZE; ++i)
    max = frec[i] > max ? frec[i] : max;

  return max;
}

void
pborder_h(int *frec)
{
  for (int i = 0; i < SIZE; ++i)
    printf("=");
  printf("\n");
}

void
pbars_h(int *frec)
{
  pborder_h(frec);
  for (int i = 0; i < SIZE; ++i) {
    printf("||");
    for (int j = 0; j < frec[i]; ++j)
      printf("#");
    printf("\n");
  }
  pborder_h(frec);
}

int
main(void)
{
  int rands[SIZE] = { 0 };

  rng(rands);
  pbars_h(rands);
  
  return 0;
}
