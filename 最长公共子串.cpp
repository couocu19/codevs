#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str[100];
	int i,j,k,flag;
	int minlen;
	int n;
	scanf("%d",&n);
	minlen=INT_MAX;
	for(i=0;i<n;i++)
	   {
	   	   cin>>str[i];
	   	   if(minlen>str[i].length())
	   	      minlen=str[i].length();
	   }
	if(n==1)
	{
		cout<<str[0];
	    return 0;
    }
	for(i=minlen;i>=0;i--)
	{
		flag=1;
		for(j=0;j<=str[0].length()-i;j++)
		{
			for(k=1;k<n;k++)
			  	 if(str[k].find(str[0].substr(j,i))==string::npos)
			  	   flag=0;
			if(flag)
			{
			   cout<<str[0].substr(j,i);
			   return 0;
		    }
		}
		
	}
	return 0;
}
