#include<stdio.h>
int main()
{
	char R,r;
	int s=0,s1=0;
	long int n;
	scanf("%ld",&n);
	r=getchar();
	R=getchar();
	while(n--)
	{
	  scanf("%c%c\n",&r,&R);
	  if(r=='S'&&R=='J' || r=='J'&&R=='B' || r=='B'&&R=='S')
	     s++;
	  else if(R==r)
	     {
	     	s+=0;
	     	s1+=0;
		 }
	  else
	    s1++;
    }
    if(s>s1)
      printf("ry win\n");
    else if(s<s1)
      printf("RY win\n");
    else if(s==s1)
      printf("RY=ry\n");
    return 0;
}
