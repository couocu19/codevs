#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   char a[100];
   int i;
   while (gets(a))
   {
     for (i=0;i<strlen(a);i++)
      {
         if (i==0)
            a[i]-= 32;
         else
        {
            if (a[i]==' '&&a[i+1]!=' ')
               a[i+1]-=32;
        }
      }
    printf("%s\n",a);
   }
   return 0;
}
