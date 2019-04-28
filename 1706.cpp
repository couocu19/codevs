#include<stdio.h>
int su(int x)
{
	int i;
	for(i=2;i<x;i++)
	  if(x%i==0)
	    {
	    	break;
		}
	if(i==x)
	  return 0;
	else
	  return 1;
}
int main()
{
	int n,s=0;
	int i;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		if(su(i))
		  s+=i;
	}
	printf("%d\n",s);
	return 0;
}
