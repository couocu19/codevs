#include<stdio.h>
#include<math.h>
int main()
{
	double a,b;
	scanf("%lf%lf",&a,&b);
	if(fabs(a-b)<(1e-8))
	  printf("yes\n");
	else
	  printf("no\n");
	return 0;
}
