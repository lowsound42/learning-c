#include <stdio.h>

main()
{

  float celcius, fahr;
  int upper, lower, increment;

  lower = 0;
  upper = 300;
  increment = 20;

  fahr = lower;
  while (fahr <= upper)
  {
    celcius = 5 * (fahr - 32) / 9;
    printf("%3.1f\t%6.1f\n", fahr, celcius);
    fahr = fahr + increment;
  }
}