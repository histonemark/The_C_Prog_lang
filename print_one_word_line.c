#include <stdio.h>

#define IN 1      /* inside a word */
#define OUT 0     /* outside a word */
#define NOSPC 0   /* previous char was not a space */
#define SPC 1     /* previous char was a space */

/* a program that returns its input 
   one word at a time */

main(){
  int c, state, prev_char;

  state = OUT;
  prev_char = NOSPC;
  while((c = getchar()) != EOF){
    if (c == ' ' || c == '\n' || c == '\t'){
      state = OUT;
      if (prev_char == NOSPC)
        printf("%c", '\n');  
      prev_char = SPC;
      
    }
    else if (state == IN){
      printf("%c",c);
    }
    else if (state == OUT){
      state = IN;
      prev_char = NOSPC;
      printf("%c",c);
    }
  }
}
