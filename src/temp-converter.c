#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
#include "common.h"

int main()
{
  char raw_temp[16], *last_char;
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

    degrees_fahrenheit = strtod(raw_temp, &last_char);
    if (last_char == raw_temp || *last_char != '\0')
    {
      printf("Invalid input: %s\n", last_char);
      continue;
    }

    // break if input is valid
    break;
  }

  degrees_celsius = (degrees_fahrenheit - 32) * 5 / 9;

  printf("%.2f°F is equivalent to %.2f°C\n", degrees_fahrenheit, degrees_celsius);
}