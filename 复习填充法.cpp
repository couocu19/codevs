#include<stdio.h>
int main()
{
	int n,i,j;
	int first=1000000,last=0;
	int a,b;
	int flag[100002];
    int have=0,no=0;
	int shave=0,sno=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a,&b);
		for(j=a;j<b;j++)
		flag[j]=1;
		if(a<first)
		first=a;
		if(b>last)
		last=b;
	}
	for(i=first;i<=last;i++)
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
			have=shave;
			shave=0,sno++;
		}
	}
	printf("%d %d\n",have,no);
	return 0;
}
