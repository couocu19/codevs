#include<stdio.h>
int main()
{
	long int n;
	long int i,j;
	scanf("%ld",&n);
	for(i=2;i<n;i++)
    {
           if(n%i==0)
            {
            	printf("prime\n");
            	break;  
			}
	}	
	   if(i==n)
          printf("composite\n");    
	return 0;
}
