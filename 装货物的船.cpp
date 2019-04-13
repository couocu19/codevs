#include<stdio.h>
#include<stdlib.h>
int comp(const void *x,const void *y)
{
	return ((*(int*)x)-(*(int*)y));
}
int main()
{
	int k,m,n,i;
	int sum,t;
	int a[100];
	scanf("%d",&k);
	while(k--)
	{
		sum=0;
		t=0;  //这两个条件要写在循环之内！！！ 
		scanf("%d%d",&m,&n);
		for(i=0;i<n;i++)
		  scanf("%d",&a[i]);
		qsort(a,n,sizeof(a[0]),comp);
		for(i=0;i<n;i++)
		{
		   if(sum+a[i]<=m)
		   {
		  	  sum+=a[i];
		  	  t++;
		   }
		}
		printf("%d\n",t);
	}
	return 0;
}
