#include<stdio.h>
#include<math.h>
int sushu(int a)
{
	int i;
	for(i=2;i*i<=a;i++)
	  if(a%i==0)
	    	return 0;
	  return 1;
}
int main()
{
    long int n;
	long int i;
	int sum=1;
	scanf("%ld",&n);
	for(i=3;i<n&&(i+2)<n;i++)
	{
		if(sushu(i)&&sushu(i+2))
		  sum++;
	}
	if(n<3)
	  printf("0\n");
	else 
	  printf("%d\n",sum);
	return 0;
}
