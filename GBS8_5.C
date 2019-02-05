/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
char n[1000];
int i,j,k,l;
scanf("%[^\n]",n);
for(l=0;n[l]!='\0';l++);
k=l/2;
if(l%2==0)
{
   
    n[k]='*';
    
    n[k+1]='*';
}
else
{   
    n[k]='*';
}
printf("%s",n);
    return 0;
}
