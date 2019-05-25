#include<stdio.h>
#include<string.h>
int main()
{
	int m,n;
	int i,j,k,flag,t=0,p;
	char s[50];
	char s1[10][50];
	scanf("%d%d",&m,&n);
	for (i=0;i<m;i++)
	{
		scanf("%s",s);
		for (j=0;j<=(m-n);j++)
		{
			flag = j;
			for (k=0;k<n;k++)
			{
				if (s[k+1+j] <= s[k+j])
				  break;
			}
			if (k == n)
			{
				for (p=0;p<n;p++)
				{
					s1[t++][p] = s[flag++]; 
				}
			}
		}	  	
	}
	
	for (i=0;i<t;i++)
	{
	 printf("%s\n",s1[i]);
    }
	return 0;
}
