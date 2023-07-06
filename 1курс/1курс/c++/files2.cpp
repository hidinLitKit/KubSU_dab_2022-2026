#include <iostream>
#include <fstream>
using namespace std;

bool isSov(int x)
{
    if(x==1) return false;
    int s = 0;
    for(int i = 1;i<x;i++)
    {
        if(x%i==0) s+=i;
    }
    if(s==x) return true;
    return false;
}
int sumNum( int x)
{
    if(x==0) return 0;
    return x+sumNum(x/10);
}
float SrAr()
{
    ifstream in;
    in.open("C:/Users/awe/Desktop/c++/files/f.txt");
    float s=0,k=0;
    int x;    
    while(!in.eof())
    {
        in>>x;
        if(!in.eof()) {s+=x;k++;}
    }
    in.close();
    if(k==0) return 0;
    return s/k;
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
void fillHend3()
{
    ofstream outH;
    outH.open("C:/Users/awe/Desktop/c++/files/h.txt");
    int x;
    ifstream in;
    in.open("C:/Users/awe/Desktop/c++/files/f.txt");
    while(!in.eof())
    {
        in>>x;
        if(!in.eof() && x%10==3) outH<<x<<endl;
    }
    outH.close();
    in.close();
}
void fillHsov()
{
    ofstream outH;
    outH.open("C:/Users/awe/Desktop/c++/files/h.txt");
    int x;
    ifstream in;
    in.open("C:/Users/awe/Desktop/c++/files/f.txt");
    while(!in.eof())
    {
        in>>x;
        if(!in.eof() && isSov(x)) outH<<x<<endl;
    }
    outH.close();
    in.close();
}

void fillHsumNum()
{
    ofstream outH;
    outH.open("C:/Users/awe/Desktop/c++/files/h.txt");
    int x;
    ifstream in;
    in.open("C:/Users/awe/Desktop/c++/files/f.txt");
    while(!in.eof())
    {
        in>>x;
        if(!in.eof() ) outH<<sumNum(x)<<endl;
    }
    outH.close();
    in.close();
}
void fillHsr(float s)
{
    ofstream outH;
    outH.open("C:/Users/awe/Desktop/c++/files/h.txt");
    int x;
    ifstream in;
    in.open("C:/Users/awe/Desktop/c++/files/f.txt");
    while(!in.eof())
    {
        in>>x;
        if(!in.eof() && x>s) outH<<sumNum(x)<<endl;
    }
    outH.close();
    in.close();
}
int main()
{
    fillF();
    float sr = SrAr();
    fillHsr(sr);
}