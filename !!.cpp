#include <stdio.h>

int main()
{
    long long int s;
    long long int a,b;
    char ch;
    scanf("%lld %lld\n",&a,&b);
    scanf("%c",&ch);
    if(ch=='+')
    {
        s=a+b;
    }
    else if(ch=='-')
    {
        s=a-b;
        printf("%lld",s);
    }
    else if(ch=='*')
    {
        s=a*b;
        printf("%lld",s);
    }
    else if(ch=='/')
    {
        s=a/b;
        printf("%lld",s);
    }

    return 0;
}

