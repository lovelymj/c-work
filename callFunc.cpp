#include<iostream>
using namespace std;
void Func(int b)
{
	b=b+10;
	cout<<"b�� ����"<<b<<endl;
	cout<<"b�� �ּҰ���"<<&b<<endl;
}
int main()
{
	int* a= new int;
	*a=10;
	Func(*a);
	
	cout<<"a�ǰ���"<<*a<<endl;
	cout<<"a���ּҰ���"<<&a<<endl;
	return 0;
}