#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tar,t;

    cin>>t>>tar;

    while(t--)

    {

        char cmd;

        int num;

        cin>>cmd>>num;

        if(cmd=='+') 
		  tar+=num;

        if(cmd=='-') 
		  tar-=num;

        if(cmd=='*') 
		  tar*=num;

        if(cmd=='/')

        {

            if(num==0)

            {

                cout<<"Error!";

                return 0;

            }

            else tar/=num;

        }

        if(cmd=='%')

        {

            if(num==0)

            {

                cout<<"Error!";

                return 0;

            }

            else tar%=num;

        }


    }

    cout<<tar;

}
