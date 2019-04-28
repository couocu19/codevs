#include<stdio.h>
#include<math.h>
int count(int n)
{
	int t=1;
	while(n/=10)
	 t++;
	return t;
}
int main()
{
	int s=0;
	int a,b,flag,c,m;
	scanf("%d",&a);
	flag=fabs(a);
	b=fabs(a);
	c=count(b);
	if(b%10==0)
	{
	 c-=1;
	 b/=10;
    }
	while(c--)
	{
		m=pow(10,c);
		s+=(b%10)*m;
		b/=10;
	}
	if(flag==a)
	  printf("%d\n",s);
	else
	  printf("%d\n",(-1*s));
	return 0;
}
