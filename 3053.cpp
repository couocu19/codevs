#include<stdio.h>
#include<math.h>
int main()
{
	int sum=0;
	int n,i;
	int m[100];
	int num[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	  scanf("%d",&num[i]);
	for(i=0;i<n;i++)
	  scanf("%d",&m[i]);
	for(i=0;i<n;i++)
	  sum+=pow(num[i],m[i]);
	printf("%d\n",sum);
    return 0;
}
