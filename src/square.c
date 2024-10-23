#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int input(char *prompt, char *output, size_t output_size)
{
  printf("%s: ", prompt);

  if (fgets(output, output_size, stdin) == NULL)
  {
    printf("\n");
    return 1;
  }

  return 0;
}

int main()
{
  char raw_num[8];
  float num, squared;

  while (true)
  {
    if (input("Enter a number", raw_num, sizeof raw_num))
      return 0;

    num = strtod(raw_num, NULL);
    squared = num * num;

    printf("%f² is %f\n", num, squared);
  }
}