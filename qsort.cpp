#include<stdio.h>
#include<stdlib.h>
int comp(const void *x,const void *y)
{
	return ((*(int*)x)-(*(int*)y));
}
int main()
{
	int a,b,c,i;
	int s[4];
	while(scanf("%d%d%d",&a,&b,&c)!=EOF)
	{
		s[0]=a+b+c;
		s[1]=2*(a+b);
		s[2]=2*(a+c);
		s[3]=2*(b+c);
		qsort(s,sizeof(int),4,comp);
//		for(i=0;i<4;i++)
		  printf("%d\n",s[0]);
//        printf("\n");
	}
	return 0;
}
