#include<stdio.h>
int main()
{
	int flag[200]={0};
	int money[6]={100,50,20,10,5,1};
	int a,b,c,t,f;
	int i;
	scanf("%d%d",&a,&b);
	c=a-b;
	t=a-b;
	f=a-b;
	for(i=0;i<6;i++)
	{
		if(c>=money[i])
		{
			while(c>=money[i])
			{
				c-=money[i];
				flag[money[i]]++;
			}
		}
	}
	printf("%d\n",t);
	for(i=0;i<6;i++)
	{
		if(flag[money[i]])
        {
        	f-=money[i]*flag[money[i]];
		     printf("%d*%d",money[i],flag[money[i]]);
		    if(f)
		     printf("+");
     	}
	}
	printf("=%d\n",t);
	return 0;
 } 
