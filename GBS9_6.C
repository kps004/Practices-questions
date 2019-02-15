#include<stdio.h>

void main()
{    int i,j,l=3,p=3;
    char n[1000],t;
   
    
    gets(n);
    for(l=0;n[l]!='\0';l++);
    
    for(i=0;i<l;i++)
    {   t=n[i];
        for(j=i+1;j<l-1;j++)
        {
            if(t==n[j])
            {
                printf("no");
                break;
                p=0;
            }
            
        }
    }
    if(p==3)
    {
        printf("yes");
    }
    getch();
}
