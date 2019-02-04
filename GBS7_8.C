/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=n;i>=0;i++)
    {
        if(i%10==0)
        {
            printf("%d",i);
            break;
        }
    }

    return 0;
}
