// Write a program to print a histogram of the frequencies of dif- ferent characters in its input
#include <stdio.h>
#define MAX_CHARS 122

int main()
{
  // TODO: determine exact size of chars
  int chars[MAX_CHARS];
  int c;

  // initialise chars, overwriting garbage values
  for (int m = 0; m < MAX_CHARS; m++)
  {
    chars[m] = 0;
  }

  while ((c = getchar()) != EOF)
  {
    printf("input received: c = %d\n", c);
    chars[c]++;
  }

  printf("\n");
  printf("%10s %10s\n", "Char Index", "Frequency");
  for (int i = 0; i < MAX_CHARS; i++)
  {
    // TODO: output the char value, not only its index
    printf("%10d %10d\n", i, chars[i]);
  }

  return 0;
}