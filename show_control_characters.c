#include <stdio.h>

/* a program that shows tabs,backspaces 
and backlashes of its input */

main()
{
  int c;
  while ((c = getchar()) != EOF){
    if (c == '\t'){
      printf("\\t");
    }
    if (c == '\\'){
      printf("\\");
    }
    printf("%c", c);
  }
}
