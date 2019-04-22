#include<stdio.h>
int sum=0,n;
void DFS(int x,int rest) //x代表上一次中减去的数，rest代表剩下的数 
{
	int i;
	if(rest==0)
	{
		sum++;
		return ;
	}
	for(i=x;i<=rest;i++)
       DFS(i,rest-i);
}
int main()
{
	scanf("%d",&n);
	DFS(1,n);
	printf("%d\n",sum);
	return 0;
}
