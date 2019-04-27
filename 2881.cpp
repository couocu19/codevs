#include<stdio.h>
int main()
{
	int t,L1;
	int L,v1,v2,v3;
	scanf("%d%d%d%d",&L,&v1,&v2,&v3);
	t=L/(v1+v2);
	L1=t*v3;
	printf("%d\n",L1);
	return 0;
}
