#include<stdio.h>

int Nth_of_AP(int a, int d, int N) 
{ 
	int i,j;
	
	i=(N/2)*(2*a+(N-1)*d);
	
	return i; 
	
} 


int main() 
{ 
	int a; 
	int d; 
	
	int N;
	int i;
	scanf("%d %d %d",&a,&d,&N);
	i=Nth_of_AP(a,d,N);
	printf("%d",i); 

	return 0; 
} 
