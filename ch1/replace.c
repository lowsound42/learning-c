#include <stdio.h>

main()
{
  int c;

  while ((c = getchar()) != EOF)
  {
    if (c == '\t')
    {
      printf("\\");
      printf("t");
    }

    if (c == '\b')
    {
      printf("\\");
      printf("b");
    }

    if (c == '\\')
    {
      printf("\\");
      printf("\\");
    }

    if ((c != '\t') && (c != '\b') && (c != '\\'))
    {
      putchar(c);
    }
  }
}