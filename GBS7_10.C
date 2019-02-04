/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,j,k=0,n;
    scanf("%d",&n);
    for(i=n+1;i>0;i++)
    {
        j=1;
        for(j=1;j<i;)
        {
            j=j*2;
            if(j==i)
            {
                printf("%d",j);
                k=2;
                
            }
            
            
        }
        if(k==2)
        {
            break;
        }
        
    
    }

    return 0;
}
