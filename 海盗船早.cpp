#include<stdio.h>
int main()
{
	int a[50];
	int m,k,sum,i,j;
	scanf("%d%d",&m,&k);
	for(i=0;i<m;i++)
	  scanf("%d",&a[i]);
	i=0;
	j=m-1;
	sum=0;
	while(i<j)
	{
		if(a[i]<=k)
		{
			sum++;
			i++;
		}
		else if(a[j]<=k)
		{
			sum++;
			j--; 
		}
		if(a[i]>k&&a[j]>k)
		  break;
	}
	printf("%d\n",sum);
	return 0;
}
