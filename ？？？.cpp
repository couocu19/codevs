#include<stdio.h>
int main()
{
	int n,lmax,smax,max=-1;
	int num[500];
	int l_max[100],s_max[100];
	int i,j,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	   scanf("%d",&num[i]); 
	   l_max[i]=1;
	   s_max[i]=1;
    }
    for(i=0;i<n;i++)
    {
    	for(j=0;j<i;j++)
    	{
    	   if(num[j]<num[i]&&l_max[j]>=l_max[i])
    	       l_max[i]=l_max[j]+1;
		}
	}
	for(i=n-1;i>=0;i--)
	{
		 for(j=n-1;j>i;j--)
		 {
		   if(num[j]<num[i]&&s_max[j]>=s_max[i])
		      s_max[i]=s_max[j]+1;
		 }
	}
	for(i=0;i<n;i++)
	   if((l_max[i]+s_max[i]-1)>max)
	        max=l_max[i]+s_max[i]-1;
	printf("%d\n",n-max);
	return 0;
}
