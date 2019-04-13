#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int comp(const void *x,const void *y)
{
	return (*(int*)y-*(int*)x);
}
int main()
{
	char s[1000000];
	int a[5000];
	int flag,i,j,len,t=0,max=-1,p=0;
	gets(s);
	len=strlen(s);
	flag=0;
	for(i=0;i<len;i++)
	{
		if(s[i]=='K')
		{
		  t++;
		  flag=t;
	    }
	    else if(s[i]=='D')
	    {
	    	t=0;
		}
		if(max<flag)
		   max=flag;
	}
	if(max>=10)
	   printf("You are Beyond Godlike (Somebody kill him!)\n");
	else if(max==9)
	   printf("You are Godlike\n");
	else if(max==8)
	   printf("You have a M-m-m-m....Monster Kill\n");
	else if(max==7)
	   printf("You are Wicked Sick\n");
	else if(max==6)
	   printf("You are Unstoppable\n");
	else if(max==5)
	   printf("You have a Mega-Kill\n");
	else if(max==4)
	   printf("You are Dominating\n");
	else if(max==3)
	   printf("You are on a Killing Spree\n");
	else if(max==0||max==1||max==2)
	   printf("You are a Foolish Man\n");
	return 0;
}





//0/1/2 - You are a Foolish Man
//3 - You are on a Killing Spree 
//4 - You are Dominating 
//5 - You have a Mega-Kill 
//6 - You are Unstoppable
//7 - You are Wicked Sick
//8 - You have a M-m-m-m....Monster Kill 
//9 - You are Godlike 
