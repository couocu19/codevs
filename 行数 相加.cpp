#include<stdio.h>
int main()
{
	int i,j,m,n,a,s;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&m);
		s=0;
		for(j=0;j<m;j++)
		{
		  scanf("%d",&a);
		  s+=a;
	    }
	    printf("%d\n",s);
	    if(i!=n)
		  printf("\n"); 
	}
	return 0;
}
