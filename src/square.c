#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "common.h"

int main()
{
  char raw_num[8];
  float num, squared;

  while (true)
  {
    if (input("Enter a number", raw_num, sizeof raw_num))
      return 0;

    num = strtod(raw_num, NULL);
    squared = fsqr(num);

    printf("%f² is %f\n", num, squared);
  }
}