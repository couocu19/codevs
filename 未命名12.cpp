#include<stdio.h>
#include<stdlib.h>
typedef int coucou;
typedef struct node{
	coucou data;
	struct node *next;
}*Linklist,Listnode;

Linklist head,head1;
Listnode *p;

Linklist Initlist()
{
	Linklist L;
	L=(Listnode *)malloc(sizeof(Listnde));
	if(L==NULL)
	{
		printf(" ß∞‹£°\n");
		exit(1);
	} 
	L->next=NULL;
	return L;
}

Linklist creatA()
{
	Listnode *s;
	coucou x;
	Linklist L;
	L=(Listnode *)malloc(sizeof(Listnode));
	if(L==NULL)
	{
		printf(" ß∞‹£°\n");
		exit(1);
	}
	L->next=NULL;////
	scanf("%d",&x);
	while(x!=-1)
	{
		s=(Listnode *)malloc(sizeof(Listnode));
		if(s==NULL)
		{
			printf(" ß∞‹!\n");
			exit(1);
		}
		s->data=x;
		s->next=L->next;
		L->next=s;
		scanf("%d",&x);
	 } 
	 return L;
}

Linklist creatB()
{
	Listnode *s,*r;
	coucou x;
	Linklist L;
	L=(Listnode *)malloc(sizeof(Listnode));
	if(L==NULL)
	{
		printf(" ß∞‹£°\n");
		exit(1);
	}
	r=L;
	scanf("%d",&x);
	while(x!=-1)
	{
		s=(Listnode *)malloc(sizeof(Listnode));
		if(s==NULL)
		{
			printf(" ß∞‹£°\n");
			exit(1);
		}
		s->data=x;
		r->next=s;
		r=s;
		scanf("%d",&x);/////
	}
	r->next=NULL;
	return L;
}

int Getlength(Linklist L)
{
	int num=0;
	Listnode *p;
	p=L->next;
	while(p!=NULL)
	{
		num++;
		p=p->next;
	}
	return num;
}

Listnode *Getnode(Linklist L,int i)
{
	int j=1;
	Listnode *p;
	p=L->next;
	if(i<1 || i>Getlength(L))
	{
		printf("≤È’“¥ÌŒÛ£°\n");
		exit(1);
	}
	while(j<i)
	{
		p=p->next;
		j++;
	}
	return p;
}

int Locatenode(Linklist L,coucou x)
{
	int j=1;
	Listnode *p;
	p=L->next;
	while(p->data!=x && p!=NULL)
	{
		p=p->next;
		j++;
	}
	if(p==NULL)
	  return 0;
	else
	  return j;
}

void Insertnode(Linklist L,coucou x,int i)
{
	Listnode *p,*q,*s;
	p=L;
	int j=1;
	if(i<1 || i>Getlength(L)+1)
	 {
	 	printf("≤Â»Î¥ÌŒÛ£°\n");
	 	exit(1);
	 }
	 s=(Listnode *)malloc(sizeof(Listnode));
	 if(s==NULL)
	 {
	 	printf(" ß∞‹£°\n");
	 	exit(1);
	 }
	 s->data=x;
	while(j<=i)
	{
		q=p;
		p=p->next;
		j++;
	}
	s->next=p;
	q->next=s;
}


Linklist Merge(Linklist L,Linklist L1)
{
	Linklist pa,pb,pc,r;
	pa=L->next;
	pb=L1->next;
	pc=L;
	r=pc;
	while(pa && pb)
	{
		if(pa->data <pb->data)
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
	free(pb);
	return pc;
}
Listnode *reverse(Linklist L)
{
	Listnode *p,*q;
	p=L->next;
	L->next=NULL;
	while(p!=NULL)
	{
		q=p;
		p=p->next;
		q->next=L->next;
		L->next=q;
	}
	return L;
}
void Print(Linklist L)
{
	Linklist *p;
	p=L->next;
    while(p!=NULL)
    {
    	printf("%d ",p->data);
    	p=p->next;
	}
}

void Deletenode(Linklist L,int i)
{
	int j=1;
	Listnode *p,*q;
	p=L;
	if(i<1 || i>Getlength(L))
	{
		printf(" ß∞‹!\n");
		exit(1);
	}
	while(j<i && p!=NULL)
	{
		p=p->next;
		j++;
	}
	q=p->next;
	p->next=q->next;
	free(q);
}bvl ,.............................................................................................................................
































































































































































































































































































































































































































































































































































































































\\\\\\\\\\\\\\
