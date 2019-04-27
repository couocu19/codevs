#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std; 
char s[1000];
int count(int strat,int end)
{
	int sum=0,j=1;
	int i;
	for(i=end-1;i>=strat-1;i--)
	{
	  sum+=(s[i]-'0')*j;
	  j*=10;
    }
    return sum;
}
int main()
{
	int dp[101][101];
	int i,j,k;
	int m,n;
	scanf("%d%d",&m,&n);
	scanf("%s",s);
	for(i=1;i<=m;i++)
	  dp[i][0]=count(1,i);
	for(i=2;i<=m;i++)
	{
		for(j=1;j<=min(i-1,n);j++)
		{
			for(k=j;k<i;k++)
			  dp[i][j]=max(dp[i][j],dp[k][j-1]*count(k+1,i));
		}
	}
	printf("%d\n",dp[m][n]);
	return 0;
}
