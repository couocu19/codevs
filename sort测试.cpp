#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int num[10];
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	  scanf("%d",&num[i]);
	sort(num+1,num+n+1);
    for(i=0;i<n;i++)
      printf("%d ",num[i]);
    printf("\n");
    return 0;
}
