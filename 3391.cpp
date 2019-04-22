#include<stdio.h>
#include<stdlib.h>
typedef struct stu{
	char name[1000000];
	long long int score;
	int id;
}coucou;
int comp(const void *x,const void *y)
{
	if(((coucou*)y)->score != ((coucou*)x)->score)
	   return (((coucou*)y)->score - ((coucou*)x)->score);
	else
	   return (((coucou*)x)->id - ((coucou*)y)->id);
}
int main()
{
	coucou st[10000];
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%s",st[i].name);
	    scanf("%lld",&st[i].score);
	    st[i].id=i;
	}
	qsort(st,n,sizeof(coucou),comp);
	for(i=0;i<n;i++)
	  printf("%s\n",st[i].name);
	return 0;
}
