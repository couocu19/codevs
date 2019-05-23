#include<stdio.h>
#include<string.h>
int com(char s[1000])
{
	char s1[1000];
	int l=0;
	int len,i,j;
	len=strlen(s);
	for(j=len-1;j>=0;j--)
	   s1[i++]=s[j];
	for(i=0;i<len;i++)
	{
		for(j=0;j<len;j++)
	      if(s[i]==s1[j])
	      {
	      	  flag=j;
	      	  for(k=j;k<len;k++)
	      	  {
	      	    if(s[k]!=s1[k])
	      	      break;
	      	    else
	      	      flag++;
	          }
		  }
    }
    return flag;
}
int main()
{
	char s[1000];
	int sum,len;
	int i,j,k;
	gets(s);
	len=strlen(s);
	sum=len-com(s);
	printf("%d\n",sum);
	return 0;
}
