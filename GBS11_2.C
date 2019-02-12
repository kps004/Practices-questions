

#include <stdio.h>

int main()
{
  
  int i,a,b;
  scanf("%d %d",&a,&b);
  while(a%2==0)
  {
      a=a/2;
      printf("%d",a);
  }
  
  while(b%2==0)
  {
      b=b/2;
      printf("%d",a);
  }
    return 0;
}
