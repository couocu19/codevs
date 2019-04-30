#include<stdio.h>
int main()
{
	int n;
	int i;
	scanf("%d",&n);
	printf("%d=",n);
	for(i=2;n>2;)
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
	printf("\n");
	return 0;
}
