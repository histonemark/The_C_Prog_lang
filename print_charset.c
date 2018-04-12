#include <stdio.h>

/* Prints the character set of the machine */

main()
{
  int c, i;
  for (i = -127; i < 127; ++i)
    printf("%d : %c\n",i,i);
}
