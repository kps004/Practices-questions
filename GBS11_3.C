
#include <stdio.h>

int main()
{
char n[100000];
int i,j,k;
gets(n);
for(k=0;n[k]!='\0';k++);
for(i=0;i<k;i++)
{
    if(n[i]==' ')
    {
        if((n[i+1]>=97)&&(n[i+1]<=122))
        {
            n[i+1]=n[i+1]-32;
            break;
        }
    }
    else
      {
         if((n[i]>=97)&&(n[i]<=122))
         {
             n[i]=n[i]-32;
             break;
         }
      }
}
printf("\n%s",n);

    return 0;
}
