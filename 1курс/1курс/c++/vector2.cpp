#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void fillVector(vector<int>&a)
{
    srand(time(0));
    int n; cin>>n;
    for(int i = 0; i<n ; i++)
    {
        a.push_back(rand()%25);
    }

}
int sumNum(int x)
{
    int s = 0;
    while(x)
    {
        s+=x%10;
        x/=10;
    }
    return s;
}
float srAr(vector<int>&a)
{
    float s = 0,k=0;
    for( auto it = a.begin();it!=a.end();it++)
    {
        s+=*it;
        k++;
    }
    return s/k;
}
bool isProst(int x)
{
    if(x==1) return false;
    for( int i = 2; i<x;i++)
    {
        if (x%i==0) return false;
    }
    return true;
}
void deleteProstS(vector<int>&a)
{
    for (int i = 0;i<a.size();)
    {
        if(isProst(sumNum(abs(a.at(i))))) a.erase(a.begin()+i);
        else i++;
    }
}
void insertSumN(vector<int>&a)
{
    for(int i = 0;i<a.size();)
    {
        if(isProst(abs(a.at(i)))) 
        { 
            a.insert(a.begin()+i+1, sumNum(abs(a.at(i))));
            i+=2;
        }
        else i++;
    }
}
void duble(vector<int>&a)
{
    float srar = srAr(a);
    cout<<srar<<endl;
    for( int i = 0;i<a.size();)
    {
        if(a.at(i)>srar)
        {
            a.insert(a.begin()+i+1, a.at(i));
            i+=2;
        }
        else
        {
            a.erase(a.begin()+i);
        }

    }
}


void printVector(vector<int>&a)
{
    for(auto it = a.begin();it!=a.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> a;
    fillVector(a);
    printVector(a);
    int k,l;
    cin>>k>>l;
    if(k>=0 && k<=l && l<a.size()) 
    for(int i = 0; i<float(-k+l)/2;i++) iter_swap(a.begin()+k +i-1 ,a.begin()+l - i-1);
    printVector(a);

}