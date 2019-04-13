#include<cstdio>
#include<iostream>
#include<cstring>
#include<string>
using namespace std;
char st[110];
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",st);
        if(strlen(st)>10)
        {
            printf("%c%d%c\n",st[0],strlen(st)-2,st[strlen(st)-1]);
        }
        else
        {
            printf("%s\n",st);
        }
    }
    return 0;
}
