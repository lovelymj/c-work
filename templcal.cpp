#include<iostream>
using namespace std;

template<typename T>
T Cal(T x,T y,bool z=false)
{
	T nResult;
	if(z==true) nResult= x+y;
	else nResult=x-y;
	return nResult;
}
int main()
{
	cout<<Cal(10,20,false)<<endl;
	cout<<Cal(10.5,20.2,true)<<endl;
	cout<<Cal(-10.4,20.5,true)<<endl;
	return 0;
}
