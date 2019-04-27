#include<stdio.h>
int main()
{
	int n;
	int i;
	long int x,j,s;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		s=0;
		scanf("%ld",&x);
		for(j=1;j<=x;j++)
		  if(x%j==0)
		    s+=j;
		printf("%ld\n",s);
	}
	return 0;
}
