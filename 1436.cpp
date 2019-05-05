#include<stdio.h>
int sushu(int a)
{
	int i;
	for(i=2;i<a;i++)
	  if(a%i==0)
	    {
	    	return 0;
	    	break;
		}
	if(i==a)
	   return 1;
}
int main()
{
	int m,n;
	int i,j,k;
	int sum=0;
	scanf("%d%d",&m,&n);
	for(i=2;i<m&&(i+n)<m;i++)
	{
		if(sushu(i)&&sushu(i+n))
		{
		   printf("%d %d\n",i,i+n);
		   sum++;
	    }
	}
	printf("Total Is:%d\n",sum);
	return 0;
}
