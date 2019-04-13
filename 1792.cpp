#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	printf("%d=",n);
	i=2;
	while(n>1)
	{
		if(n%i==0)
		{
			printf("%d",i);
			if((n/=i)>1)
			  printf("*");
		}
		else
		   i++;
	}
	return 0;
 } 
