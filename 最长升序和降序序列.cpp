#include<stdio.h>
#define MIN -1
int main()
{
	int a;
	int m[100],l_max[100],s_max[100];
	int i,j;
	int lmax,smax;
	lmax=smax=MIN;
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		scanf("%d",&m[i]);
		l_max[i]=1;
		s_max[i]=1;
	}
	for(i=0;i<a;i++)
	{
		for(j=0;j<i;j++)
		{
		  if(m[j]>m[i]&&l_max[j]>=l_max[i])
		     l_max[i]=l_max[j]+1;
		 else if(m[j]<m[i]&&s_max[j]>=s_max[i])
		     s_max[i]=s_max[j]+1;
		}
		  if(l_max[i]>lmax)
		     lmax=l_max[i];
		  if(s_max[i]>smax)
		     smax=s_max[i];
	}
	printf("最长升序的序列的长度为：%d\n最长的降序的序列的长度为：%d\n",smax,lmax);
	return 0;
}










