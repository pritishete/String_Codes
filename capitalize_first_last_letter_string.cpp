#include<stdio.h>
#include<string.h>
#include<ctype.h>


int main()
{
    char str[40];
    int i,len;

    gets(str);
    len=strlen(str);

    for(i=0;i<=len;i++)
    {
        if(i==0 || i==len-1)
        {
           str[i]=toupper(str[i]);
        }
        else if(str[i]==' ')
        {
            str[i-1]=toupper(str[i-1]);
            str[i+1]=toupper(str[i+1]);

        }
    }

    puts(str);


}
