#include <stdio.h>
#include <assert.h>

int main()
{
  int c;

  while ((c = getchar()) != EOF)
  {
    putchar(c);
  }
  printf("End of file (%d)\n", EOF);

  return 0;
}