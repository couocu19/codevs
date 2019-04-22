#include<stdio.h>
int year(int y)
{
	if(y%4==0&&y%400!=0||y%400==0)
	  return 366;
	else
	  return 365;
}
int main()
{
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int n,week,temp,flag,i,j;
	int yea=0;
	int weekend[8]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		if(year(1900+i)==366)
		  a[1]=29;
		else
		  a[1]=28;
		week=(i-1)+((i-1)/4)-((i-1)/100)+((i-1)/400)+1;
		for(j=0;j<12;j++)
		{
			week+=a[j];
			temp=week%7;
			flag=13+temp-1;
			flag%=7;
			weekend[flag]++;
		}
	}
	for(i=0;i<7;i++)
	  printf("%d ",weekend[i]);
	printf("\n");
	return 0;
}
