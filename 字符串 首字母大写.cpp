#include<stdio.h>
#include<string.h>
int main()
{
	int i,len,j;
	char s[1000];
	while(gets(s))
	{
		for(i=0;i<strlen(s);i++)
		{
			if(i==0)
			  s[i]-=32;
			else
			{
				if(s[i]==' '&&s[i+1]!=' ')
				   s[i+1]-=32;
			}
		}
		printf("%s\n",s);
	}
	return 0;
}
