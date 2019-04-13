#include<stdio.h>
int main()
{
	int sum,i,j,n,k;
	int d[50];
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	  scanf("%d",&d[i]);
	i=0;
	j=n-1;
	sum=0;
	while(i<j)  //数组的双向遍历？？ 
	{
		if(d[i]<=k)
		{
		  sum++;
		  i++;
	    }
		else if(d[j]<=k)
		{
		  sum++;
		  j--;
	    }
		else if(d[i]>k&&d[j]>k)
		  break;
	}
	printf("%d\n",sum);
	return 0;
}
