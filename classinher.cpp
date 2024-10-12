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
		cout<<"부모 생성자 "<<endl;
	}
	~CMotor()
	{
		cout<<"부모 소멸자"<<endl;
	}
	
};
class CNewMotor:public CMotor
{
public:
	CNewMotor()
	{
		cout<<"자 식 생성자"<<endl;	
	}
	~CNewMotor()
	{
		cout<<"자 식 소멸자 "<<endl;	
	}
		
};

int main()
{
	cout<<"시작\n";
	CNewMotor Genesis,Grander;
	cout<<"중간프로그램~~\n";
	return 0; 
}
