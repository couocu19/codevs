#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int n;
	char s[10000];
	scanf("%d",&n);
	itoa(n,s,16);
	printf("%s\n",s);
	return 0;
}
