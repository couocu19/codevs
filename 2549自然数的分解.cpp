/*
��һ������ǩ�е�DP��.
һ�뵽���������뵽��������������
��Ȼj�ķ�����������j-i�ķ�����ת�ƶ���.
          ��s[j]+=s[j-i].
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
