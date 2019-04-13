#include<stdio.h>
#include<string.h> //注意不能定义重名的变量呀！！ 
int main()
{
	int n,i,len,m;
	char s[1000];
	int a[3];
	scanf("%d",&n);
	while(n--)
	{
		scanf("%s",s);
		len=strlen(s);
		if(len<=10)
		   printf("%s\n",s);
		else
		{
			m=len-2;
		    a[0]=s[0];
		    a[1]=m;
		    a[2]=s[m+1];
		    printf("%c%d%c\n",a[0],a[1],a[2]);
     	}
	}
	return 0;
}
