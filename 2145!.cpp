#include<stdio.h>
#include<string.h>
int main()
{
	long long int len;
	char s[1000000];
	gets(s);
	len=strlen(s);
	if((s[len-1]-'0')%2)
	  printf("ji\n");
	else
	  printf("ou\n");
	return 0;
}
