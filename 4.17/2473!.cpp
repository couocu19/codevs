#include<stdio.h>
#include<string.h>
int main()
{
	int len,i;
	char s[10000];
	gets(s);
	len=strlen(s);
	if((s[len-1]-'0')%2==0)
	  printf("even\n");
	else
	  printf("odd\n");
	return 0;
}
