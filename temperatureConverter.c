#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define INCREMENT 20

main()
{

  int celcius;

  for (int i = LOWER; i <= UPPER; i = i + INCREMENT)
  {
    celcius = 5 * (i - 32) / 9;
    printf("%d\t%d\n", i, celcius);
  }
}