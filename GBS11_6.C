/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[20],i,n,k,j,p;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
  
    
        for(j=0,i=0;(j<n)&&(i<=k);j++)
        {
            if(a[j]%2==1)
            {
                 p=j;
                i++;
                if(a[j]==a[j+1])
                {
                  j++;
                }
            
            }
        }
      
        printf(" %d",a[p]);

    return 0;
}
