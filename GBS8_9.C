/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b,c,l,m;
    scanf("%d %d",&a,&b);
    c=a*b;
    l=c%a;
    c=c/a;
    if((a==b)&&(l==0)&&(c%a==0))
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
