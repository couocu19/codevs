#include<stdio.h>
#include<math.h>
#define INF 0xffffff
int main()
{
	int n,a,p;
	int ord[100];
	int i,j,k,last,mlast,flag,fflag;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		for(j=0;j<a;j++)
		{
			scanf("%d",&ord[j]);
		}
		mlast=INF;
		for(k=0;k<a;k++)
		{
		    flag=k;
		    for(p=0;p<a;p++)
		    {
		    	last+=fabs(ord[k]-ord[p]);
			}
			if(last<mlast)
			{
			   mlast=last;
			   fflag=flag;
			}
		}
		printf("%d %d\n",fflag,mlast);
		return 0;
	}
 } 
