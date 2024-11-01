#include <stdio.h>
#include <stdlib.h>
#include "common.h"

int main()
{
  int terms, acc, is_odd;
  char raw[3];

  input("Enter number of terms", raw, sizeof raw);
  terms = strtod(raw, NULL);

  printf("The odd number are: ");
  for (int i = 1; i <= (terms * 2); i++)
  {
    is_odd = i % 2;
    acc += is_odd ? i : 0;

    if (is_odd)
    {
      printf("%d ", i);
    }
  }
  printf("\nAnd their sum is: %d\n", acc);
}