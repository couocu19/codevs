#include<stdio.h>
int main()
{
	 int i,j,k;
	 int money[12];
	 int remain[20];
	 int t=0;
	 int sum;
	 for(i=0;i<12;i++)
	    scanf("%d",&money[i]);
     for(i=0;i<12;i++)
	 {
	 	if(i==0)
	 	   remain[i]=300-money[i];
	 	else
	 	{
	 	   remain[i]=300-money[i]+remain[i-1];
           while(remain[i]>=100)
           {
              remain[i]-=100;
              t+=100;
           }
           if(remain[i]<0)
           {
              printf("%d\n",-1*(i+1));
              break;
		   }
	    }
	 }	   
	 if(i==12)
	 { 
	    sum=remain[11]+t*1.2;
	    printf("%d\n",sum);
	 }
	 return 0;
}
