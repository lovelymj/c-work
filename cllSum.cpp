#include<iostream>
using namespace std;
int Sum(int nX,int nY)
{
	int nZ=nX+nY;
	cout<<"nZ�� �ּҴ�"<<&nZ<<endl;
	return nZ;
}
int main()
{
	int i=10,j=20;
	int nSum;
	nSum=Sum(i,j);
	cout<<"nSum="<<nSum<<","<<"nSum ���ּҴ�"<<&nSum<<endl;
	return 0; 
}