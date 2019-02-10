

#include <stdio.h>

int main()
{
    int n,t=1,r;
    scanf("%d",&n);
    while(n)
    {
        t=t*(n%10);
        n=n/10;
    
    }
    printf("%d",t);
    return 0;
}
