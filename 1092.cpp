#include<stdio.h>
int main()
{
	int max = 0;
	int t;
	int week[7];
	int i,j,k;
	int a,b;
	for (i=0;i<7;i++)
	{
		scanf("%d%d",&a,&b);
		week[i] = a+b;
		if (week[i]>=8)
		{
			if (week[i]>max)
			{
			   max = week[i];
			   t = i+1;
		    }
		}
	}
	if (max)
	   printf("%d\n",t);
	else
	   printf("0\n");
	return 0;
}
