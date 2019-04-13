#include<cstdio>
#include<cstring>  //暴力算法？？？？ 
#include<algorithm>
#include<cmath>
using namespace std;
const int maxn = 1000 + 10;
double a[maxn];
const double eps = 1e-10;
bool cmp(double a,double b)
{   //从大到小的顺序 
    return a > b;
}
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
	{
        int n;
        scanf("%d",&n);
        for (int i = 0; i < n; ++i)
		scanf("%lf",&a[i]);
        sort(a,a+n,cmp);
        int ans = 0;
        double sum = 0;
        for (int i = 0; i < n; ++i)
		{
            if (a[i] < 1 + eps || sum > 40 - eps)
			  break;
            sum += 4*sqrt(a[i]*a[i]-1);
              ++ans;
        }
        printf("%d\n",ans);
    }
    return 0;
}

