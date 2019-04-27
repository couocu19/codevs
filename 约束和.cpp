# include <stdio.h>
# include <math.h>
# define MAXN 5000000
int a[MAXN+1];
int main()
{
    int i,j,t,n;
    for(i=1; i<=MAXN; ++i)
        for(j=i; j<=MAXN; j+=i)
            a[j] += i;  //ÕâÈý¾äÅ£±Æ 
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        printf("%d\n",a[n]);
    }
    return 0;
}
