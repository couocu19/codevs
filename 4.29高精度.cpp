#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
	int len,len1,len2; 
	char s1[1000],s2[1000];
	int i,j,k;
	int  a[1000],b[1000],c[1000]={0};
	scanf("%s",s1);
	scanf("%s",s2);
	len1=strlen(s1);
	len2=strlen(s2);
	len=max(len1,len2);
	j=0;
	k=0;
	for(i=len1-1;i>=0;i--)
	  a[j++]=s1[i]-'0';
	for(i=len2-1;i>=0;i--)
	  b[k++]=s2[i]-'0';
	for(i=0;i<len;i++)
	{
		c[i]+=a[i]+b[i];
		c[i+1]=c[i]/10;
		c[i]=c[i]%10;
	}
	if(c[len]!=0)
	  printf("%d",c[len]);
	for(i=len-1;i>=0;i--)
	  printf("%d",c[i]);
	printf("\n");
	return 0;
}
