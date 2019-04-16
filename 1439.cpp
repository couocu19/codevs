#include<stdio.h>
int main()
{
	int a,b,t=0;
	int i,j;
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	  {
	  	for(j=2;j<i;j++)
	  	{
	  		if(i%j==0)
	  		  break;
		}
		if(j==i)
		  t++;
	  }
	printf("%d\n",t);
	return 0;
}
