#include<stdio.h>
#include<string.h>
int main()
{
	int len,n,i,k,head,tail;
	char s[1000];
	scanf("%d",&n);
	getchar();
	for(k=0;k<n;k++)
	{
		gets(s);
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
