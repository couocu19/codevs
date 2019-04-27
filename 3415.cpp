#include<iostream>
#include<cstring>
using namespace std;
int dp[1001][1001];
char s[1000];
int t;
int Count(int start,int End)
{
    int sum=0;
    int j=1;
    for(int i=End-1;i>=start-1;i--)
    {
        sum+=(s[i]-'0')*j;
        j*=10;
    }
    return sum;
}
int main()
{
    while(cin>>s>>t)
    {
        int len=strlen(s);
        for(int i=1;i<=len;i++)
        {
            dp[i][0]=Count(1,i);
        }
        for(int i=2;i<=len;i++)
            for(int j=1;j<i;j++)
        {
            int Min=20000;
            for(int k=1;k<=i-j;k++)//i-k>j
            { 
             if(Min>(dp[i-k][j-1]+Count(i-k+1,i)))
               Min=dp[i-k][j-1]+Count(i-k+1,i);
            }
            dp[i][j]=Min;
        }

        cout<<dp[len][t-1]<<endl;
    }
    return 0;
}


