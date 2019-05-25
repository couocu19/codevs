#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n;
	int i,j,k,flag,t=0,p;
	char s[10][50];
	char s1[10][50];
	scanf("%d%d",&m,&n);
	for (i=0;i<=m;i++)
	{
		scanf("%s",s[i]);
		for (j=0;j<(m-n);j++)
		{
			flag = j;
			for (k=j;k<n;k++)
			{
				if (s[i][k+1] <= s[i][k])
				  break;
			}
			if ((k-j) == n)
			{
			   s1[t++] = s[i].substr(flag,n);
			}
		}	  	
	}
	for (i=0;i<t;i++)
	{
	 printf("%s\n",s1[i]);
    }
	return 0;
}
