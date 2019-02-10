

#include <stdio.h>

int main()
{
   int a[10000],i,j,n,k;
  // scanf("%d",&n);
   for(i=0;i<6;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<6;i=i+2){
       k=a[i+1]-a[i];
       printf("%d\n",k);
   }
    return 0;
}
