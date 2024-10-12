#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream fin;
    fin.open("C:\\Windows\\win.ini");
    
    if(!fin)
    {
        cout<<"file not open"<<endl;
        return 0;
    }
    while(!fin.eof())
    {
        char strData[256];
        fin.getline(strData,256);
        cout<<strData<<endl;
    }
    fin.close();
	return 0;
}
