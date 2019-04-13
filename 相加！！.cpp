#include<stdio.h>
int main()
{
	int n,a,s,i;
	while(scanf("%d",&n)!=EOF)
	{
		s=0;
		for(i=0;i<n;i++)
		{
		  scanf("%d",&a);
		  s+=a;
	    }
	    printf("%d\n",s);
	}

}
