#include<stdio.h>
#include<string.h>
int main()
{
	int k,i,j,m;
	char s1[10]="*x*";
	char s2[10]=" xx";
	char s3[20]="* *";
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		for(j=0;j<strlen(s1);j++)
		{
	       	  for(m=0;m<k;m++)
	       	    printf("%c",s1[j]);
	    }
	    printf("\n");
    }
    for(i=0;i<k;i++)
	{
		for(j=0;j<strlen(s2);j++)
	       	 for(m=0;m<k;m++)
	       	    printf("%c",s2[j]);
	    printf("\n");
    }
    for(i=0;i<k;i++)
	{
		for(j=0;j<strlen(s3);j++)
	       	 for(m=0;m<k;m++)
	       	    printf("%c",s3[j]);
	    printf("\n");
    }
	return 0;	
}
