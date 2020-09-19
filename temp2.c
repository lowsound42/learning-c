#include <stdio.h>

main()
{

  float celcius, fahr;
  int upper, lower, increment;

  lower = 0;
  upper = 300;
  increment = 20;

  fahr = lower;
  printf("Converting F to C:\n\n");
  while (fahr <= upper)
  {
    celcius = ( 5.0 / 9.0 ) * ( fahr - 32.0);
    printf("%3.0f\t%6.1f\n", fahr, celcius);
    fahr = fahr + increment;
  }
}