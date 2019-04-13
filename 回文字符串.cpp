#include<stdio.h>
#include<string.h>
char a[110]; //全局变量的定义 
inline bool check(int l,int r) //内联函数，用来提高函数的执行效率！ 
{
    for (;l<r;++l,--r) 
    {
	   if(a[l]!=a[r]) 
	   return 1;  //如果不是回文字符串则返回1. 
    }
    return 0; //如果是回文字符串返回0. 
}
int main()
{
   	int flag,n,len,i;
    scanf("%s",a+1);
    n=strlen(a+1);
    for (len=n;len;--len)
	{
	    flag=1;
        for(i=1;i+len-1<=n;++i)
		{
            if(check(i,i+len-1))  //如果不是回文字符串则跳出循环 
			{
			 flag=0;
			 break;
			}
        }
		if (!flag) //如果不是回文字符串跳出大循环，输出长度 
		break;
    }
	printf("%d\n",len);
    return 0;
}

