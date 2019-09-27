// Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.
#include <stdio.h>
#include <string.h>
#define MAX_WORD_LENGTH 15
#define IN 0
#define OUT 1

int main()
{
  int c, state, wordlength;
  int wordlengths[MAX_WORD_LENGTH];

  state = OUT;
  wordlength = 0;

  for (int i = 0; i < MAX_WORD_LENGTH; i++)
  {
    wordlengths[i] = 0;
  }

  while ((c = getchar()) != EOF)
  {
    if (c == ' ' || c == '\t' || c == '\n')
    {
      if (state == IN)
      {
        wordlengths[wordlength]++;
        wordlength = 0;
      }
      state = OUT;
    }
    else
    {
      state = IN;
      wordlength++;
    }
  }

  printf("\n");
  printf("%12s %s\n", "word length", "frequency");
  for (int j = 0; j < MAX_WORD_LENGTH; j++)
  {
    char bar[wordlengths[j]];

    for (int k = 0; k <= wordlengths[j]; k++)
    {
      if (k == wordlengths[j])
      {
        bar[k] = '\0';
      }
      else
      {

        bar[k] = '-';
      }
    }
    printf("%12d %s\n", j, bar);
  }
  printf("\n");
  return 0;
}
