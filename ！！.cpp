#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
typedef int Datatype;
typedef struct Node
{
	Datatype data;
	struct Node *next;
}Node,*Linklist;

Node *Create_Tail()
{
	Node *L;
	Node *pNew,*r;
	int x;
	L=(Node*)malloc(sizeof(Node));
	L->next=NULL;
	r=L;
	scanf("%d",&x);
	while(x!=-1)
	{
		pNew=(Node*)malloc(sizeof(Node));
		pNew->data=x;
		//pNew->next=r->next;
		r->next=pNew;
		r=pNew;
		scanf("%d",&x);
	}
	r->next=NULL;
	return L;
}

Node *Create_Head()
{
	Node *L;
	Node *pNew;
	int x;
	L=(Node*)malloc(sizeof(Node));
	L->next=NULL;
	scanf("%d",&x);
	while(x!=-1)
	{
		pNew=(Node*)malloc(sizeof(Node));
		pNew->data=x;
		pNew->next=L->next;
		L->next=pNew;
		scanf("%d",&x);
	}
	return L;
}
//头插法应用
void RevLink(Linklist L)
{
	Node *p=L->next;
	Node *q;
	L->next=NULL;
	while(p)
	{
		q=p->next;
		p->next=L->next;//关键代码
		L->next=p;//关键代码
		p=q;
	}
}

//尾插法的应用
Node *MergeLinkList(Node *LA,Node *LB)
{
	Node *pa,*pb,*r;
	Node *LC;
	pa=LA->next;
	pb=LB->next;
	LC=LA;
	LC->next=NULL;
	r=LC;
	while(pa&&pb)
	{
		if(pa->data<=pb->data)
		{
			r->next=pa;
			r=pa;
			pa=pa->next;
		}
		else
		{
			r->next=pb;
			r=pb;
			pb=pb->next;
		}
	}
	if(pa) 
		r->next=pa;
	else
		r->next=pb;
	free(LB);
	return(LC);
}
void Output(Node *L)
{
	Node *p;
	p=L->next;
	while(p)
	{
		printf("%d ",p->data);
		p=p->next;
	}
}
int main(void)
{
	Node *pt1,*pt2;
	printf("开始建立单链表pt1: \n");
	pt1=Create_Tail();
	Output(pt1);
	printf("\n开始建立单链表pt2: \n");
	pt2=Create_Tail();
	Output(pt2);
	printf("\n合并单链表: \n");
	MergeLinkList(pt1,pt2);
	Output(pt1);
	//RevLink(pt);
	//printf("\n");
	//Output(pt);
	return 0;
}
