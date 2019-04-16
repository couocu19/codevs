#include<stdio.h>
#include<algorithm>
using namespace std;
int comp(double a,double b)
{
	return a>b;
}
int main()
{
	double GPT,st;
	double GPA[100002];
	int n,k,i;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%lf%lf",&GPT,&st);
		GPA[i]=GPT/st; 
	}
	sort(GPA,GPA+n,comp);
	for(i=0;i<n;i++)
	  printf("%.2lf ",GPA[i]);
	printf("\n");
	  printf("%.2lf\n",GPA[k-1]);
	return 0;
}
