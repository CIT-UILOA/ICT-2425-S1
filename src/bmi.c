// kapoy add string validation :/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "common.h"

#define RAW_BUFFER_SIZE 8
#define NAME_SIZE 32

int main()
{
  float height, weight, bmi;
  char name[NAME_SIZE], raw[RAW_BUFFER_SIZE], *last_char;

  input("Enter name", name, NAME_SIZE);

  input("Enter height in cm", raw, RAW_BUFFER_SIZE);
  height = strtod(raw, &last_char) / 100;
  if (last_char == raw || *last_char != '\0')
  {
    printf("Invalid input: %s\n", last_char);
    return -1;
  }

  input("Enter weight in kg", raw, RAW_BUFFER_SIZE);
  weight = strtod(raw, &last_char);

  if (last_char == raw || *last_char != '\0')
  {
    printf("Invalid input: %s\n", last_char);
    return -1;
  }

  bmi = weight / fsqr(height);

  printf("Output:\n\tName: %s\n\tHeight: %.2f\n\tWeight: %.2f\n\tBMI: %.1f\n", name, height, weight, bmi);
}