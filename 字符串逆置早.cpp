#include<stdio.h>
#include<string.h>
int main()
{
	int m,head,tail,i,len,n,k;
	char s[1000];
    scanf("%d",&m);
    getchar();  ///��ѭ��֮��ӣ� 
	for(k=0;k<m;k++)
	{
		gets(s);  //���ﲻ����scanf 
		len=strlen(s);
		for(i=0;i<len;i++)
		{
			head=i;
			while(s[i]!=' '&&s[i]!='\0')
			  i++;
			for(tail=i-1;tail>=head;tail--)
			  printf("%c",s[tail]);
			if(s[i]==' ')
			  printf(" ");
		}
		printf("\n");
	}
	return 0;
}
