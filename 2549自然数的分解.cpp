/*
又一搜索标签中的DP题.
一想到方案数就想到背包（—ˉ—）
显然j的方案数可以由j-i的方案数转移而来.
          有s[j]+=s[j-i].
*/
#include<iostream>
#include<cstdio>
#define MAXN 51
using namespace std;
int s[MAXN],n;
int main()
{
    s[0]=1;
    cin>>n;
    for(int i=1;i<=n;i++)
      for(int j=i;j<=n;j++)
        s[j]+=s[j-i];
    cout<<s[n];
    return 0;
}
