

#include<stdio.h>
void mystrcat (char * , const char *);

int main()
{
	char source[20];
	char destination[40];

	printf("Enter Destination String : ");
	gets(destination);
	printf("Enter Source String : ");
	gets(source);

	mystrcat(destination,source);

	printf("Concatenated String is : ");
	puts(destination);

	return 0;
}

void mystrcat (char *q , const char *p)
{
	int l,i;

	for(l=0 ; q[l]!='\0' ; l++);

	for(i=0 ; p[i]!='\0' ; i++)
	{
		q[l] = p[i];
		l++;
	}
	q[l] = '\0';
}

4mystrcat.


#include<stdio.h>
void mystrcat (char * , const char *);

int main()
{
	char source[20];
	char destination[40];

	printf("Enter Destination String : ");
	gets(destination);
	printf("Enter Source String : ");
	gets(source);

	mystrcat(destination,source);

	printf("Concatenated String is : ");
	puts(destination);

	return 0;
}

void mystrcat (char *q , const char *p)
{
	int l,i;

	for(l=0 ; q[l]!='\0' ; l++);

	for(i=0 ; p[i]!='\0' ; i++)
	{
		q[l] = p[i];
		l++;
	}
	q[l] = '\0';
}

