#include<stdio.h>
int main()
{
	int x;
	double sum=0,i;
	scanf("%d",&x);
	i=1.0;
	do
	{
		sum+=1/i;
		i++;
		if(i>5000000) 
		{
			printf("Error! \n");
			break;
		}
	}while(sum<x);
	if(i<=5000000)
	  printf("%.0lf\n",i-1);
	return 0;
}
