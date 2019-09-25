// Exercise 1-11. How would you test the word count program? What kinds of input
// are most likely to uncover bugs if there are any?
#include <assert.h>
#include <stdio.h>
#define OUT 0
#define IN 1

typedef struct {
  int nc;
  int nl;
  int nw;
} counts;

counts wordCount(char *input) {
  int c, nc, nl, nw;
  int state = OUT;
  int i = 0;
  nc = nl = nw = 0;

  for (i = 0; input[i] != '\0'; i++) {
    c = (int)input[i];
    ++nc;

    if (c == '\n') {
      ++nl;
    }
    if (c == ' ' || c == '\t' || c == '\n') {
      state = OUT;
    } else if (state == OUT) {
      state = IN;
      ++nw;
    }
  }
  counts result = {nc, nl, nw};
  return result;
}

int main() {

  char *case1 = "hello world";
  counts result1 = wordCount(case1);
  assert(result1.nc == 11);
  assert(result1.nl == 0);
  assert(result1.nw == 2);

  char *case2 = "hello,\nworld.\ncount me in";
  counts result2 = wordCount(case2);
  assert(result2.nc == 25);
  assert(result2.nl == 2);
  assert(result2.nw == 5);

  return 0;
}