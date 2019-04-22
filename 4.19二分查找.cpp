#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int n,m,mid,guess;
	int num[100];
	int low,high,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&num[i]);
    sort(num,num+n);
    printf("请输入一个要查找的数：\n");
    scanf("%d",&m);
    low=0;
    high=n-1;
    while(low<=high)
    {
    	mid=(low+high)/2;
    	guess=num[mid];
    	if(guess==m)
    	{
    	  printf("%d\n",mid);
    	  break;
        }
    	else if(guess<m)
    	  low=mid+1;
    	else if(guess>m)
    	  high=mid-1;
	}
	
	return 0;		
}
