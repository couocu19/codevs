#include<stdio.h>
int year(int y)
{
	if(y%4==0&&y%100!=0||y%100==0&&y%400==0)
	  return 1;
	else
	  return 0;
}
int main()
{
	int yea,mon;
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d%d",&yea,&mon);
	if(year(yea)==1)
	  a[1]=29;
	printf("%d\n",a[mon-1]);
	return 0;
}
