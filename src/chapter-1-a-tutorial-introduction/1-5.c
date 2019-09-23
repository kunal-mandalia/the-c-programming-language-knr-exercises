#include <stdio.h>
/* Fahrenheit-Celsiustable forfahr=0,20,...,300;floatinq-pointversion*/
int main()
{
  float fahr, celsius;
  int upper, step;
  upper = 300; /* upperlimit*/
  step = 20;   /*stepsize*/

  printf("\n%10s %7s\n", "Fahrenheit", "Celsius");
  for (fahr = upper; fahr >= 0.0; fahr -= step)
  {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%10.0f %7.1f\n", fahr, celsius);
  }
}