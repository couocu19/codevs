#include<stdio.h>
#include<string.h>
int main(void)
{
    char str[] = "I welcome any ideas from readers�� of course.";
    char *lc = strchr(str, 'o');
    printf("strchr�� %s\n", lc);
    char *rc = strrchr(str, 'o');
    printf("strrchr�� %s\n", rc);
    return 0;
}
