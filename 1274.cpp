#include<stdio.h>
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	if(y<=x)
	  printf("Congratulations, you are within the speed limit\n");
	else
	{
		if((y-x)<=20)
		  printf("You are speeding and your fine is $ 100\n");
		else if((y-x)>20&&(y-x)<=30)
		  printf("You are speeding and your fine is $ 270\n");
		else if((y-x)>30)
		 printf("You are speeding and your fine is $ 500\n");
	}
	return 0;
}
