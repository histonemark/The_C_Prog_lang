#include <stdio.h>

/* a program that removes blanks from its input */

main()
{
  int c;
  int prev_char;

  prev_char = 0;
  while ((c = getchar()) != EOF ){
    if (c != ' ' && prev_char == 0)
      printf("%c", c);
    if (c == ' ')
      prev_char = 1; /* previous char was a space */
    if (c != ' ' && prev_char == 1){
      printf(" ");
      printf("%c", c);
      prev_char = 0;
    }
    
  }
}
