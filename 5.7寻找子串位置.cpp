#include<stdio.h>
#include<string.h>
int main()
{
	int len,lens;
	char s[100],s1[50];
	int i,j,k;
	scanf("%s",s);
	scanf("%s",s1);
	len = strlen(s);
	lens = strlen(s1);
	for(i = 0;i<len;i++)
	{
		if(s[i]==s1[0])
		{
			k=i;
			for(j=0;j<lens;j++)
			  if(s[k++] != s1[j])
			     break;
			if(j==lens)
			{
			  printf("%d\n",i+1);
			  break;
			} 
		}
	}
	
} 
