#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

bool isProst(int x)
{
    if (x==1) return false;
    for (int i = 2; i<x;i++)
    {
        if(x%i==0) return false;
    }
    return true;
}

void fillF()
{
    ofstream out; //записываем
    out.open("C:/Users/awe/Desktop/c++/files/f.txt");
    cout<<"Input n"<<endl;
    int n,x; cin>>n;
    for(int i = 0; i<n ; i++)
    {
        cin>>x;
        out<<x<<endl;
    }
    out.close();
}

int koll()
{
    int k = 0, x;
    ifstream in;
    in.open("C:/Users/awe/Desktop/c++/files/f.txt");
    while(!in.eof())
    {
        in>>x;
        if(!in.eof() && isProst((int)sqrt(x))) k++;
    }
    in.close();
    return k;
}

int main()
{
    fillF();
    cout<<koll()<<endl;

}