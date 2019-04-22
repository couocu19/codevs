#include<stdio.h>
#include<string.h>
int main()
{
	int numm[256]={0},nums[256]={0};
	int i,j,k,m;
	char s1[10000];
	char s[50][10000];
	scanf("%s",s);
	for(i=0;i<256;i++)
	  numm[s1[i]]++;
	j=0;
	t=0;
    while(scanf("%s",s[j++])!='\n')
    {
    	len1=strlen(s[j]);
    	for(p=0;p<len1;p++)
    	  nums(s[j][p])++;
    	for(k=0;k<len1;k++)
    	{
    	  if(numm[s[j][k]]==0)
    	     {
    	     	t+=0;
    	     	break;
			 }
		}
		if(k==len1)
		{
			for(m=0;m<len1;m++)
			{
				
			}
		}     
	 }
	return 0;
}
