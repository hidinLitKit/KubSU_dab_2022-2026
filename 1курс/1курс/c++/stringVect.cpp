#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
void fillVector(vector<string>&a)
{
    cout<<"Input n"<<endl;
    int n; cin>>n;
    for(int i = 0; i<n ; i++)
    {
        string s;
        cin>>s;
        a.push_back(s);
    }
}
int ifstrA(vector<string>&a)
{
    int k = 0;
    for (auto it = a.begin();it!=a.end();it++)
    {
        string sub;
        sub = (*it).substr(0, (int) ((*it).size()/2) );
        if(sub.find("A")!= string::npos) k++;
    }
    return k;
}

void symm(vector<string>&a)
{
    int k = 0;
    for(auto it = a.begin();it!=a.end();it++)
    {
        string sub = *it;
        reverse(sub.begin(),sub.end());
        if (*it==sub) cout<<k<<endl;
        k++;
    }
}
void printVector(vector<string>&a)
{
    for(auto it = a.begin();it!=a.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<string>a;
    fillVector(a);
    //cout<<ifstrA(a)<<endl;
    symm(a);
}