#include<stdio.h>
void mystrcpy(const char *p, char *q);

int main()
{
    char source[30],destination[30];

    printf("\n Enter source string :\t");
    gets(source);
    printf("\n source string is:\t");

    puts(source);

    mystrcpy(source,destination);

    printf("\n destination string is:");
    puts(destination);

    return 0;


}

void mystrcpy(const char *p, char *q)
{
    int i;
    for(i=0;p[i]!='\0';i++)
    {
       q[i]=p[i];

    }

    q[i]='\0';
}
