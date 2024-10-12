#include <fstream>
#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("c:\\C++Work\\Text.txt");
    if(!fout)
    {
        cout<<"파일을 찾을수 없습니다"<<endl;
        return 0;
    }
    double fRand;
    srand(time(NULL));
    for(int i=1;i<101;i++)
    {
        fRand=(rand()%10+20)*3.14;
        fout<<fRand;
        if(i%10==0)fout<<endl;
    }
    fout.close();
    return 0;

}

