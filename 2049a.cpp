#include<stdio.h>
int sum=0,n;
void DFS(int x,int rest) //x������һ���м�ȥ������rest����ʣ�µ��� 
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
