#include<bits/stdc++.h>
#define INT 0xffffff
using namespace std;
int main()
{
	int n,len,minlen,i,j,k,t,m,p,l;
	char s[50][10000];
	char flag[1000];
	scanf("%d",&n);
	minlen=INT;
	for(i=0;i<n;i++)
	{
		scanf("%s",s[i]);
		len=strlen(s[i]);
		if(len<minlen)
		  minlen=len;
	}
	if(n==1)
	{
	   printf("%s\n",s[0]);
	   return 0;
	}
    for(i=minlen;i>0;i--)
    {
		for(j=0;j<(strlen(s[0])-i);j++)
		{
			t=1;
			p=0;
			for(l=0;l<1000;l++)
			  flag[l]=0;//每次进循环时一定记得要赋初值！！ 
			for(k=j;k<(j+i);k++)
			  flag[p++]=s[0][k];
			for(m=1;m<n;m++)
			  if(strstr(s[m],flag)==NULL)
			    t=0;
			if(t)
			{
			  printf("%s\n",flag);
			  return 0;
		    }
		} 
	} 
} 
