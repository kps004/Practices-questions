#include <stdio.h>
#include <math.h>

 int
main () 
{
  
int a, d, n, i, t;
  
int sum = 0;
  
scanf ("%d%d%d", &a, &d, &n);
  
sum = (n * (2 * a + (n - 1) * d)) / 2;
  
t = a + (n - 1) * d;
  
printf (" %d ", sum);
  
 
return 0;

}
