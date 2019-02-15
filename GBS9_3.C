/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   
   long int a,b;
   char s;
   scanf("%ld",&a);
scanf("\n");
scanf("%c",&s);
scanf("\n");
scanf("%ld",&b);
printf("%d%c%d",a,s,b);
if(s=='/')
{
    a=a/b;
    printf("%ld",a);
}
else

    if(s=='%')
    {
        a=a%b;
        printf("%ld",a);
    }

    return 0;
}
