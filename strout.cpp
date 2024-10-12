#include<iostream>
using namespace std;

void StrOut(const char* pStrData)
{
	cout<<"¹®ÀÚ¿­"<<pStrData<<endl;
	
}
int main()
{
	const char* strData="I like MIjung!!";
	StrOut(strData);
	StrOut(&strData[4]);
	return 0;
}
