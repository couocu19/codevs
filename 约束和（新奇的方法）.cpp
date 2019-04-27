#include<stdio.h>
#define MAX 5000000
int a[MAX+1]; 
int main()
{
	int i,j;
	int n,x;
	for(i=1;i<=MAX;i++)
	  for(j=i;j<=MAX;j+=i)
	     a[j]+=i;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&x);
		printf("%d\n",a[x]);
	}
	return 0;
}
