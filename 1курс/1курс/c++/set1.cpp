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
void fillCharSet(set<char>&a)
{
    char x;
    for(cin>>x;x!='#';cin>>x)
    {
        a.insert(x);
    }
    cout<<"done"<<endl;
}
bool checkLit(set<char>&a)
{
    for(auto it = a.begin();it!=a.end();it++)
    {
        char x = *(it);
        x = toupper(x);
        cout<<x<<" "<<*(it)<<endl;

        if(x==*(it)) continue;
        return false;        
    }
    return true;
}
void printCharSet(set<char>&a)
{
    for(auto it = a.begin();it!=a.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
void printSet(set<int>&a)
{
    for(auto it = a.begin();it!=a.end();it++)
        cout<<*it<<" ";
    cout<<endl;
}
int main()
{
    //#1
    // set<int> prost, sost;
    // int x;
    // for(cin>>x;x!=0;cin>>x)
    // {
    //     if(isProst(x)) prost.insert(x);
    //     else sost.insert(x);
    // }
    // printSet(prost);
    // printSet(sost);

    //#2
    // set<int> first, second;
    // int x;
    // fillSet(first);
    // fillSet(second);
    // set<int> unity, intersect, differ;
    // unity.insert(first.begin(),first.end());
    // unity.insert(second.begin(), second.end());
    // for(auto const& value: first)
    // {
    //     if(second.count(value)) intersect.insert(value);
    // }
    // differ.insert(first.begin(), first.end());
    // for(auto const&value: second)
    // {
    //     if(first.count(value)) differ.erase(value);
    // }
    // printSet(unity);
    // printSet(intersect);
    // printSet(differ);

    
    //#3
    // set<char> a;
    // fillCharSet(a);
    // if(checkLit(a)) cout<<"Vse Propisnie"<<endl;
    // else
    // {
    //     set<char> up, und;
    //     for(auto &v:a)
    //     {
    //         char x = v;
    //         x = toupper(x);
    //         if(x==v) up.insert(v);
    //         else und.insert(v);
    //     }
    //     printCharSet(up);
    //     printCharSet(und);
    // }

    //#4
    set<char> vowels, cons;
    

}