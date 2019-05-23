#include<stdio.h>
int main()
{
	int flag[200]={0};
	int money[6]={100,50,20,10,5,1};
	int i,rest,t,p;
	int a,b;
	scanf("%d",&a);
    scanf("%d",&b);
    rest=a-b;
    t=a-b;
    p=a-b;
    printf("%d\n",p);
    for(i=0;i<6;i++)
    {
    	if(rest>=money[i])
    	{
    		while(rest>=money[i])
    		{
    			rest-=money[i];
    			flag[money[i]]++;
			}
		}
	}
	for(i=0;i<6;i++)
	{
		if(flag[money[i]])
		{
		  t-=money[i]*flag[money[i]];
		  printf("%d*%d",money[i],flag[money[i]]);
		  if(t)
		    printf("+");
		}
	}
	printf("=%d\n",p);
	return 0;
}
