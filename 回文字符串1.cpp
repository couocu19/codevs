#include<stdio.h>
#include<string.h>
char a[1000];
int check(int l,int r)  //�ж�һ���ַ����ǲ��ǻ����ַ����ĺ��� 
{
	for(;l<r;l++,r--)
	{
		if(a[l]!=a[r])
		  return 1;
	}
	return 0;
}
int main()
{
	int flag,n,i,len;
	scanf("%s",a+1);
	n=strlen(a+1);
	for(len=n;len;len--)
	{
		flag=1;
		for(i=1;i+len-1<=n;i++)
		{
		   if(check(i,i+len-1))
		   {
		   	  flag=0;
		   	  break;
		   }
	    }
	    if(!flag)
	      break;
	}
	printf("%d\n",len);
	return 0;
}
