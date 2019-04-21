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
        x=x^a;   //异或运算符：先将数字转化为二进制，相同为0，不同为1 
    }
    cout << x ;
    return 0;
}
