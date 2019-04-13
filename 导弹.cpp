#include<stdio.h>
int a[3005];
int dp[3005]={0};
int main()
{
    int n=0,i,j;
    do{
        scanf("%d",&a[n++]);
    }
    while(getchar()==' ');
    dp[0]=a[0];
    int ans=1;
    for(i=1;i<n;i++)
	{
        for(j=0;j<ans;j++)
		{
            if(a[i]<=dp[j])
			{
                dp[j]=a[i];
                break;
            }
        }
        if(j==ans)
		{
            dp[j]=a[i];
            ans++;
        }
    }
    printf("%d\n",ans);
    return 0;
}

