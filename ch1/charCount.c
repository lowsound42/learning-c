#include <stdio.h>

main()
{
  long nc;

  nc = 0;
  while ( getchar() != EOF )
  {
    ++nc;
    printf("The number of characters is: %ld\n", nc);
  }
}