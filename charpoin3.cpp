#include<stdio.h>
#include<string.h>
int main()
{
	const char *a="ABCDEF";
	int s= sizeof(a);
	printf("  %d\n",s);
	
	for(int i=0 ;i<s;i++)
	{
	printf("%s\n",a+i);
	}
	
	return 0;
}

