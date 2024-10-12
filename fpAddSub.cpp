#include<iostream>
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
int main()
{
	int i=2,j=3,k;
	int (*fpAddSub)(int,int);
	
	fpAddSub=&Add;
	k=(*fpAddSub)(i,j);
	printf("%d + %d =%d\n",i,j,k);
	cout<<"*fpAddSub="<<fpAddSub<<endl;
	fpAddSub=&Sub;
	k=(*fpAddSub)(i,j);
	printf("%d - %d =%d\n",i,j,k);
	cout<<"fpAddSub="<<fpAddSub<<endl;
	return 0;
	
}
