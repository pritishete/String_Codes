#include<stdio.h>
void mystrset(char *p,char ch);

int main()
{
    char str1[20],ch;

    printf("\n Enter string");
    gets(str1);

    printf("Enter character:");
    scanf("%c",&ch);

    printf("\n String after change is:");
    mystrset(str1,ch);
    puts(str1);

    return 0;

}

void mystrset(char *p,char ch)
{
    int i;
    for(i=0;p[i]!='\0';i++)
    {
        p[i]=ch;
    }

    p[i]='\0';
}
