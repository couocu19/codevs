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
	int n;
	int len;
	int i,j,k;
	int dp[101][101];
	scanf("%s",s);
	scanf("%d",&n);
	len=strlen(s);
	for(i=1;i<=len;i++)
	  dp[i][0]=count(1,i);
//	int Min=20000;
	for(int i=2;i<=len;i++)
            for(int j=1;j<i;j++)
        {
            int Min=0;
            for(int k=1;k<=i-j;k++)//i-k>j
            { 
             if(Min>(dp[i-k][j-1]+count(i-k+1,i)))
               Min=dp[i-k][j-1]+count(i-k+1,i);
            }
            dp[i][j]=Min;
        }
    printf("%d\n",dp[len][n-1]);
	return 0;
}
