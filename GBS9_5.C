
#include <stdio.h>

int main()
{
    char n[10000];
    int k=1,i,l;
    scanf("%[^\n]",n);
    for(i=0;n[i]!='\0';i++);
    for(l=0;l<i;l++)
    {
        if(l%2==1)
        {
            printf("%c",n[l]);
        }
    }
    printf("   ");
    for(l=0;l<i;l++)
    {
        if(l%2==0)
        {
            printf("%c",n[l]);
        }
    }
    
    return 0;
}
