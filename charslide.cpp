#include<stdio.h>
#include<stdlib.h>
int main()
{
	char arr[15]="ABCDEFGHIJKLMN";
	int i,j;
	
	for(i=0;i<15;i++)
	{
		for(j=0;j<14-i;j++)
		{
			printf("%c",' ');
		}
		for(j=0;j<i+1;j++)
		{
			printf("%c",arr[14-j]);
		}
		printf("\n");
	}
	system("PAUSE");
	return 0;
}
