

#include <stdio.h>

int main()
{

 int n,p,i=1;
 scanf("%d %d",&n,&p);
 while(p)
 {
     i=i*n;
     p--;
 }
 printf("%d",i);
    return 0;
}
