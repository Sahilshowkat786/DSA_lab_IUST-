#include <stdio.h>
#include <string.h>
int main()
{
	char str[80], *p;
	char *q;
	q = &str[0];
	p = &str[0];

	printf("enter a string ");
	scanf("%s", &str);
	while (*q != '\0')
	{

		q++;
	}
	q--;
	int count = 0;
	while (q != p)
	{
		printf("%c", *q);
		q--;
		count++;
	}
	printf("%c", *p);
	printf("\nlength of string is %d",count);
}