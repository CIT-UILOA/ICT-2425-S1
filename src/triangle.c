#include "common.h"
#include <stdio.h>

int main()
{
  float base, height, area;
  char raw[8];

  input("Enter base in cm", raw, sizeof raw);
  base = strtof(raw, NULL);

  input("Enter height in cm", raw, sizeof raw);
  height = strtof(raw, NULL);

  area = (base * height) / 2;

  printf("The area of the triangle is %.3f cm\n", area);
}
