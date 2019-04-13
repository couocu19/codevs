#include<stdio.h>
#define MIN -100000
int main()
{
	int a,i,j,t;
	int l_max[100],s_max[100];
	int lmax,smax;
	int num[100];
	t=0;
	lmax=smax=MIN;
	while(scanf("%d",&a)) //在编译器中不需要加EOF，但AC时必须加！ 
	{
		num[t]=a;
		l_max[t]=1;
		s_max[t]=1;
		t++; 
	}
	for(i=0;i<t;i++)
	{
		for(j=0;j<i;j++)
		  {
		  	if(num[j]>num[i]&&l_max[j]>=l_max[i])
		  	   l_max[i]=l_max[j]+1;
		  	else if(num[j]<num[i]&&s_max[j]>=s_max[i])
			   s_max[i]=s_max[j]+1;
		  }
		  if(lmax<l_max[i])
		    lmax=l_max[i];
		  if(smax<s_max[i])
		    smax=s_max[i];
	}
	printf("%d\n%d\n",lmax,smax); 
	return 0;
}
