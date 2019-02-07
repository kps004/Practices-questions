/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char n[500];
    int i,j,k;
    scanf("%[^\n]",n);
  // printf("\n");
  for(i=0;n[i]!='\0';i++)
  {
      if(n[i]!=';')
      {
          printf("%c",n[i]);
      }
  }
   
    return 0;
}
