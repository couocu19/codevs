#include<stdio.h>
#define MAX 65535
int main()
{
	long int n,i;
	int num[50000];
	int flag[MAX]={0};
	scanf("%ld",&n);
	for(i=0;i<n;i++)
	{
	  scanf("%d",&num[i]);
	  flag[num[i]]++;
    }
    for(i=0;i<MAX;i++)
      if(flag[i]!=0&&flag[i]%2==1)
      {
         printf("%ld\n",i);
         break;
      }
    return 0;
}
