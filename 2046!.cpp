#include <cstdio>

#include <cstring>

bool is_prime[1000005];

int main()

{

int n,cnt=0;

scanf("%d",&n);

memset(is_prime,1,sizeof(is_prime));

is_prime[0]=0;

for(int i=2;i<=n;i++)

{

if(is_prime[i])

for(int j=2;j<=n/i;j++)is_prime[i*j]=0;

}

for(int i=0;i<n-1;i++)//�úڰ壡��������һ��Ҫдn-1,������һ������+

{

if(is_prime[i]&&is_prime[i+2])cnt++;

}

printf("%d",cnt);

return 0;

}


