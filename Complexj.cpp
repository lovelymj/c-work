#include<iostream>
using namespace std;
class Complex
{
private:
	double x,y;
public:
	Complex(double a,double b)
	{
		x=a,y=b;
	
	}
	Complex operator+(Complex& arg)
	{
		Complex sumz(0,0);
		sumz.x=x+arg.x; sumz.y=y+arg.y;
		return sumz;
	}
	void ShowComplex()
	{
		cout<<"a+b="<<x<<"+j"<<y<<endl;
	}
};
int main()
{
	Complex A(3,4),B(1,2);
	Complex sum=A+B;
	sum.ShowComplex();
	return 0;
}
