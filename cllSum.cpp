#include<iostream>
using namespace std;
int Sum(int nX,int nY)
{
	int nZ=nX+nY;
	cout<<"nZ의 주소는"<<&nZ<<endl;
	return nZ;
}
int main()
{
	int i=10,j=20;
	int nSum;
	nSum=Sum(i,j);
	cout<<"nSum="<<nSum<<","<<"nSum 의주소는"<<&nSum<<endl;
	return 0; 
}
