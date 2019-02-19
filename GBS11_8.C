

#include <stdio.h>

int main ()
{

  int a[10], i, j, n, p=0, q=0, k=0;
  scanf("%d  %d", &n, &k);
  for (i = 0; i < n; i++)
    {
      scanf("%d", &a[i]);
    }
  p = a[0];
  for (i = 0; i < k; i++)
    {
      for (j = 1; j < n; j++)
	{
	  if ((p > a[j])&&(a[j]!=32436))
	    {
	      p = a[j];
	      q = j;
	    }
	}
      a[q] = 32436;
      q = p;
      p = 32436;

    }
  printf("%d", q);

  return 0;
}
