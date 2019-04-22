#include<stdio.h>
int main()
{
	long long int s;
	long long int a,b;
	char ch;
	scanf("%lld %lld",&a,&b);
	getchar();
	getchar();
	scanf("%c",&ch);
	
	switch(ch)
	{
		case '+': s=a+b;break;
		case '-': s=a-b;break;
		case '*': s=a*b;break;
		case '/': s=a/b;break;
	 }
	 printf("s=%lld",s);
	 printf("%lld\n",s);
	return 0;
}
