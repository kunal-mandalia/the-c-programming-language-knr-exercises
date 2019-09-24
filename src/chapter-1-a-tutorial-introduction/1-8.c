#include <stdio.h>

int main()
{
  int c, blanks, tabs, newlines;
  blanks = tabs = newlines = 0;

  while ((c = getchar()) != EOF)
  {
    if (c == '\n')
    {
      newlines++;
    }
    else if (c == '\t')
    {
      tabs++;
    }
    else if (c == ' ')
    {
      blanks++;
    }
  }

  printf("%8s %8s %8s\n", "blanks", "tabs", "newlines");
  printf("%8d %8d %8d\n", blanks, tabs, newlines);

  return 0;
}