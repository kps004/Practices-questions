/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int n,m;
   scanf("%d %d",&n,&m);
   n=n-m;
   if(n%2==0)
   {
       printf("Even");
   }
   else
   {
       printf("Odd");
   }

    return 0;
}
