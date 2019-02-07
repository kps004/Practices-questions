/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int a,b,i,p,g;
   scanf("%d %d",&a,&b);
   if(a>b)
   {
       p=b;
   }
   else
   {
       p=a;
    }
    
   for(i=p;i>0;i--)
   {
       if((a%i==0)&&(b%i==0))
       {
           g=i;
           break;
       }
   }
  printf("%d",g);
    return 0;
}
