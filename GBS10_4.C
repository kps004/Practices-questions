
#include <stdio.h>

int main()
{
     int a[1000],i,n,k;
     scanf("%d %d",&n,&k);
     for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
     }
for(i=0;i<n;i++)
{
    if(k==a[i])
    {
        printf("%d",a[i]);
    }
}
    return 0;
}
