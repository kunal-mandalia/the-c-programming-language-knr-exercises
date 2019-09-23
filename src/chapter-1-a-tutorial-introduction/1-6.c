#include <stdio.h>
#include <assert.h>

int main()
{
  int c, hasinput;

  c = getchar();
  hasinput = c != EOF;
  assert(hasinput == 0 || hasinput == 1);

  while (hasinput)
  {
    putchar(c);
    c = getchar();
    hasinput = c != EOF;
  }

  return 0;
}