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
	for(i=0;i<m;i++)  //����ѭ��Ѱ����ͬ��ֵ������Ҫע�ⰴ�ĸ������˳������� 
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
