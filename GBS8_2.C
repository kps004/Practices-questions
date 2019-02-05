/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char n[1000];
    int i,k=0,l;
    scanf("%[^\n]",n);
    for(l=0;n[l]!='\0';l++);
    for(i=0;i<l;i++)
    {
    switch(n[i])
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
          case 'u':
            case 'A':
              case 'E':
                case 'I':
                  case 'O':
                    case 'U':   printf("yes");
                                  k=2;
                                  break;
        
        
        }
    }
    if(k==0)
    {
        printf("no");
    }

    return 0;
}
