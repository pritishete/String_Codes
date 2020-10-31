#include<stdio.h>


void mystr_n_cpy(const char *p, char *q,int no);

int main()
{
    char source[20],destination[40];
    int n;

    printf("\n Enter source string ");
    gets(source);

    printf("\n enter no\t");
    scanf("%d",&n);

    mystr_n_cpy(source,destination,n);

    printf("\n Concatenated string is:");

    puts(destination);
    return 0;

}


void mystr_n_cpy(const char *p, char *q,int no)
{
    int i,l;

    for(l=0;p[l]!='\0';l++);

    for(i=0;i<l;i++)
    {
        if(no==i)
        {
            break;
        }
        q[i]=p[i];


    }
   q[i]='\0';


}
