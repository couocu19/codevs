#include<stdio.h>
int count=0;
void DFS(int sum,int value,int n)
{
	int i; 
	if(sum==n)
	{
	   count++;
	   return;
    }
    for(i=1;i<=n;i++)
    {
      if((sum+i)>n)
        break;  //ºÙ÷¶¥¶¿Ì 
      if(value<=i)
        DFS(sum+i,i,n);
    }
 } 
 int main()
 {
 	int n;
 	scanf("%d",&n);
 	DFS(0,1,n);
 	printf("%d\n",count);
 	return 0;
 }
