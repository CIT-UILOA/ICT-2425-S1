#include "common.h"
#include <stdio.h>

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