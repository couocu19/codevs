#include<stdio.h>
int main()
{
	int n,a,i,s;
	while(1) 
	{
		scanf("%d",&n);
		if(n==0)
		break;
		s=0;
		for(i=0;i<n;i++)
		{
		  scanf("%d",&a);
		  s+=a;
	    }
	    printf("%d\n",s);
	}
	return 0;
}
