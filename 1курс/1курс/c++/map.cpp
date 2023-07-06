#include <iostream>
#include <map>
#include <vector>
#include <set>
using namespace std;
void fillMap(map<string,string>&a)
{
    cout<<"Input size: ";
    int size; cin>>size; 
    for(int i = 0 ; i<size;i++)
    {
        string s,n;
        cout<<"Input key and value: "<<endl;
        cin>>s;
        cin>>n;
        a.insert(pair<string,string>(s,n));
    }
}
void fillCountCity(map<string, set<string> >&a)
{
    cout<<"Input size: ";
    int size; cin>>size;
    for(int i = 0;i<size;i++)
    {
        string s,n;
        cout<<"Input key and value: "<<endl;
        cin>>s>>n;
        if(a.count(s)) a[s].insert(n);
        else a.insert(make_pair(s,set<string>{n}));
    }
}

void printMap(map<string,string>&a)
{
    for(auto it = a.begin();it!=a.end();it++)
        cout<<it->first<<" "<<it->second<<endl;
}
int main()
{
    // map<string, string>a;
    // fillMap(a);
    
    //1
    // cout<<"Input Capital"<<endl;
    // string s; cin>>s;
    // map<string,string>::iterator it = a.find(s);
    // if(it!=a.end()) cout<<it->second<<endl;

    //2
    // cout<<"Input book"<<endl;
    // string s; cin>>s;
    // map<string, string>::iterator it = a.find(s);
    // if(it!=a.end()) cout<<it->second<<endl;
    // cout<<"Input autor"<<endl;
    // int k = 0;
    // string d; cin>>d;
    // for(auto it = a.begin();it!=a.end(); it++)
    // {
    //     if(it->second==d) k++;
    // }
    // cout<<"Kvo = "<<" "<<k<<endl;

    //3
    // float sr = 0;
    // for(auto it = a.begin();it!=a.end();it++) sr+=stoi(it->second);
    // sr/=a.size();
    // for(auto it = a.begin();it!=a.end(); it++)
    // {
    //     if(stoi(it->second) >= sr) cout<<it->first<<" ";
    // }

    //4
    map<string, set<string> > countCity;
    fillCountCity(countCity);
    cout<<"Input country"<<endl;
    string s; cin>>s;
    map<string, set<string> >::iterator it = countCity.find(s);
    cout<<it->second.size()<<endl;


    //5
    // int k = 0;
    // for(auto it = a.begin();it!=a.end();)
    // {
    //     if(stoi(it->second)>4) k++;

    //     if(stoi(it->second)==1) it = a.erase(it); //erase return an iterator to the next element
    //     else ++it;
    // }
    // cout<<k<<endl;
    // printMap(a);
}