#include <stdio.h>

main()
{

  int celcius, fahr;
  int upper, lower, increment;

  lower = 0;
  upper = 300;
  increment = 20;

  fahr = lower;
  while (fahr <= upper)
  {
    celcius = 5 * (fahr - 32) / 9;
    printf("%d\t%d\n", fahr, celcius);
    fahr = fahr + increment;
  }
}