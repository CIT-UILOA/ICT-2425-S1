#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
#include "common.h"

int is_invalid(char *input)
{
  bool has_decimal = false;
  char current;
  int i = 0;

  if (input[0] == '-')
  {
    i++;
  }

  // check for empty string (either
  // NULL or newline)
  if (input[i] == '\0' || input[i] == '\n')
  {
    return 1;
  }

  for (; input[i] != '\n'; i++)
  {
    current = input[i];

    if (current == '.')
    {
      if (has_decimal)
        return 1;
      has_decimal = true;
    }
    else if (!isdigit(current))
    {
      return 1;
    }
  }

  return 0;
}

int main()
{
  char raw_temp[16];
  double degrees_fahrenheit, degrees_celsius;

  while (true)
  {
    // get exactly 16 bytes from stdin
    // i use fgets instead of scanf
    // because as far as i know scanf
    // can cause buffer overflows :)
    if (input("Enter temperature in fahrenheit", raw_temp, sizeof raw_temp))
    {
      // exit if EOF
      return 0;
    }

    if (is_invalid(raw_temp))
    {
      printf("Invalid input!\n");
      continue;
    }

    // break if input is valid
    break;
  }

  degrees_fahrenheit = strtod(raw_temp, NULL);
  degrees_celsius = (degrees_fahrenheit - 32) * 5 / 9;

  printf("%.2f°F is equivalent to %.2f°C\n", degrees_fahrenheit, degrees_celsius);
}