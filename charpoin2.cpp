#include <stdio.h>

int main()
{
	char c1='a';
	const char *s1="hello";
	
	printf("%c\n",c1);
	printf("%s\n",s1);
	printf("%s\n",(s1+1));
	
	return 0;
}
