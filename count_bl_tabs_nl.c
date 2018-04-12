#include <stdio.h>

/* count blank lines, tabs and newlines */

main()
{
  int c, bl, tb, nl;
  bl = 0;
  tb = 0;
  nl = 0;
  
  while ((c = getchar()) != EOF){
    if (c == ' ')
      ++bl;
    if (c == '\t')
      ++tb;
    if (c == '\n')
      ++nl;   
  }
  printf("Blanks: %d\nTabs: %d\nLines: %d\n", bl, tb, nl);  
}
