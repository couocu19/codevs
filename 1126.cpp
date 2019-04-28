#include<stdio.h>
int count(int x)
{
	int sum=0,t;
	t=x;
	while(t>0)
	{
	  if(t%10==2&&t!=0)
	    sum++;
      t/=10;
    }
    return sum;
}
int main()
{
	int a,b,t;
	int i;
	int s=0;
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		if(count(i)>0)
		{
		  s+=count(i);
	    }
	}
	printf("%d\n",s);
	return 0;
}
