#include<stdlib.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a,b,c,d;
	int s[4];
	while(scanf("%d%d%d",&a,&b,&c)!=EOF)
	{
		s[0]=a+b+c;
		s[1]=2*(a+b);
		s[2]=2*(a+c);
		s[3]=2*(b+c);
		sort(s,s+4);
		printf("%d\n",s[0]);
	}
	return 0;
}
