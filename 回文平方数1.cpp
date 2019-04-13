#include <iostream>
#include <cmath> 
using namespace std;
void B10(int b, int i, int t)
{
	int a[10000];
	int c[10000];
	int top=-1;
	int top1=-1;
	int flag=1;
	int j;
	while (i%b != i)
	{
		a[++top]=i%b;
		i = floor(i/b);
	}
	a[++top]=i%b;
	while (t%b != t)
	{
		c[++top1]=t%b;
		t = floor(t/b);
	}
	c[++top1]=t%b;
	for (j=0; j <= floor(top/2); j++)
		if (a[j] != a[top-j])
		{
			flag=0;
			break;
		}
	if (flag == 1)
	{
		for (j=top1; j >= 0; j--)
			cout<<c[j];
		cout<<" ";
		for (j=top; j >= 0; j--)
			cout<<a[j];
		cout<<endl;
	}	
}
void B20(int b, int i, int t)
{
	char s[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','H','I','J','K'};
	char a[10000];
	char c[10000];
	int top=-1;
	int top1=-1;
	int flag=1;
	int j;
 
 
	while (i%b != i)
	{
		a[++top]=s[i%b];
		i = floor(i/b);
	}
	a[++top]=s[i%b];
	while (t%b != t)
	{
		c[++top1]=s[t%b];
		t = floor(t/b);
	}
	c[++top1]=s[t%b];
	for (j=0; j <= floor(top/2); j++)
		if (a[j] != a[top-j])
		{
			flag=0;
			break;
		}
	if (flag == 1)
	{
		for (j=top1; j >= 0; j--)
			cout<<c[j];
		cout<<" ";
		for (j=top; j >= 0; j--)
			cout<<a[j];
		cout<<endl;
	}	
}
int main()
{
	int i;
	int b;
	cin>>b;
	if (b <= 10)
	{
		for (i=1; i <= 300; i++)
			B10(b, i*i, i);
	}
	else
	{
		for (i=1; i <= 300; i++)
			B20(b, i*i, i);
	}
	return 0;
}

