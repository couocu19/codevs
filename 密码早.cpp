#include<stdio.h>
int main()
{
	int m,n,a[50],b[50],i,j;
	int h[20]={0},t=0;
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	  scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	  scanf("%d",&b[i]);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		  {
		  	if(a[i]==b[j])
		  	{
		  		h[t++]=a[i];
			}
		  }
	}
	for(i=0;i<t;i++)
	   printf("%d ",h[i]);
	printf("\n");
	return 0;
}
