#include<stdio.h>
int main()
{
	int n,i,s=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	 s*=i;
	 printf("%d\n",s);
	 return 0;
}
