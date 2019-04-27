#include<stdio.h>
#define MAX 0xfffffff 
int main()
{
	long int n;
	long long int i;
	int flag[MAX]={0};
	long long int num[200000];
	scanf("%ld",&n);
	for(i=0;i<n;i++)
	{
	  scanf("%lld",&num[i]);
	  flag[num[i]]++;
    }
    for(i=0;i<MAX;i++)
    {
    	if(flag[i]!=0)
    	  printf("%lld %ld\n",i,flag[i]);
	}
	return 0;
} 
