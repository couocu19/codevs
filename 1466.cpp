#include<stdio.h>
int main()
{
	int year;
	scanf("%d",&year);
	if(year%400==0)
	  printf("366\n");
	else
	  printf("365\n");
	return 0;
}
