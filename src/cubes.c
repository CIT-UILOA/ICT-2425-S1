#include <stdio.h>
#include "common.h"

int main()
{
  int terms;
  char raw[3];

  input("Enter number of terms", raw, sizeof raw);
  terms = atoi(raw);

  for (int i = 1; i <= terms; i++)
  {
    printf("Number is: %d and the cube of %d is: %d\n", i, i, i * i * i);
  }
}