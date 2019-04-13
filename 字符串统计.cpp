#include<stdio.h>
int main()
{
	int n,i;
	int s=0; 
	char ch;
	scanf("%d",&n);
	ch=getchar();
	for(i=0;i<n;i++)
	{
		s=0;
		do
		{
		  scanf("%c",&ch);
		  if(ch>='0'&&ch<='9')
		    s++;
	    }while(ch!='\n');
		printf("%d\n",s);	
	}
}
