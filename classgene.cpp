#include<iostream>
using namespace std;
class CMotor
{
protected:
    const char* m_carName;
    int m_width, m_length;
public:
    void Dimension(const char* strName,int x,int y)
    {
        m_carName=strName;
        m_width=x,m_length=y;
        cout<<"차종:"<<m_carName<<',';
        cout<<"폭:"<<m_width<<',';
        cout<<"길이:"<<m_length<<endl;
    }
};
class CnewMotor : public CMotor
{
    int m_width=10;
public:
	void Area()
    {
        int nSize=m_width*m_length;
        cout<<"면적은:"<<nSize<<endl;
    }
};
int main()
{
    CnewMotor Genesis;
    Genesis.Dimension("Genesis",1925,4995);
    Genesis.Area();
    return 0;
}
