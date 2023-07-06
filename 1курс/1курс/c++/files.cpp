#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
bool seekNum(int x, int y)
{
    while(x)
    {
        if(x%10==y) return true;
        x/=10;
    }
    return false;
}
int sumNum( int x)
{
    if(x==0) return 0;
    return x+sumNum(x/10);
}
bool isProst(int x)
{
    if (x==1) return false;
    for (int i = 2; i<x;i++)
    {
        if(x%i==0) return false;
    }
    return true;
}
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
int startNum(int x)
{
    int g = x;
    g/=10;
    while(g)
    {
        x/=10;
        g/=10;
    }
    return x;
}
void prChet(ifstream &in)
{
    in.clear();
    in.seekg(0);
    int pr = 1,x;
    while(!in.eof())
    {
        in>>x;
        if(!in.eof() && x%2==0) pr*=x;
    }
    cout<<pr<<endl;
}
void sumThree(ifstream &in)
{
    in.clear();
    in.seekg(0);
    int sum = 0,x;
    while(!in.eof())
    {
        in>>x;
        if(!in.eof() && startNum(x)==3) sum+=x;
    }
    cout<<sum;
}
bool isFibon(int x)
{
    int x1 = 0, x2 = 1, x3 = 0;
    while(x3<=x)
    {
        if(x==x3) return true;
        x3 = x1 + x2;
        x1 = x2;
        x2 = x3;
    }
    return false;
}
int main()
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

    ifstream in; //выводим
    in.open("C:/Users/awe/Desktop/c++/files/f.txt");
    //task1 
    // int mx;
    // in>>mx;
    // while(!in.eof())
    // {
    //     in>>x;
    //     if(!in.eof()) mx = max(x,mx);
    // }
    //cout<<mx;
    
    // //task 2
    // int summ;
    // while(!in.eof())
    // {
    //     in>>x;
    //     if(!in.eof() && x%2==0) summ+=x;
    // }
    // cout<<x;    
    
    //task 3
    // int pr = 1;
    // while(!in.eof())
    // {
    //     in>>x;
    //     if(!in.eof() && x>0) pr*=x;
    // }
    // cout<<pr<<endl;
    
    //task4
    // int k = 0;
    // while(!in.eof())
    // {
    //     in>>x;
    //     if(!in.eof() && seekNum(x,y)) k++;
    // }
    // cout<<k<<endl;

    //task5
    // int k = 0;
    // while(!in.eof())
    // {
    //     in>>x;
    //     if(!in.eof() && sumNum(x)%2==0) k++;
    // }
    // cout<<k<<endl;

    //task6
    // int pr = 1;
    // while(!in.eof())
    // {
    //     in>>x;
    //     if(!in.eof() && x%3==0 && x%5==0) pr*=x;
    // }
    // cout<<pr<<endl;
    
    //task 7
    // int kol=0, k=0;
    // float sr = 0;
    // while(!in.eof())
    // {
    //     in>>x;
    //     if(!in.eof()) {sr+=x;k++;}
    // }
    // sr = sr/k;
    // in.clear();
    // in.seekg(0);
    // while(!in.eof())
    // {
    //     in>>x;
    //     if(!in.eof() && x>=sr) kol++; 
    // }
    // cout<<kol<<endl


    //dz1
    // int sum = 0;
    // while(!in.eof())
    // {
    //     in>>x;
    //     if(!in.eof() && isProst(x)) sum+=x;
    // }
    // cout<<sum<<endl;

    //dz2
    // bool flag = 0;
    // while(!in.eof())
    // {
    //     in>>x;
    //     if(!in.eof() && isSov(x)) flag = 1;
    // }
    // if(flag) prChet(in);
    // else sumThree(in);

    //dz3
    // int pr = 1;
    // while(!in.eof())
    // {
    //     in>>x;
    //     if(!in.eof() && seekNum(x,3) && !seekNum(x,7)) pr*=x;
    // }
    // cout<<pr<<endl;

    //dz4
    int kol=0, k=0;
    float sr = 0;
    while(!in.eof())
    {
        in>>x;
        if(!in.eof() && isFibon(x)) {sr+=x;k++;}
    }
    if (k!=0) cout<<sr/k<<endl;
    else cout<<"None"<<endl;

    in.close();
    
}