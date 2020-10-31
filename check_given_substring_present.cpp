#include<stdio.h>
#include<string.h>

int main()
{
    char str[30],s[30];
    int l,i,k,j;

    gets(str);
    gets(s);
    l=strlen(s);

    for(i=0;str[i]!='\0';i++)
    {
        k=i;
        for(j=0;j<=l-1;j++)
        {
            if(str[k]!=s[j])
                break;
            k++;
        }

        if(j==l)
            printf("%d",i);
    }


}

