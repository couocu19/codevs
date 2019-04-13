#include<stdio.h>
int main()
{
	char ch; 
	int n;
	int a,e,i,o,u;
	scanf("%d",&n);
	ch=getchar();
	for(i=0;i<n;i++)
	{
		scanf("%c",&ch);
		a=e=i=o=u=0;
		do
		{
			scanf("%c",&ch);
			if(ch=='a'||ch=='A')
			  a++;
			if(ch=='e'||ch=='E')
			  e++;
			if(ch=='i'||ch=='I')
			  i++;
			if(ch=='o'||ch=='O')
			  o++;
			if(ch=='u'||ch=='U')
			  u++;		
		}while(ch!='\n');
		printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n",a,e,i,o,u);
	}
	return 0;
}
