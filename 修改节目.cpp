#include<stdio.h>
#include<math.h>
#define INF 0xffffffff
int main()
{
//	int answer[500];
	int n,i,j,k,p;
	int a;
	int order[500];
	int last,mlast;
	int flag,fflag;
	int t;
	scanf("%d",&n);
//	t=0;
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
				fflag=flag;
			}
		}
		printf("%d %d\n",mlast,fflag);
//		answer[i*2]=fflag;
//		answer[i*2+1]=mlast;
    }
//    for(i=0;i<2*n;i++)
//    {
//    	if(i%2==0&&i!=0)
//          printf("\n");
//       printf("%d ",answer[i]);
//    }
	return 0;
}
