#include<iostream>
using namespace std;
void Func(int b)
{
	b=b+10;
	cout<<"b의 값은"<<b<<endl;
	cout<<"b의 주소값은"<<&b<<endl;
}
int main()
{
	int* a= new int;
	*a=10;
	Func(*a);
	
	cout<<"a의값은"<<*a<<endl;
	cout<<"a의주소값은"<<&a<<endl;
	return 0;
}
