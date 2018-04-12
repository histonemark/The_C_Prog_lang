#include <stdio.h>

/* Using the for loop to print Celsius
   Fahrenheit reverse coversion table */

#define UPPER 300  /* Upper fahr temp to convert */
#define LOWER 0    /* Lower fahr temp to convert */
#define STEP 20    /* Step size */

main()
{
  int fahr;

  for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
