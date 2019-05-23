#include<stdio.h>
int main()
{
	int flag[1000001]; 
	int n,first=1000000,last=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int strat,end;
		scanf("%d%d",&strat,&end);
		for(int j= strat;j<end;j++)
		   flag[j]=1;
		if(strat<first)
		  first=strat;
		if(end>last)
		  last=end;
	}
	int shave=0,have=0;
	int sno=0,no=0;
	for(int i=first;i<=last;i++)
	{
		if(flag[i]==1)
		{
			if(sno>no)
			  no=sno;
			sno=0,shave++;
		}
		else
		{
			if(shave>have)
			  have=shave; //have,no分别来保存维持最长时间的值 
			shave=0,sno++;
		}
	}
	printf("%d %d\n",have,no);
	return 0;
}
