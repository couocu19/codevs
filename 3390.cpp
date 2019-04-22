#include<stdio.h>
int main()
{
	int a;
	int s=0;
	while(a!=-1)
	{
		scanf("%d",&a);
		if(a==-1)
		  s+=0;
		else
		  s+=a;
	}
	printf("%d\n",s);
	return 0;
}
