#include<stdio.h>
int main()
{
	int t,n;
	scanf("%d",&n);
	t=0;
	while(n>0)
	{
		n/=10;
		t++;
	}
	printf("%d\n",t);
	return 0;
}
