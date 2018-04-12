#include<stdio.h>

/* print Fahrenheit-Celsisustable
  forfarh=0,20,...,300 */

main()
{
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;    /* lower limit of temperature scale */
  upper = 300;  /* upper limit */
  step = 20;     /* step size */

  printf("Coversion table Celsius to Fahrenheit:\n");
  fahr=lower;
  while(fahr <= upper) {
    celsius = (5.0/9.0) * (fahr-32.0); /* Explcit float notation 
                                       for readability */
      printf("%3.0f\t%6.1f\n", fahr, celsius);
      fahr = fahr + step;
  }
}
