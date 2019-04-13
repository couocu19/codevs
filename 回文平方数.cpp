#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int hui(char s[5000])
{
	int l,r;
	int len=strlen(s);
	for(l=0,r=len-1;s[l]!='\0';l++,r--)
	{
		if(s[l]!=s[r])
		{
		   return 0;
		   break;
	    }
	}
	return 1;
	
}
int main()
{
	char s[5000];
	int n;
	int i;
	scanf("%d",&n);
	for(i=1;i<=300;i++)
	{
		itoa(i*i,s,n);
		if(hui(s)==1)
		printf("%d %s\n",i,s);
	}
	return 0;
}

