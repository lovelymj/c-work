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
	cout<<"������"<<endl;
}
CMotor::~CMotor()
{
	cout<<"�Ҹ���"<<endl;
}

int main()
{
	cout<<"����\n";
	CMotor Genesis,Grander;
	cout<<"�߰����α׷�~~\n";
	return 0; 
}