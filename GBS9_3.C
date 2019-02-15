
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
