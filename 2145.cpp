#include<iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	if((s[s.size()-1]-'0')%2)
	  cout<<"ji";
	else
	  cout<<"ou";
	  return 0;
}
