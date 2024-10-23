#include "common.h"
#include <stdio.h>
#include <string.h>

int input(char *prompt, char *output, size_t output_size)
{
  printf("%s: ", prompt);

  if (fgets(output, output_size, stdin) == NULL)
  {
    printf("\n");
    return 1;
  }

  output[strcspn(output, "\n")] = 0;

  return 0;
}