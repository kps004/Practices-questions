/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{

char n[10000];
int i,m,j,k=0,l;
scanf("%[^\n]",n);
for(l=0;n[l]!='\0';l++);
m=l/2;
for(i=0,j=l-1;(i<m)&&(j>=m);i++,j--)
{
    if(n[i]!=n[j])
    {
      k=2;
    }
}
if(k==2)
{
    printf("no");
}
else
{
    printf("yes");
}
    return 0;
}
