#include <fstream>
#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

int main()
{
    ifstream fin;
    fin.open("c:\\C++Work\\Text.txt");
    if(!fin)
    {
        cout<<"파일을 찾을수 없습니다"<<endl;
        return 0;
    }
    int i=1;
    double fData;
    while(!fin.eof())
    {
        fin>>fData;
        cout<<fData<<" ";
        if(i%10==0)cout<<endl;
        i++;
    }
    fin.close();
    return 0;

}

