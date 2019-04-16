#include<stdio.h>
#include<string.h>
int main()
{
	char s[10000];
	char s1[10000];
	gets(s);
	gets(s1);
	int a;
	a=strcspn(s,s1);
	printf("%d\n",a);
	return 0;
}

