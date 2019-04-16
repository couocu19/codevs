#include<stdio.h>
int main()
{
	int n,flag[10002]={0};
	int x,i,sum;
	sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		if(flag[x])
		 continue;//t跳过本次循环的余下语句
		flag[x]++;
		sum++; 
	}
	printf("%d\n",sum);
	for(i=0;i<10002;i++)//这里省去了排序的部分 
	if(flag[i])
	 printf("%d ",i);
	return 0;
 } 
