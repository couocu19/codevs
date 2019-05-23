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
	int len,len1,i,j,k;
	gets(s);
	gets(s1);
    len=strlen(s);
    len1=strlen(s1);
    for(i=0;i<len;i++)
      for(j=0;j<len1;j++)
      {
         if(s[i]==s1[j])
         {
         	if(i==0||j==0)
         	   num[i][j]=1;
         	else
			   num[i][j]=num[i-1][j-1]+1;
		 }
		 else
		    num[i][j]=0;
	     if(num[i][j]>maxx)
	         maxx=num[i][j];
      }
    printf("%d\n",maxx);
    return 0;
}
 
