#include <stdio.h>

main()
{

  int celcius;

  for (int i = 0; i <= 300; i = i + 20)
  {
    celcius = 5 * (i - 32) / 9;
    printf("%d\t%d\n", i, celcius);
  }
}