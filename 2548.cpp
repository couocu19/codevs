#include<stdio.h>
#include<math.h>
int n,sum=1;
void DFS(int x,int n)
{
	int i;
	for(i=x;i<=sqrt(n);i++)
	   if(n%i==0)
	      sum++, DFS(i,n/i);	    
}
int main()
{
	scanf("%d",&n);
	DFS(2,n);
	printf("%d\n",sum);
    return 0;
}
