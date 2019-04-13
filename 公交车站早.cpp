#include<stdio.h>
#include<stdlib.h>
int comp(const void *x,const void *y)
{
	return ((*(int*)y)-(*(int*)x));
}
int main()
{
	int n,a,b,i,t=0;
	int m[50]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a,&b);
		t=t-a+b;  /////!!!!!!
		m[i]=t;
	}
	qsort(m,sizeof(int),n,comp);
	for(i=0;i<n;i++)
	printf("%d\n",m[i]);
	return 0;
 } 
