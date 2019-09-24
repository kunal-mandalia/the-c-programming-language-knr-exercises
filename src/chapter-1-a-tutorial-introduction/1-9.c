// Exercise 1-9. Write a program to copy its input to its output, replacing each stringofoneormoreblanksbyasingleblank
#include <stdio.h>

int main()
{
  int c;
  int prevc;

  while ((c = getchar()) != EOF)
  {
    if ((c == prevc) && (c == ' '))
    {
      // skip the duplicate blank
    }
    else
    {
      putchar(c);
    }
    prevc = c;
  }

  return 0;
}