#include <stdio.h>

#define IN 1   /* inside a word */
#define OUT 0  /* outside a word */

/* a barebones implementation of UNIX word count `wc` */

main(){
  int c, nl, nw, nc, state;

  state = OUT;
  nl = nw = nc = 0;
  while((c = getchar()) != EOF){
    ++nc;
    if (c == '\n')
      ++nl;
    if (c == ' ' || c == '\n' || c == '\t')
      state = OUT;
    else if (state == OUT){
      state = IN;
      ++nw;
    }
  }
  printf("N.lines: %d N.words: %d N.chars: %d\n",
         nl, nw, nc);
}
