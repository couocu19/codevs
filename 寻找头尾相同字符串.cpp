#include<iostream>
#include<string>
#include<cstring>
using namespace std;
 string s;
 int main()
 {
 	cin >> s;
 	int k=1,l;
 	l=s.size();
 	string ans="";
 	while(l>2&&k<l)
 	{
 		string ss=s.substr(0,k);
 		if(s.substr(l-k,k)==ss)
 		{
 			string sss =s.substr(1,l-2);
 			if(sss.find(ss)<l-2)
 			    ans = ss;
		 }
		 k++;
	 }
 	if(ans=="")
 	   cout << "Just a lengend"<<endl;
 	else
 	  cout <<ans<<endl;
 }
