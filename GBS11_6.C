

#include <stdio.h>

int main()
{
    int a[20],i,n,k,j;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   k--;
    
        for(j=0,i=0;(j<n)&&(i<=k);j++)
        {
            if(a[j]%2==1)
            {
                i++;
            }
        }
        j--;
        printf(" %d",a[j]);

    return 0;
}
