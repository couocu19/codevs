#include<stdio.h>
int main()
{
	int num[6];
	int equ=0,ris=0,dec=0;
	int i;
	for(i=1;i<=6;i++)
	  scanf("%d",&num[i]);
    for(i=2;i<=6;i++)
	{
		if(num[i]>num[i-1])
		  ris++;
		else if(num[i]==num[i-1])
		  equ++;
		else if(num[i]<num[i+1])
		  dec++;
	}	
	if(ris==5)
	  printf("递增！\n");
	else if(dec==5)
	  printf("递减！\n");
	else if(equ==5)
	  printf("相等！\n");
	else
	  printf("什么都不是！\n");
	return 0;
}
