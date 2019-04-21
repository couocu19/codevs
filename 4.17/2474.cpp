#include<stdio.h>
#include<math.h>
#define MIN 0xfffffff
int main()
{
	int n,t;
	int num[1000];
	int i,dvalue,min;
	scanf("%d",&n);
	min=MIN;
	for(i=0;i<n;i++)
	  scanf("%d",&num[i]);
	for(i=0;i<n-1;i++)
	  {
	  	 dvalue=fabs(num[i]-num[i+1]);
	  	 if(dvalue<min)
	  	  {
	  	  	min=dvalue;
	  	  	t=i;
		  }
	  }
	  printf("%d %d",num[t],num[t+1]);
	  return 0;
}
