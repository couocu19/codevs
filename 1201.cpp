#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int n,i;
	long long int a[200];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	  scanf("%lld",&a[i]);
	sort(a,a+n);
	printf("%d %d\n",a[0],a[n-1]);
	return 0;
}
