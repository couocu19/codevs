#include<stdio.h>
int gcd(int x,int y)
{
	return x%y ? gcd(y,x%y) : y;
}
int lcm(int x,int y)
{
	return x*y/gcd(x,y);
}
int main()
{
	int n;
	int num[100];
	int i,j,k,min;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	min=num[0];
	for(i=1;i<n;i++)
	{
		min=lcm(min,num[i]);
	}
	printf("%d\n",min);
	return 0;
}
