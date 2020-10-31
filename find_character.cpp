#include<stdio.h>

char *mystrchr( char *p,char ch);
int main()
{

    char str[20],ch;
    char *ptr;

    printf("\n Enter string: ");
    gets(str);

    printf("enter character to find: ");
    scanf("%c",&ch);

    ptr=mystrchr(str,ch);

    if(NULL==ptr)
      printf("\n character not found found:");
    else
      printf("\n character is found at  %d: ",(ptr-str)+1);

   return 0;

}

char *mystrchr( char *p,char ch)
{
    int i=0;

    while(1)
    {

        if(p[i]==(char)ch)
           return &p[i];

        if(p[i]==NULL)
           return NULL;

        i++;

   }
}



