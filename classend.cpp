#include<iostream>
using namespace std;

class CMotor
{
private:
	const char* m_pCarName;
	int m_nWidth, m_nLength;
public:
	CMotor();
	~CMotor();
};
CMotor::CMotor()
{
	cout<<"생서아"<<endl;
}
CMotor::~CMotor()
{
	cout<<"소멸자"<<endl;
}

int main()
{
	cout<<"시작\n";
	CMotor Genesis,Grander;
	cout<<"중간프로그램~~\n";
	return 0; 
}
