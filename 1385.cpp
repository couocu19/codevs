#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int n,i,t,q,j;
	long int begin[5000],end[5000];
	long int have[5000],no[5000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	  scanf("%ld%ld",&begin[i],&end[i]);
	  have[i]=end[i]-begin[i];
    }
    t=n;
    q=0;
    for(i=0;i<n;i++)
    {
    	for(j=i+1;j<n;j++)
    	{
    	  if(begin[j]<=end[i])
    	    have[t++]=end[j]-begin[i];
    	  if(begin[j]>end[i])
    	    no[q++]=begin[j]-end[i];
        }
	}
    sort(have,have+t);
	sort(no,no+q);
//	for(i=0;i<t;i++)
//	  printf("%ld ",have[i]);
//	printf("\n");
//	for(i=0;i<q;i++)
//	  printf("%ld ",no[i]);
//	printf("\n");
	printf("%ld %ld\n",have[t-1],no[0]);
	return 0;		
}
