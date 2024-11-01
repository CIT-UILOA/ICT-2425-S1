#include "common.h"
#include <stdio.h>

int main()
{
  float width, height, area;
  char raw[16], *last_char;

  input("Enter width in cm", raw, sizeof raw);
  width = strtof(raw, &last_char);

  if (last_char == raw || *last_char != '\0')
  {
    printf("invalid input!\n");
    return 1;
  }

  input("Enter height in cm", raw, sizeof raw);
  height = strtof(raw, &last_char);

  if (last_char == raw || *last_char != '\0')
  {
    printf("invalid input!\n");
    return 1;
  }

  area = (width * height);

  printf("The area of the rectangle is %.3f cm\n", area);
}
