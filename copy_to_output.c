#include <stdio.h>

/* copy input to output; 2nd version */

main()
{
  int c;
  //int d;
   
  while ((c = getchar()) != EOF) {
    // d = (c == EOF);
    //printf("Is it EOF?: %d\n", d);
    putchar(c);
    c = getchar();
  }
}
