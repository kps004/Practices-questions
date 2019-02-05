/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,n,a,b;
    scanf("%d %d %d",&a,&b,&n);
    for(i=a;i<b;i++)
    {
        if(n==i)
        {
            printf("yes");
            break;
        }
    }
    if(i==b)
    {
        printf("no");
    }

    return 0;
}
