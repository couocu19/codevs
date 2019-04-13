#include<stdio.h>
#include<math.h>

int main()
{
	int least;
	int n,i,last,a,b;
	int num[5000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	   scanf("%d",&num[i]);
	least=0xffffff;;
	a=b=0;
	for(i=0;i<n;i++)
	{
	   last=fabs(num[i]-num[i+1]);
	   if(last<least)
	      {
	      	least=last;
	      	a=num[i];
	      	b=num[i+1];
		  }
	}
	printf("%d %d\n",a,b);
	return 0;
	
}
