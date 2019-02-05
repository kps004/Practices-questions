/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float n,k;
    int i;
    scanf("%f",&n);
    i=n;
    k=i;
    k=n-k;
    if(k>=0.5)
    {
        printf("%d",i+1);
    }
    else
    {
        printf("%d",i);
    }
    

    return 0;
}
