#include<stdio.h>

int main()
{
    char str[40];
    int i;
    int freq[256]={0};

    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        freq[str[i]]++;

    }

    for(int i=0;i<256;i++)
    {
        if(freq[i]==1)
            printf("%c",i);

    }

    return 0;

}
