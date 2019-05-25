#include<stdio.h>
#include<string.h>
int main()
{
	int m,n;
	int i,j,k,flag,t=0,p;
	char s[50];
	char s1[20][50] = {0};//养成好习惯，数组提前初始化为0. 
	scanf("%d%d",&m,&n);
	for (i=0;i<m;i++)
	{
		scanf("%s",s);
		for (j=0;j<=(m-n);j++)
		{
			flag = j;
			for (k=j;k<n+j-1;k++)  
			//注意这里k值得循环范围，注意有k+1，所以k<(n+j-1) 
			{
				if (s[k+1] <= s[k])
				  break;
			}
			k++; //由于上面k的范围所以k的值要再自增一次 
			if ((k-j) == n)
			{
				for (p=0;p<n;p++)
				{
					s1[t][p] = s[flag++]; 
				}
				t++;
			}
		}	  	
	}
	
	for (i=0;i<t;i++)
	{
	 printf("%s\n",s1[i]);
    }
	return 0;
}

