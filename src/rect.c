#include "common.h"
#include <stdio.h>

int main()
{
  float width, height, area;
  char raw[8];

  input("Enter width in cm", raw, sizeof raw);
  width = strtof(raw, NULL);

  input("Enter height in cm", raw, sizeof raw);
  height = strtof(raw, NULL);

  area = (width * height);

  printf("The area of the rectangle is %.3f cm\n", area);
}
