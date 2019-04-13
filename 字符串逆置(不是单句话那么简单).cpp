#include<stdio.h>
#include<string.h>
int main( )
{
   char str[1001];
   int T,k;
   int i,len;
   int lowe,upper;
   scanf("%d",&T);
   getchar( );
   for(k=0;k<T;k++)
   {
       gets(str);
       len=strlen(str);
       for(i=0;i<len;i++)
       {
           lowe=i;
           while(str[i]!=' '&&str[i]!='\0')
              i++;
           for(upper=i-1;upper>=lowe;upper--)
               printf("%c",str[upper]);
           if(str[i]==' ')
               printf(" ");
       }
       printf("\n");
   }
   return 0;
}
