#include<stdio.h>
void main()
{
    char n[1000];
    int i,j,p,l;
    gets(n);
    for(l=0;n[l]!='\0';l++);
    for(i=0;i<l;i++)
    {
        if((n[i]>=48)&&(n[i]<=57))
        {
            printf("%c",n[i]);
        }
    }
    
}
