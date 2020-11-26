#include <stdio.h>

#define IN 1  // Inside a word
#define OUT 0 // Outside a word
#define MAX_INPUT 100

int main(void)
{
  int i, j, c, nw, nc, state;
  int wordCharacterCount[MAX_INPUT] = {0};

  state = OUT;
  nw = nc = 0;

  while ((c = getchar()) != EOF)
  {
    nc++;
    if (c == ' ' || c == '\n' || c == '\t')
    {
      state = OUT;
      nc = 0;
    }
    else if (state == OUT)
    {
      state = IN;
      nw++;
    }
    if (nc != 0)
      wordCharacterCount[(nw - 1)] = nc;
  }
  for (i = 0; i < (nw); i++)
  {
    printf("word #%d:", i + 1);
    for (j = 0; j < wordCharacterCount[i]; j++)
    {
      printf("X");
    }
    printf("\n");
  }
}
