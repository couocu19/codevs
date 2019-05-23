#include<stdio.h>
#include<string.h>
#define MAX 0xffffff
int main()
{
	int n,flagg;
	char s[100][1000];
	int i,j,k,m,t,l;
	char flag[500];
	int len,mlen=MAX;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	  gets(s[i]);
	  len=strlen(s[i]);
	  if(len<mlen)
	     mlen=len;
   }
   if(n==1)
   {
     printf("%s\n",s[0]);
     return 0;
   }
   else
   {
     for(i=mlen;mlen>=0;mlen--)
    {
    	flagg=1;
    	for(l=0;l<500;l++)
    	  	   flag[l]=0;
    	for(j=0;j<=(strlen(s[0])-mlen);j++)
    	  {
    	  	t=0;
    	  	 for(k=j;k<(j+i);k++)
    	  	   flag[t++]=s[0][k];
		  }
		for(m=1;m<n;m++)
		{
			if(strstr(flag,s[m])==NULL)
			   flagg=0;
		}
		if(flagg)
		{
		  printf("%s\n",flag);
		  return 0;
	    } 
     }
   }
}
