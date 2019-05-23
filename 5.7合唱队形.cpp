#include<stdio.h>
int main()
{
	int n;
	int num[100];
	int i,j;
	int flag[100];
	int flagg[100];
	int lmax=-1,smax=-1,max=-1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
		flag[i]=1;
		flagg[i]=1;
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
		  if(num[j]<num[i] && flag[j]>=flag[i])
		     flag[i]=flag[j]+1;
		if(flag[i]>lmax)
		   lmax=flag[i];
	}
	
	for(i=n-1;i>=0;i--)
	  {
	  	for(j=n-1;j>i;j--)
	  	  if(num[j]<num[i] && flagg[j]>=flagg[i])
	  	     flagg[i]=flagg[j]+1;
	  	if(flagg[i]>smax)
	  	  smax=flagg[i];
	  }
	for(i=0;i<n;i++)
	  {
	  	if((flag[i]+flagg[i]-1)>max)
	  	  max=flag[i]+flagg[i]-1;
	  }
	printf("%d\n%d\n%d\n",n-max,lmax,smax);
	return 0;
}
