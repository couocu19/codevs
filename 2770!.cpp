#include<stdio.h>
int getAdd(int n,int k)

{

    return ((n+n+k-1)*k)/2;

}
int main()
{
    int n,k,count;
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++)
        if(getAdd(i,k)==n)
        {
            count=i;
            break;
        }
    for(int i=0;i<k;i++)
        printf("%d ",count+i);
    return 0;
}
