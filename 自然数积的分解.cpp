#include<stdio.h>
#include<math.h>
int sum=1;
void DFS(int x,int rest)
{
	int i;
    for(i=x;i<sqrt(rest);i++)
	  if(rest%i==0)
	     sum++,DFS(i,rest/i);
} 
int main()
{
	int n;
	scanf("%d",&n);
	DFS(2,n);
	printf("%d\n",sum);
	return 0;
}
 
