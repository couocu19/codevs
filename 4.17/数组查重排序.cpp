#include<stdio.h>
int main()
{
	int n,t=0;
	int num,flag[50002]={0};
	int i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num);
		flag[num]=1;
	}
	for(i=0;i<50002;i++)
	  if(flag[i])
	     t++;
	for(i=0;i<t;i++)
	  if(flag[i])
	   printf("%d ",i);
	return 0;
}
