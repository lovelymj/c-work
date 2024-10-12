#include<iostream>
using namespace std;

template<typename T1,typename T2>
T2 Cal(T1 x,T2 y,bool z=false)
{
	T2 nResult;
	if(z==true) nResult= x+y;
	else nResult=x-y;
	return nResult;
}
int main()
{
	cout<<Cal(10,20)<<endl;
	cout<<Cal(10,20.2,true)<<endl;
	cout<<Cal<double,int>(-10.4,20.5,true)<<endl;
	return 0;
}
