#include<stdio.h>
int main()
{
	int a[3],i,j,t,n,m=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	  {
	  	t=0;
	  	for(j=0;j<3;j++)
	  	{
	  	  scanf("%d",&a[j]);
	  	  t+=a[j];
	    }
	    if(t>=2)
	       m+=1;
	    else
	       m+=0;
	  }
	  printf("%d\n",m);
	  return 0;
 } 
