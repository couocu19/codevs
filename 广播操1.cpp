
#include<iostream>

#include<cmath>

using namespace std;

int cun[10000000];

int main()

{long  ww[40][2];

long n,k,m,pin,pin2,pin3,pin4,pin5,t;

long sum,sum1,sum2,sum3,sum4;

cin>>n;

for(int a=0;a<n;a++)

    {cin>>m;

    sum=0,sum1=sum2=sum3=sum4=0;

             for(int z=0;z<m;z++)

             {cin>>cun[z];

             sum=sum+cun[z];

             }

pin=sum/m;

pin2=pin+1;

pin3=pin+2;

pin4=pin-1;

pin5=pin-2;

sum=0;

             for(int o=0;o<m;o++)

             {sum=sum+abs(cun[o]-pin);

             sum1=sum1+abs(cun[o]-pin2);

             sum2=sum2+abs(cun[o]-pin3);

             sum3=sum3+abs(cun[o]-pin4);

             sum4=sum4+abs(cun[o]-pin5);

}

     if(sum1<sum)     {pin=pin2;sum=sum1;} 

if(sum2<sum)     {pin=pin3;sum=sum2;} 

if(sum3<sum)     {pin=pin4;sum=sum3;} 

if(sum4<sum)     {pin=pin5;sum=sum4;} 

ww[a][0]=pin;ww[a][1]=sum;

    }

for(int a=0;a<n;a++)

{for(int k=0;k<2;k++)

cout<<ww[a][k]<<" ";

cout<<endl;

}

return 0;  

}


