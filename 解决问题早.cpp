#include<stdio.h>
int main()
{
	int m,i,j,t,sum=0;
	int a[3];
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		t=0;//t的值要放在循环内部 
		for(j=0;j<3;j++)
		{
		  scanf("%d",&a[j]);
		  t+=a[j];
	    }
	    if(t>=2)
	      sum+=1;
	    else
	      sum+=0;
	}
	printf("%d\n",sum);
	return 0;
}
