#include<stdio.h>
long int sushu(long int a)
{
	long int i;
	for(i=2;i<a;i++)
       if(a%i==0)
          return 0;
    if(i==a)
        return 1;
}
int main()
{
	long int t,sum=0;
	long int a,b,i;
	scanf("%ld%ld",&a,&b);
	if(a>b)
	{
		t=a;
		a=b;
		b=t;
	}
	for(i=a;i<=b;i++)
	  if(sushu(i)==1)
	    sum+=i;
	printf("%ld\n",sum);
	return 0;
}
