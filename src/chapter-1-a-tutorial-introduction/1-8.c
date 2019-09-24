#include <stdio.h>

int main()
{
  int c;
  long blanks = 0.0;
  long tabs = 0.0;
  long newlines = 0.0;

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

  printf("blanks: %5.0ld\n", blanks);
  printf("tabs: %5.0ld\n", tabs);
  printf("newlines: %5.0ld\n", newlines);

  return 0;
}