#include<stdio.h>
int mystrcasecmp(const char * , const char *);

int main()
{
	char str1[20],str2[20];
	int i;

	printf("Enter 1st string : ");
	gets(str1);
	printf("Enter 2nd string : ");
	gets(str2);

	i = mystrcasecmp(str1 , str2);

	if(i == 0)
		printf("Both strings are same \n");
	else
		printf("Both strings are different \n");

	return 0;
}

int mystrcasecmp(const char *p , const char *q)
{
	int i=0;

	while(1)
	{
		if((p[i]!=q[i])  &&  (p[i] != (q[i]+32)  &&  p[i] != (q[i]-32)))
			return 1;

		if(p[i]=='\0')
			break;

		i++;
	}
	return 0;
}#include<stdio.h>
int mystrcasecmp(const char * , const char *);

int main()
{
	char str1[20],str2[20];
	int i;

	printf("Enter 1st string : ");
	gets(str1);
	printf("Enter 2nd string : ");
	gets(str2);

	i = mystrcasecmp(str1 , str2);

	if(i == 0)
		printf("Both strings are same \n");
	else
		printf("Both strings are different \n");

	return 0;
}

int mystrcasecmp(const char *p , const char *q)
{
	int i=0;

	while(1)
	{
		if((p[i]!=q[i])  &&  (p[i] != (q[i]+32)  &&  p[i] != (q[i]-32)))
			return 1;

		if(p[i]=='\0')
			break;

		i++;
	}
	return 0;
}
