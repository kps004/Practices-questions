/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,r,p,t,i=3,l;
    scanf("%d",&n);
    while(n)
    {
        t=n;
        l=-1;
        p=1;
        while(t)
        {
            t=t/10;
            l++;
        }
        
        while(l)
        {
            p=p*10;
            l--;
        }
        r=n/p;
        n=n%p;
        
     if(i%2==0)
     {
         printf("%d",r);
     }
     else
     {
         printf(" ");
     }
      i++; 
    }

    return 0;
}
