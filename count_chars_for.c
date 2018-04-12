#include <stdio.h>

/* count input caracters; 2nd version */

main()
{
  double nc;

  for(nc = 0; getchar() != EOF; ++nc)
    ; /* for loops requiere a body. The semicolon
         indicates here a `null statement` */
  printf("%.0f\n", nc);
}
