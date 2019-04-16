#include<stdio.h>
int main()
{
	int n,k,a,s,t,i;
	scanf("%d%d",&n,&k);
	a=0;
    s=0;
	while(1)
	{   t=a;
		for(i=0;i<k&&s<n;i++)
		{
		   s+=t;
		   t++;
		   printf("%d \n",s);
	    }
	    a++;
	    if(s==n)
		     break;
	}
	for(i=0;i<k;i++)
	{
	  printf("%d ",a+i);
    }
    return 0;
}
