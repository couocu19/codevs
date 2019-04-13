#include<stdio.h>
int main()
{
	int a,i;
	scanf("%d",&a);
	 i=2;
	while(a>1)
	{
		if(a%i==0)
		{
		  a/=i;
		  break;
	    }
		else
		  i++;
	}
	printf("%d",a);
	return 0;
 } 
