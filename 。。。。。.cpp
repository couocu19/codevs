#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	int i,j,k,len,lens;
	scanf("%s %s",a,b);
	len=strlen(a);
	lens=strlen(b);
	for(i=0;i<len;i++)
	{
	    if(a[i]==b[0])
	    {
	        k=i;
		    for(j=0;j<lens;j++)
		  	{
		  		if(a[k++]!=b[j])
		  		  break;
			}
			if(lens==j)
			{
			   printf("%d\n",i+1);
			   break;
		    }
		}
	 } 
    return 0;
}
