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
  char name[NAME_SIZE], raw[RAW_BUFFER_SIZE];

  input("Enter name", name, NAME_SIZE);

  input("Enter height in cm", raw, RAW_BUFFER_SIZE);
  height = strtod(raw, NULL) / 100; // convert to cm

  input("Enter weight in kg", raw, RAW_BUFFER_SIZE);
  weight = strtod(raw, NULL);

  bmi = weight / fsqr(height);

  printf("Output:\n\tName: %s\n\tHeight: %.2f\n\tWeight: %.2f\n\tBMI: %.1f\n", name, height, weight, bmi);
}