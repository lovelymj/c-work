#include<stdio.h>
#include<string.h>
int main()
{
	const char *a="ABCDEF";
	int s= sizeof(a);
	printf("  %d\n",s);
	printf("%s\n",a+(s-3));
	for(int i=0 ;i<s;i++)
	{
	printf("%s\n",a+(s-3-i));
	}
	
	return 0;
}

