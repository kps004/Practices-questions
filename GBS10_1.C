


#include <stdio.h>

int main()
{

int l,b,h,a;
scanf("%d %d %d",&l,&b,&h);
a=2*l*b+2*b*h+2*h*l;
l=l*b*h;
printf("%d %d",a,l);

    return 0;
}
