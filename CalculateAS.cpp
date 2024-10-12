#include<iostream>
#include<cmath>
using namespace std;

int Add(int a,int b)
{
	int c=a+b;
	return c;
}
int Sub(int a,int b)
{
	int c= a-b;
	return c;
}
int Calculate(int i,int j,int(*fpAS)(int,int))
{
	int k=fpAS(i,j);
	k=pow(k,3);
	return k;
}
int main()
{
	int i=2,j=3,k;
	//int (*fpAddSub)(int,int);
	k=Calculate(i,j,Add);
	printf("(%d + %d)**3 =%d\n",i,j,k);
	
	k=Calculate(i,j,Sub);
	printf("(%d - %d)**3 =%d\n",i,j,k);
	
	return 0;
	
}
