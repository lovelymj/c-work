#include<iostream>
using namespace std;

class CMotor
{
protected:
	const char* m_pCarName;
	int m_nWidth, m_nLength;
public:
	void Dimension(const char* strName,int x,int y)
	{
		m_pCarName= strName;
		m_nWidth = x; m_nLength= y;
		cout<<" ���� :"<<m_pCarName<<",";
		cout<<" ��  :"<<m_nWidth<<",";
		cout<<" ���� :"<<m_nLength<<endl;
	}
};
class CNewMotor: public CMotor
{
public:
	int m_nWidth =10;
	void Area()
	{
		int nSize=m_nWidth*m_nLength;
		cout<<"����:"<<nSize<<endl;
	}
};

int main()
{
	CNewMotor Genesis;
	
	Genesis.Dimension("���׽ý�",1925,4994);
	Genesis.Area();
	return 0; 
}