#include<stdio.h>
#include<stdlib.h>
typedef struct student{
	double GPT;
	double st;
	double GPA;
}coucou;
int comp(const void *x,const void *y)
{
//	if(((coucou*)x)->GPA != ((coucou*)y)->GPA)
	   return (((coucou*)y)->GPA - ((coucou*)x)->GPA);
//	else
//	   return (((coucou*)y)->GPT - ((coucou*)x)->GPT);
}
int main()
{
	coucou st[100];
	int n,k,i;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
	    scanf("%lf%lf",&st[i].GPT,&st[i].st);
	    st[i].GPA=st[i].GPT/st[i].st;
    }
    qsort(st,100,sizeof(st[0]),comp);
    for(i=0;i<n;i++)
     printf("%.2f ",st[i].GPA);
    printf("\n");
    printf("%.2lf\n",st[n-k].GPA);
    return 0;
}
