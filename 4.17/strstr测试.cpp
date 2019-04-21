#include<stdio.h>
#include<string.h>
int main(void)
{
    char str[] = "I welcome any ideas from readers£¬ of course.";
    char *lc = strchr(str, 'o');
    printf("strchr£º %s\n", lc);
    char *rc = strrchr(str, 'o');
    printf("strrchr£º %s\n", rc);
    return 0;
}
