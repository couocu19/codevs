#include<stdio.h>
#include<string.h>
char a[110]; //ȫ�ֱ����Ķ��� 
inline bool check(int l,int r) //����������������ߺ�����ִ��Ч�ʣ� 
{
    for (;l<r;++l,--r) 
    {
	   if(a[l]!=a[r]) 
	   return 1;  //������ǻ����ַ����򷵻�1. 
    }
    return 0; //����ǻ����ַ�������0. 
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
            if(check(i,i+len-1))  //������ǻ����ַ���������ѭ�� 
			{
			 flag=0;
			 break;
			}
        }
		if (!flag) //������ǻ����ַ���������ѭ����������� 
		break;
    }
	printf("%d\n",len);
    return 0;
}

