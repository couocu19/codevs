#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
	int num[500][500]={0}; 
	char flag[500];
	char s[1000];
	char s1[1000];
	int  maxx=-1;
	int len,i,j,k;
	gets(s);
    len=strlen(s);
    k=0;
    for(i=len-1;i>=0;i--)
       s1[k++]=s[i];
    for(i=0;i<len;i++)
      for(j=0;j<len;j++)
      {
         if(s[i]==s1[j])
			num[i][j]=num[i-1][j-1]+1;
		 else
		    num[i][j]=max(num[i-1][j],num[i][j-1]);
	     if(num[i][j]>maxx)
	         maxx=num[i][j];
      }
    printf("%d\n",len-maxx);
    return 0;
}
 
