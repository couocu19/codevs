#include<bits/stdc++.h>
using namespace std;
int n,dp[55];
void in()
{scanf("%d",&n);}
void ac()
{
    dp[0]=1;
    for(int i=1;i<=n;++i)
    for(int j=0;j<=n;++j)
    if(dp[j]&&j+i<=n)dp[i+j]+=dp[j];
    printf("%d",dp[n]);
}
int main()
{
    in();ac();
    return 0;
}
