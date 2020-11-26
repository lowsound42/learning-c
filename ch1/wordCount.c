#include <stdio.h>

<<<<<<< HEAD
#define IN 1  // Inside a word
#define OUT 0 // Outside a word

int main(void)
=======
#define IN 1    // Inside a word
#define OUT 0   // Outside a word
//test
main()
>>>>>>> 4f0b2b9cbfc26bfce8dcd96301766a8f06ee5a68
{
  int c, nl, nw, nc, state;

  state = OUT;
  nl = nw = nc = 0;

  while ((c = getchar()) != EOF)
  {
    ++nc;
    if (c == '\n')
      ++nl;
    if (c == ' ' || c == '\n' || c == '\t')
      state = OUT;
    else if (state == OUT)
    {
      state = IN;
      ++nw;
    }
  }
  printf("%d %d %d\n", nl, nw, nc);
}
