#include<iostream>
using namespace std;

class CMotor
{
public:
	
	const char* m_pCarName;
	int m_nWidth, m_nLength;
public:
	CMotor()
	{
		cout<<"�θ� ������ "<<endl;
	}
	~CMotor()
	{
		cout<<"�θ� �Ҹ���"<<endl;
	}
	
};
class CNewMotor:public CMotor
{
public:
	CNewMotor()
	{
		cout<<"�� �� ������"<<endl;	
	}
	~CNewMotor()
	{
		cout<<"�� �� �Ҹ��� "<<endl;	
	}
		
};

int main()
{
	cout<<"����\n";
	CNewMotor Genesis,Grander;
	cout<<"�߰����α׷�~~\n";
	return 0; 
}