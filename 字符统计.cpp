#include <stdio.h>
#include <stdlib.h>
int main()
{
	char c;
	int letters=0;
	int space=0;
	int digit=0;
	int other=0;
	printf ("������һ���ַ���>");
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
	printf ("��ĸ�ĸ�����>%d\n�ո�ĸ�����>%d\
			\n���ֵĸ�����>%d\n�����ַ��ĸ�����>%d\n",\
		letters,space,digit,other);
	system ("pause");
	return 0;
}
