#include<stdio.h>
int main()
{
	int n;
	int num1,num2,num3;
	int a,b,c,d,e,k;
	scanf("%d",&k);
	for(n=10000;n<=30000;n++)
	{
		a=n%10;
		b=n/10%10;
		c=n/100%10;
		d=n/1000%10;
		e=n/10000;
		num1=a+b*10+c*100;
		num2=b+c*10+d*100;
		num3=c+d*10+e*100;
		if(num1%k==0&&num2%k==0&&num3%k==0)
		   printf("%d\n",n);
	}
	return 0;
}
