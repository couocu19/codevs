#include<stdio.h>
int n,sum;
void DFS(int x,int rest)
{
	int i;
	if(rest==0)
	{
	   sum++;
	   return;
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
