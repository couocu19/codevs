#include<stdio.h>
#define MAX 1500000
int flag[MAX]={0};
long int num[20005];
long int i;
int main()
{
    long int n;
//	long int i;
//	long long int flag[1500000]={0};
//	long int num[20005];
	scanf("%ld",&n);
	for(i=0;i<n;i++)
	{
	  scanf("%ld",&num[i]);
	  flag[num[i]]++;
    }
    for(i=0;i<150000000;i++)
    {
    	if(flag[i]!=0)
    	  printf("%ld %d\n",i,flag[i]);
	}
	return 0;
} 
