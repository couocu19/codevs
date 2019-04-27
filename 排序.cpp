#include<cstdio>
#include<algorithm>
#include<iostream>
using namespace std;
int a[1000010];
int main()
{
  int n,i,js=1,tot=1;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
  sort(a+1,a+n+1);
  while(tot<=n)
  {
    int s=a[tot],k;
    k=tot;
    while(s==a[tot])
      tot++;
    printf("%d ",a[tot-1]);
    printf("%d\n",tot-k);
  }
  return 0;
}
