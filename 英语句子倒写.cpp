#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	char ch;
	int i,j;
	int len;
    gets(s);
	len=strlen(s);
	for(i=len-1;i>=0;i--)
	{
		if(s[i]==' ')
		{
		     for(j=i+1;s[j]!=' '&&s[j]!='\0';j++)
		        printf("%c",s[j]);
		     if(i!=0)
	         printf(" ");
	    }
	    if(i==0)
	    {
	       while(s[i]!=' ')
	       {
	         printf("%c",s[i]);
	         i++;
	       }
	       break;
	    }
	}
	printf("\n");
	return 0;
}
