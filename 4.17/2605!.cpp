#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,i,a,x=0;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>a;
        x=x^a;   //�����������Ƚ�����ת��Ϊ�����ƣ���ͬΪ0����ͬΪ1 
    }
    cout << x ;
    return 0;
}
