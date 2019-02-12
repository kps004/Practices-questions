#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  int i,j,t,p,q1=0,q2=0,q3=0;
  if(n>=k)
  {
      p=n;
  }
  else
     
     {
         p=k;
     } 
q1=0;
q2=0;
q3=0;

  for(i=p;i>0;i--)
  {
      for(j=i+1;j>0;j--)
      {
          t=i&j;
          if(t<k)
          
        {
            if(q1<t-1)
            {
                q1=t;
            }
            //  printf("%d\n",t);
              
          }
      }
     // printf("\n");
  }
  for(i=p;i>0;i--)
  {
      for(j=i+1;j>0;j--)
      {
           t=i|j;
          if(t<k)
          {  if(q2<t)
            {
              q2=t;
               }
             /// printf("%d\n",t);
          }
      }
      
  }
  //printf("\n");
  for(i=p;i>0;i--)
  {
      for(j=i+1;j>0;j--)
      {     t=i^j;
          if(t<k)
          {  
              if(q3<t)
              {
                  q3=t;
              }
            //  printf("%d\n",t);
          }
      }
      
  }
  
  printf("%d\n%d\n%d",q1,q2,q3);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
