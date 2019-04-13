#include <stdio.h>
#include <stdlib.h>
int main()
{
	char c;
	int letters=0;
	int space=0;
	int digit=0;
	int other=0;
	printf ("请输入一行字符：>");
	while ((c=getchar())!='\n')
	{
		if ((c >= 'a' && c <= 'z')||(c >= 'A' && c <= 'Z'))
		{
			letters++;
		}
		else if (' ' == c)
		{
			space++;
		}
		else if (c >= '0' && c <= '9')
		{
			digit++;
		}
		else
		{
			other++;
		}
	}
	printf ("字母的个数：>%d\n空格的个数：>%d\
			\n数字的个数：>%d\n其他字符的个数：>%d\n",\
		letters,space,digit,other);
	system ("pause");
	return 0;
}
