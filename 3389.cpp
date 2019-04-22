#include<stdio.h>
int main()
{
	int n,i;
	long long int num[1000],s=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	  scanf("%lld",&num[i]);
	  s+=num[i];
    }
	printf("%lld\n",s);
	return 0;
}
