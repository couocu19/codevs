#include<stdio.h>
#include<algorithm>
using namespace std;
int comp(int a,int b)
{
	return a>b;
}
int main()
{
	int n,sum=0;
	int num[100];
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	  scanf("%d",&num[i]);
	  sum+=num[i];
    }
	sort(num,num+n,comp);
	printf("%d\n",sum);
	printf("%d\n%d\n",num[0],num[n-1]);
	if(num[0]==num[n-1])
	  printf("%d\n",num[0]);
	else
	{
	  for(i=0;i<n;i++)
	  {
//		printf("%d\n",num[i]);
		if(num[i+1]==num[i])
		  i++;
		printf("%d\n",num[i]);
	  }
    }
	return 0;
}
