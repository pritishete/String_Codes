#include<stdio.h>
#include<string.h>

int mystrcmp(char *p,char *q);

int main()
{

    char str1[20],str2[40];
    int ch;

    printf("\n Enter first string");
    gets(str1);
    printf("\n Enter second string");
    gets(str2);

    ch=mystrcmp(str1,str2);

    if(ch)
     printf("\n strings are same");
    else
     printf("\n strings are not same");



}

int mystrcmp(char *p,char *q)
{
    int i,len1,len2,count=0;

    len1=strlen(p);
    len2=strlen(q);

    if(len1!=len2)
      return 0;
    else
      for(i=0;p[i]!='\0';i++)
    {
        if(p[i]!=q[i])
        {
            break;
        }
        else
         count++;
    }

    if(count==len1)
     return 1;
    return 0;

}
