#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	long int sum=0;
	char s[1000];
	int i,j,k,l;
	int len;
	long int num[1000];
	char s1[1000];
//	scanf("%s",s);
    gets(s);
	len=strlen(s);
	j=0;
	for(i=0;i<len;i++)
	{
		if(s[i]>=48&&s[i]<=57)
	    	num[j++]=s[i]-'0';
	}
//	for(i=0;i<j;i++)
//	  printf("%d",num[i]);
//	printf("\n");
	for(k=0,l=j-1;k<j;k++,l--)
	{
		sum+=num[k]*pow(10,l);
	}
	sum=(sum/10)*5+7;
	printf("%ld\n",sum);
    return 0;
}
