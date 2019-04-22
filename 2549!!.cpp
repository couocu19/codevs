#include<stdio.h>
#define MAXN 51
//int s[MAXN],n;
int main()
{
	int s[MAXN],n;
	int i,j;
	s[0]=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	  for(j=i;j<=n;j++)
	     s[j]+=s[j-i];
	printf("%d\n",s[n]);
	return 0;
}
