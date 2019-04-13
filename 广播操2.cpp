#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
int a[41][50001];
int b[50001];
int cmp(const void *a,const void *b)
{
return *(int*)a-*(int*)b;
}
int main()
{
int n,i;
cin>>n;
for( i=1;i<=n;i++)
{
int m;
cin>>m;
for(int j=1;j<=m;j++)
{
cin>>a[i][j];
}
qsort(&a[i][1],m,sizeof(a[1][1]),cmp);
if(m%2!=0)
{
int sum=0;
a[i][0]=a[i][(1+m)/2];
for(int temp,k=1;k<=m;k++)
{
temp=abs(a[i][0]-a[i][k]);
sum+=temp;
}
b[i]=sum;
}
else
{
int sum1=0,sum2=0,temp,k,t1,t2;
t1=a[i][(1+m)/2];
for(k=1;k<=m;k++)
{
temp=abs(t1-a[i][k]);
sum1+=temp;
}
t2=a[i][(1+m)/2+1];
for(k=1;k<=m;k++)
{
temp=abs(t1-a[i][k]);
sum2+=temp;
}
   if(sum1>sum2)
      a[i][0]=t2,b[i]=sum2;
   else if(sum1==sum2)
     if(t1<t2)
       a[i][0]=t1,b[i]=sum1;
     else 
       a[i][0]=t2,b[i]=sum2; 
    else
	   b[i]=sum1,a[i][0]=t1;
}
}
for(i=1;i<=n;i++)
{
cout<<a[i][0]<<" "<<b[i]<<endl;
}
return 0;
}

