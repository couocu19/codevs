#include<stdio.h>
#include<math.h>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,flag;
	long int a,b;
	char ch;
	scanf("%d",&n);
	scanf("%ld",&a);
	for(i=0;i<n;i++)
	{
		 cin>>ch>>b;
		   if(ch=='+')
			  a+=b;
		   if(ch=='-')
			  a-=b;
		   if(ch=='*')
			  a*=b;
		   if(ch=='/')
		   {
		   	if(b==0)
		   	  {
		   	  	printf("Error!\n");
		   	  	return 0;
			  }
			else
			  a/=b;
		   }
		   else if(ch=='%')
			  {
			  	if(b==0)
		   	    {
		   	  	   printf("Error!\n");
		   	  	   return 0;
			    }
			  	else
			  	  a%=b;	
			  }
	}
	  printf("%ld\n",a);
	return 0;
}
