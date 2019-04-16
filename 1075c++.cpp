#include<iostream>
using namespace std;
int main()
{
     int n,x;
     cin>>n;
      int sum=0,tong[10002]={0};
     for(int i=1;i<=n;i++)
      {
        cin>>x;
       if(tong[x])
       continue;
       tong[x]++;
       sum++;
      } //用来判断一个数组中是否有重复 
      cout<<sum<<endl;
      for(int i=1;i<=1000;i++)
      if(tong[i])
        cout<<i<<' ';
        return 0;
} 
