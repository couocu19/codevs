#include<stdio.h>
#include<stdlib.h>
int comp(const void *a,const void *b)
{
	return (*(int*)a-*(int*)b);
}
int main()
{
	int n,i;
	int a[100000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	  scanf("%d",&a[i]);
	qsort(a,n,sizeof(a[0]),comp);
	for(i=0;i<n;i++)
	  printf("%d ",a[i]);
	printf("\n");
	return 0;
}
