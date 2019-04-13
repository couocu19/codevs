#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
	long int a,b,c,s[4];
	while(EOF!=scanf("%ld %ld %ld",&a,&b,&c))
	{
		s[0]=a+b+c;
		s[1]=2*(a+b);
		s[2]=2*(a+c);
		s[3]=2*(b+c);
		sort(s,s+4);
		printf("%ld\n",s[0]);
	}
	return 0;
}
