#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;
struct Milking
{
	int beg,end;
};
Milking milking[5001];
int nmilking;
int cmp(const void *ma,const void *mb)
{
	Milking *a,*b;
	a = (Milking *)ma;
	b = (Milking *)mb;
 
	if(a->beg > b->beg)
		return 1;
	if(b->beg < b->beg)
		return -1;
	return 0;
} 
 
int main()
{
	int i,j,t,tmilk,tnomilk;
	Milking cur;
	//input sort
	scanf("%d",&nmilking);
	for(i = 0;i < nmilking;i++)
		scanf("%d %d",&milking[i].beg,&milking[i].end);
	qsort(milking,nmilking,sizeof(Milking),cmp);
	//done
	tmilk = 0;
	tnomilk = 0;  //³õÊ¼»¯ 
	cur = milking[0];// 
	for(i=1;i<nmilking;i++)
	{
		if(milking[i].beg > cur.end)
		{
			t=milking[i].beg - cur.end;
			tnomilk = t > tnomilk ? t : tnomilk;
			t = cur.end - cur.beg;
			tmilk = t > tmilk ? t : tmilk;
			cur = milking[i];
		}else
		{
			if(milking[i].end > cur.end)
				cur.end = milking[i].end;
		}
	}	
	t = cur.end - cur.beg;
	tmilk = t > tmilk ? t : tmilk;
	printf("%d %d\n",tmilk,tnomilk);
	return 0;
}

