#include <stdio.h>
#include "common.h"

int main()
{
  char name[32];
  input("Enter name", name, sizeof name);

  printf("Hello, %s!\n", name);
}