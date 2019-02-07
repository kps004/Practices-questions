#include<stdio.h>
void main()
{
 char n[1000];
 int i,j,k,l,p;
 gets(n);
 for(l=0;n[l]!='\0';l++);
 for(i=65;i<=122;i++)
 {    
     for(j=0,k=l;j<l;j++)
     {
         if(n[j]==i)
         {
             printf("%c",n[j]);
         }
     }
 }

}
