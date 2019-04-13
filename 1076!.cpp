# include<stdio.h>
int main()
{
    int n,a[100],k;
    scanf("%d",&n);
    int i,j,t;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]==a[i])
            {
                for(k=j+1;k<n;k++)
                a[k-1]=a[k];
                n--;
                j--;
            }
        }
    }
    for(i=n-1;i>=0;i--)
    {
        for(j=0;j<i;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("%d\n",n);
    for(i=0;i<n;i++)
    {
        if(a[i+1]!=a[i])
        printf("%d ",a[i]);
    }
    return 0;
}
