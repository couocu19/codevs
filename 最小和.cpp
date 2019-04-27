#include<stdio.h>
#include<algorithm>
#include<string.h>
#define INT 0xffffff
using namespace std;
char s[10000];
int count(int strat,int end)
{
	int j=1,sum=0,i;
	for(i=end-1;i>=strat-1;i--)
	{
	  sum+=(s[i]-'0')*j;
	  j*=10;
    }
	  return sum;
}
int main()
{
	int i,j,k,n,len;
	int dp[101][101];
	scanf("%s",s);
	scanf("%d",&n);
	len=strlen(s);
	for(i=0;i<101;i++)
	{
		for(j=0;j<101;j++)
		  dp[i][j]=INT;
	}
	for(i=1;i<=len;i++)
	  dp[i][0]=count(1,i);
	for(i=2;i<=len;i++)
	  {
	  	for(j=1;j<=min(i-1,n-1);j++)
	  	  {
	  	  	for(k=j;k<i;k++)
	  	  	  dp[i][j]=min(dp[i][j],dp[k][j-1]+count(k+1,i));
		  }
	  }
	  printf("%d\n",dp[len][n-1]);
	  return 0;
}
