#include <stdio.h>

int main()
{
  int lower = -50;
  int upper = 50;
  int step = 10;

  float celsius = lower;
  float fahr;

  while (celsius <= upper)
  {
    fahr = celsius * (9.0 / 5.0) + 32;
    printf("%3.0f %5.0f\n", celsius, fahr);
    celsius = celsius + step;
  }
}