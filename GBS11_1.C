

#include <stdio.h>

int main()
{
    char n[100];
    int i,j,k;
    gets(n);
    scanf("%d",&j);
    for(k=0;n[k]!='\0';k++);
    j=k-j;
for(i=k;i>j-1;i--)
{
    
printf("%c",n[i]);
}
return 0;
}
