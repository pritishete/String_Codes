#include<stdio.h>

int main()
{
    char str[40];
    int count=0;
    gets(str);

    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a'|| str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A'|| str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
            count++;

    }

    printf("The count of vowels are:%d",count);

    return 0;

}
