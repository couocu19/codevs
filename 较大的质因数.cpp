#include<stdio.h>
int main()
{
	int n;  //默认n由两个质数相乘可得 
	int i;
	scanf("%d",&n);
	i=2;
	while(n>1)
	{
		if(n%i==0)
		{
			n/=i;
			break;
		}
		else
		  i++;
	}
	printf("%d\n",n);
    return 0;
}
