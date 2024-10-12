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
        cout<<"파일을 열수 없습니다 "<<endl;
        return 0;
    }
    string strCarName[]={"그랜져","제네시스","K3","K5","K9"};
    for(int i=0; i<sizeof(strCarName)/sizeof(string);i++)
    {
        string strCar="번 자동차는"+strCarName[i]+"입니다\n";
        
        fout<<strCar;
    }
    fout.close();
	return 0;
}
