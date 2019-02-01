/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
long int i,l,k;
    scanf("%d",&k);
    while(k)
    {
        i=k%10;
        k=k/10;
        if((i==0)||(i==1))
        {
            
        }
        else
        {
            printf("no");
            break;
        }
    }
    if(k==0)
    {
        printf("yes");
    }
    
    return 0;
}
