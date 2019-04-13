#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
const int maxn = 1000 + 10;
double a[maxn];
const double eps = 1e-10;
int comp(const void *x,const void *y)
{
	return ((*(double*)y)-(*(double*)x));
}
int main()
{
    int T,n,i,ans;
    double sum;
    scanf("%d",&T);
    while(T--)
	{
        scanf("%d",&n);
        for (i = 0;i<n;++i)
		   scanf("%lf",&a[i]);
		qsort(a,n,sizeof(a[0]),comp);
		ans=0;
		sum=0;
        for (i=0;i<n;++i)
		{
            if (a[i]<1+eps||sum>40-eps)
			  break;
            sum+=4*sqrt(a[i]*a[i]-1);
            ++ans;
        }
        printf("%d\n",ans);
    }
    return 0;
}

