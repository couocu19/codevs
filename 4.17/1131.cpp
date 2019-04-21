#include<stdio.h>
#include<string.h>
#define N 2000000
int main()
{
	char s1[50],s2[N];
	int m[10002];
	int i,j,k,p,len1,t=0;
	long int len2;
	gets(s1);
	len1=strlen(s1);
	gets(s2);
	len2=strlen(s2);
	for(i=0;i<len1;i++)
		if(s1[i]>='A'&&s1[i]<='Z')
		    s1[i]+=32;
	for(i=0;i<len2;i++)
	    if(s2[i]>='A'&&s2[i]<='Z')
	        s2[i]+=32;
//	printf("%s\n%s\n",s1,s2);
	if(strstr(s2,s1)==NULL)
	{
	  printf("-1\n");
	  return 0;
    }
	else
	  {
	  	p=0;
		for(i=0;i<len2;i++)
		{
			if(s2[i]==s1[0])
			{
				k=i;
			    for(j=0;j<len1;j++)
				{
					if(s2[k++]!=s1[j])
					  break;
				}
				if(j==len1&&s2[k]==' '&&s2[k-len1-1]==' ')
				{
					m[p++]=k-len1;
					t++;
					i=k;
				}	
			}
		 } 
		 if(t==0)
		   printf("-1\n");
		 else
		   printf("%d %d\n",t,m[0]);
	  }
}
