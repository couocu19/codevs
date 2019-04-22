#include<stdio.h>
#include<math.h>
int longg(int x)
{
	int l=0; 
	while(x>0)
	{
		x/=10;
		l++;
	}
	return l;
}
int main()
{
	int t,m,n,j,len;
	int i,sum,flag;
	scanf("%d%d",&m,&n);
	t=0;
	for(i=m;i<=n;i++)
	{
		sum=0;
		len=longg(i);
		for(j=0;j<len;j++)
		{
			flag=pow(10,j);
			m=(i/flag)%10;
			sum+=pow(m,len);
		}
		if(sum==i)
		{
		  printf("%d\n",i);
		  t++;
	    }
	}
	if(t==0)
	  printf("No solution£¡\n");
	return 0;
}
