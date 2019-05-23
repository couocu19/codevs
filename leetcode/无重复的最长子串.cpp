#include<stdio.h>
#include<string.h>
int main()
{
	int max = -1;
	int len;
	char s[1000];
	int i,j,k;
	gets(s);
	len = strlen(s);
	for (i=0;i<len;i++)
	{
		for (j=i+1;j<len;j++)
		{
			if (s[j] == s[i])
			{
				k = j-i;
				break;
			}
		}
		if (k>max)
		max = k;
	}
	printf("%d\n",max);
	return 0;
}
