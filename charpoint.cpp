#include<stdio.h>
#include<string.h>
int main()
{
	const char *a="ABCDEF";
	int i=0;
	
	while(*(a+i) !='\0')
	{
		printf("%c\n",*(a+i));
		i++;
	}
	return 0;
}

