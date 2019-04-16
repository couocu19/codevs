#include<stdio.h>
int width[100],depth=0;
int tree[20][2];
int DFS(int node,int floor)
{
	if(floor>depth)
	    depth=floor; //更新深度 
	width[floor]++;  //更新当前层的宽度 
	int lchild=tree[node][0],rchild=tree[node][1];
	if(lchild)
	   DFS(lchild,floor+1);
	if(rchild)
	   DFS(rchild,floor+1);
}
int main()
{
	int i,n;
	int lchild,rchild,max,wid=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d%d",&tree[i][0],&tree[i][1]);
	}
	DFS(1,1);
	for(i=1;i<=20;i++)
	  if(width[i]>wid)
	      wid=width[i];
	printf("%d %d\n",wid,depth);
	return 0;
}

