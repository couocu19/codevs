#include<stdio.h>
#include<math.h>
int about(int n)
{
	while(n>0)
	{
		if(n%10==3||n%10==5)
		{
			break; 
		} 
		else
		{
			n/=10;
		}
	}
	if(n==0)
	  return 1;
	else if(n>0)
	  return 0;
}
int main()
{
	int sum=0;
	int x;
	int i;
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		if(i%3!=0&&about(i)==1&&i%5!=0)
		  sum+=i*i;
	}
	printf("%d\n",sum);
	return 0;
}
