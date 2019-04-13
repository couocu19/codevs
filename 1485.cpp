#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,len;
	int t=0,b=0;
	char s[1000005];
	gets(s);
	len=strlen(s);
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len&&b==0;j++)
		   if(s[i]==s[j])
		     {
		     	s[i]='0',s[j]='0';
		     	b++;
			 }
			 b=0;
	}
	for(i=0;i<len;i++)
	{
		if(s[i]!='0')
		  t++;
	}
	printf("%d\n",t);
	return 0;
}
