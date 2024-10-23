// kapoy add string validation :/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define RAW_BUFFER_SIZE 8
#define NAME_SIZE 32

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
  float height, weight, bmi;
  char name[NAME_SIZE], raw[RAW_BUFFER_SIZE];

  input("Enter name", name, NAME_SIZE);

  input("Enter height in cm", raw, RAW_BUFFER_SIZE);
  height = strtod(raw, NULL) / 100; // convert to cm

  input("Enter weight in kg", raw, RAW_BUFFER_SIZE);
  weight = strtod(raw, NULL);

  bmi = weight / (height * height);

  printf("Output:\n\tName: %s\tHeight: %.2f\n\tWeight: %.2f\n\tBMI: %.1f\n", name, height, weight, bmi);
}