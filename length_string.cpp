#include<stdio.h>
int mystrlen(char *p);

int main()
{
    char str[30];
    int len;


    printf("\n Enter string");
    gets(str);

    len=mystrlen(str);
    printf("\n Length of string is %d:",len);
    return 0;

}

int mystrlen(char *p)
{
    int i;
    for (i=0;p[i]!='\0';i++)
    return i;

}
