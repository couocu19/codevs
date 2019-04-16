#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	int n,i,sum,m,t;
	char s[100];
	scanf("%d",&n);
	scanf("%s",s);
	t=n-1;
	sum=0;
	for(i=0;i<n;i++)
	  {
	  	 s[i]=s[i]-48;
	  	 m=pow(2,(t--));
	  	 sum+=m*s[i];
	  }
	printf("%d\n",sum);
	return 0;
}

