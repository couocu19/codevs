#include<stdio.h>
#include<math.h>
#define INF 0xffffff
int main()
{
	int n,i,j,k,p,a;
	int order[50001];
	int last,mlast;
	int flag,fflag;
	int t[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		for(j=0;j<a;j++)
		{
		  scanf("%d",&order[j]);
	    }
	    mlast=INF;
		for(k=0;k<a;k++)
		{
			last=0;
			flag=k;
			for(p=0;p<a;p++)
			{
				last+=fabs(order[k]-order[p]);
			}
			if(last<mlast)
			{
				mlast=last;
				fflag=order[flag];
			}
			if(last==mlast)
			{
				if(order[flag]<fflag)
				   fflag=order[flag];
			}
		}
		printf("%d %d\n",fflag,mlast);
     }
	return 0;
}
