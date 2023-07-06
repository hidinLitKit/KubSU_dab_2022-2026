#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
void fillSet(set<int>&a)
{
    int x;
    for(cin>>x;x!=0;cin>>x)
    {
        a.insert(x);
    }
    cout<<"Done!"<<endl;
}
bool isProst(int x)
{
    if (x<2) return false;
    for (int i = 2; i<x;i++)
    {
        if (x%i==0) return false;

    }
    return true;
}
void printSet(set<int>&a)
{
    for(auto it = a.begin();it!=a.end();it++)
        cout<<*it<<" ";
    cout<<endl;
}
int main()
{
    // set<int> prost, sost;
    // int x;
    // for(cin>>x;x!=0;cin>>x)
    // {
    //     if(isProst(x)) prost.insert(x);
    //     else sost.insert(x);
    // }
    // printSet(prost);
    // printSet(sost);

    set<int> first, second;
    int x;
    fillSet(first);
    fillSet(second);
    set<int> unity, intersect, differ;
    unity.merge(first);
    unity.merge(second);
    for(auto const& value: first)
    {
        if(second.count(value)) intersect.insert(value);
    }
    differ.merge(first);
    for(auto const&value: second)
    {
        if(first.count(value)) differ.erase(value);
    }
    printSet(unity);
    printSet(intersect);
    printSet(differ);

}