#include<stdio.h>
int sum=0;
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
	int n;
	scanf("%d",&n);
	DFS(1,n);
	printf("%d\n",sum);
    return 0;
}
