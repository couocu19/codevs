#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	int num[200005];
	int i,flag=0,t,s;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	  scanf("%d",&num[i]);
	sort(num,num+n);
	while(flag<n)
	{
		s=num[flag];
		t=0;
		while(s==num[flag])
		  {
		  	flag++;
		  	t++;
		  }
		printf("%d %d\n",num[flag-1],t);
	}
	return 0;
}
