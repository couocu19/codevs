#include<stdio.h>
int main()
{
	long int f;
	int n,i;
	int a[100];
	a[0]=a[1]=1;
	scanf("%d",&n);
	if(n==1||n==2)
	  printf("1\n");
	else
	 {
	 	for(i=2;i<n;i++)
	       a[i]=a[i-1]+a[i-2];
	    printf("%d\n",a[n-1]);
	 }
	 return 0;
}
