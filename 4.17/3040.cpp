#include<stdio.h>
int main()
{
   long long k,s=23;
    scanf("%lld",&k);
    if(k==1)
        printf("%lld",s);
    else
    {
        for(int i=2;i<=k;i++)
        {
            s+=105;
        }
        printf("%lld",s);
    }
    return 0;
}


