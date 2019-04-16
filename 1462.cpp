#include<stdio.h>
#include<math.h>
int sushu(int a)
{
	int i;
	if(a==1)
	  return 0;
	if(a==2)
	  return 1;
	for(i=2;i<=sqrt(a);i++)
       if(a%i==0)
          return 0;    
	return 1;
}
int main()
{
    int t,sum=0;
	int a,b,i;
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		t=a;
		a=b;
		b=t;
	}
	for(i=a;i<=b;i++)
	  if(sushu(i))
	    sum+=i;
	printf("%d\n",sum);
	return 0;
}
