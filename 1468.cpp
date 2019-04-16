#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c;
	double p;
	double s;
	scanf("%lf%lf%lf",&a,&b,&c);
	if(a+b>c&&a+c>b&&b+c>a)
	{
		p=(a+b+c)/2;
		s=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("%.2lf\n",s);
	}
	else
	   printf("No answer\n");
	return 0;	
}
