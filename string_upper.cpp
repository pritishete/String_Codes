#include<stdio.h>
void mystrlwr(char *p);
int main()
{
    char str1[20];

    printf("\n Enter first string:");
    gets(str1);

    printf("string in lower case:");
    mystrlwr(str1);
    puts(str1);

    return 0;



}

void mystrlwr(char *p)
{
    int i;
   for(i=0;p[i]!='\0';i++)
    if(p[i]>=97 && p[i]<=122)
    {
        p[i]=p[i]-32;
    }
}
