#include <stdio.h>
/* Fahrenheit-Celsiustable forfahr=0,20,...,300;floatinq-pointversion*/
int main()
{
  float fahr, celsius;
  int lower, upper, step;
  lower = 0;   /* lowerlimitoftemperaturetable*/
  upper = 300; /* upperlimit*/
  step = 20;   /*stepsize*/
  fahr = lower;

  printf("\n%10s %7s\n", "Fahrenheit", "Celsius");
  while (fahr <= upper)
  {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%10.0f %7.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}