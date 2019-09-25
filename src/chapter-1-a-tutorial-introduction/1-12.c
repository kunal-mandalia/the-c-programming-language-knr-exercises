// Exercise 1-12. Write a program that prints its input one word per line.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define IN 1
#define OUT 0

void clearchars(char word[], int size) {
  for (int i = 0; i < size; i++) {
    word[i] = '\0';
  }
}

int main() {
  int c, state;
  int i = 0;
  char word[50] = "";
  state = OUT;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      if (state == IN) {
        printf("%s\n", word);
      }
      state = OUT;
      i = 0;
      clearchars(word, 50);
    } else {
      word[i++] = c;
      state = IN;
    }
  }

  return 0;
}