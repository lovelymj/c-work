#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("C:\\C++Work\\Car.txt");
    
    if(!fout)
    {
        cout<<"������ ���� �����ϴ� "<<endl;
        return 0;
    }
    string strCarName[]={"�׷���","���׽ý�","K3","K5","K9"};
    for(int i=0; i<sizeof(strCarName)/sizeof(string);i++)
    {
        string strCar="�� �ڵ�����"+strCarName[i]+"�Դϴ�\n";
        
        fout<<strCar;
    }
    fout.close();
	return 0;
}