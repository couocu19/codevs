#include<stdio.h>
int main()
{
	int m,n,t=0,i,j;
	int a[50],b[50],h[20];
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	 scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	 scanf("%d",&b[i]);
	for(i=0;i<m;i++)  //两个循环寻找相同的值，这里要注意按哪个数组的顺序输出！ 
	{
		for(j=0;j<n;j++)
		{
			if(a[i]==b[j])
			{
				h[t++]=a[i];
			}
		}
	}
	for(i=0;i<t;i++)
	  printf("%d ",h[i]);
	printf("\n");
	return 0;
}
