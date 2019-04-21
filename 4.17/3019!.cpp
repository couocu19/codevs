#include<stdio.h>
int main()
{
	unsigned long long int num[1000]={0,1,0};  //longlong整型数存不下 
	int n,i;
	scanf("%d",&n);
		for(i=3;i<=n;i++)
		   num[i]=num[i-1]+num[i-2]+num[i-3]+1;
		printf("%llu\n",num[n-1]);
	return 0;
}
