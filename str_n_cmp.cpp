#include<stdio.h>
int mystrncmp(const char * , const char * , size_t);

int main()
{
	char string1[20],string2[20];
	int ch,n;

	printf("Enter String1 : ");
	gets(string1);
	printf("Enter String2 : ");
	gets(string2);

	printf("Enter n : ");
	scanf("%d",&n);

	ch=mystrncmp(string1,string2,n);

	if(ch==0)
		printf("Both Strings Are Same\n");
	else
		printf("Both Strings Are Diffrent\n");

	return 0;
}

int mystrncmp(const char *p , const char *q , size_t n)
{
	int i=0;

	while(1)
	{
		if(p[i]!=q[i])
			return 1;

		if(p[i]=='\0'  ||  i+1==n)
			break;

		i++;
	}
	return 0;
}
