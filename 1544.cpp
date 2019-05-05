#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
int hui(char s[1000])
{
	int len;
	int l,r;
	len=strlen(s);
	for(l=0,r=len-1;l<r;l++,r--)
		if(s[l]!=s[r])
		{
			return 0;
			break;
		}
	return 1;
}
int main()
{
	int num[1000];
	char flag[10000];
	int t=0,k;
	int n,s,j;
	int i;
	int m;
	scanf("%d%d",&n,&s);
	for(i=s+1;t!=n;i++)
	{
		k=0;
		for(m=2;m<=32;m++)
		{
		  itoa(i,flag,m);
//		  printf("%s ",flag);
		  if(hui(flag)==1)
		    k++; 
		  if(k==2)
		    break;
	    }
//	    printf("\n");
	    if(k>=2)
	    {
//	      printf("%d\n",k);
	      printf("%d\n",i);
	      num[t]=i;
	      t++;
	    }
	}
//	for(j=0;j<t;j++)
//      printf("%d\n",num[j]);
    return 0;
}

