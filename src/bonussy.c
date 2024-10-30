/*
Ivan Leonard O Aparte
11 - Justice
github.com/Kiwifuit
*/

#include <stdio.h>

const int LAYER_COUNT = 10;
const char FILL_CHAR = '*';

int main()
{
  // This ain't rust so either grieve
  // in the face of the double for loop
  // or grieve in the face of another
  // programming language

  for (int y = 1; y <= LAYER_COUNT; y++)
  {
    for (int x = 1; x <= y; x++)
    {
      printf("%c", FILL_CHAR);
    }
    printf("\n");
  }
}