#include<stdio.h>
#include<string.h>
int main()
{
	int flag; 
	char ch;
	char s[1000];
	int i,j,k;
	int len;
	int m,n,p;
	scanf("%d%d%d",&m,&n,&p);
	scanf("%s",s);
	len=strlen(s);
	for(i=0;i<len;i++)
	{
		if(s[i]!='-')
		   printf("%c",s[i]);
		else if(s[i]=='-')
		{
			if((s[i+1]-s[i-1])==1)
			   continue;
		    else if(s[i-1]==s[i+1] || s[i-1]>s[i+1] ||s[i+1]-s[i-1]>=40)
		       printf("%c",s[i]);
			else
			{
//			ch=s[i-1] + 1;
			flag=(s[i+1]-s[i-1]-1)*n;
			if(m==1)
			{
				flag=flag/n;
				if(p==1)
				{
				  ch=s[i-1] + 1;
				  while(ch<s[i+1])
				  {
				  	for(j=0;j<n;j++)
				  	  printf("%c",ch);
				  	ch=ch+1;
				  }
			    }
//				else if(p==2)
//				{
//				  ch=s[i+1]-1;
//				  while(ch>s[i-1])
//				  {
//				  	for(j=0;j<n;j++)
//				  	  printf("%c",ch);
//				  	ch=ch-1;
//				  }
//				}
//				if(p==1)
//				{
//				  while(ch<s[i+1])
//				  {
//				  	for(j=0;j<n;j++)
//				  	  printf("%c",ch);
//				  	ch=ch+1;
//				  }
//			    }
			}
			else if(m==2)
			{
				flag=flag/n;
				if(s[i-1]>=97&&s[i-1]<=122)
				{
//				   ch=s[i-1]+1-32;
				   if(p==2)
				   {
				   	  ch=s[i+1]-1-32;
				      while(ch>(s[i-1]-32))
				      { 
				  	    for(j=0;j<n;j++)
				  	      printf("%c",ch);
				  	    ch=ch-1;
				      }
				   }
				   if(p==1)
				   {
				     ch=s[i-1]+1-32;
				     while(ch<(s[i+1]-32))
				     {
				  	   for(k=0;k<n;k++)
				  	    printf("%c",ch);
				  	  ch=ch+1;
				     }
				   }
			    }
			    else
			    {
			       if(p==2)
				   {
				   	ch=s[i+1]-1;
				    while(ch>s[i-1])
				    {
				  	  for(j=0;j<n;j++)
				  	    printf("%c",ch);
				  	  ch=ch-1;
				    }
				  }
				  if(p==1)
			        while(ch<s[i+1])
				    {
				  	  for(j=0;j<n;j++)
				  	    printf("%c",ch);
				  	  ch=ch+1;
				    }
			    }
			}
			else if(m==3)
			   while(flag--)
			     printf("*");
		 }
	 }
	}
	printf("\n");
	return 0;
} 
