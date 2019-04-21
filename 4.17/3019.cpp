#include<stdio.h>
int digui(int x)
{
	long long int f;
	if(x==1||x==3)
	  return 0;
	else if(x==2)
	  return 1;
	else
	  f=digui(x-1)+digui(x-2)+digui(x-3)+1;
	  return f;
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%lld\n",digui(n));
	return 0;
}
