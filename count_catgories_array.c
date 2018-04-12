#include <stdio.h>

/* count ocurrences of digits, white space chararacters
   and other characters */

main()
{
  int c, i, nwhite, nother;
  int ndigit[10]; /* Array to count the 10 types of
                     posible characters */

  nwhite = nother = 0;
  for (i = 0; i < 10; ++i)
    ndigit[i] = 0; /* Initialize array with 0s */

  while ((c = getchar()) != EOF)
    if (c >= '0' && c <= '9')
      /* By definition, chars are just small integers, 
       so char variables and constants are identical to
       ints in arithmetic expressions. This is natural 
       and convenient; for example c-'0' is an integer 
       expression with a value between 0 and 9 corresponding 
       to the character '0' to '9' stored in c, 
       and thus a valid subscript for the array ndigit. */
      ++ndigit[c - '0'];
    else if (c == ' ' || c == '\n' || c == '\t') 
      /* else if (c == 32 || c == 10 || c == 9) */  
      ++nwhite;
    else
      ++nother;
  /* Print the output */
  printf("Digits\n");
  for (i = 0; i < 10; ++i)
    printf("[%d's]: %d\n", i, ndigit[i]);
  printf("White space = %d\nOther = %d\n",
         nwhite, nother);
}
