#include<stdio.h>
#include<string.h>
int main()
{
	int t,num[26]={1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};
	char s[100];
	int len,i;
	gets(s);
	t=0;
	len=strlen(s);
	for(i=0;i<len;i++)
	{
		if(s[i]==' ')
		    t+=1;
		else
		  t+=num[s[i]-'a']; //设置一个整形数组存储序号 
	}
	printf("%d\n",t);
	return 0; 
}
