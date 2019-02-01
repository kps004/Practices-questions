/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char n[10000];
    int i,l,k;
    gets(n);
    scanf("%d",&k);
    for(l=0;n[l]!='\0';l++);
    for(i=0;i<k;i++)
    {
        printf("%c",n[i]);
    }
    return 0;
}
