#include<stdio.h>
#include<string.h>
int main()
{
	int len;
	int i,j,k;
	int m,n;
	char l[50];
	scanf("%d",&m);
	while(m--)
	{
		scanf("%s",l);
//		gets(l);
		scanf("%d",&n);
		len=strlen(l);
		n=n%len;
		for(j=len-n;j<len;j++)
		   printf("%c",l[j]);
		for(k=0;k<len-n;k++)
		   printf("%c",l[k]);
		printf("\n");
	}
	return 0;
}
