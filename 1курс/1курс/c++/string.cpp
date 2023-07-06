#include <iostream>
#include <string>
using namespace std;
void kolProb(string s, char simv)
{
    int k = 0;
    for (int i = 0; i< s.size();i++) if (s[i]==simv) k++;
    cout<<k<<endl;
}
void vhLatin(string s)
{
    int k = 0;
    for (int i = 0; i< s.size();i++) if (s[i]>=65 && s[i]<=125) k++;
    cout<<k<<endl;  
}
void vhCiph(string s)
{
    int k = 0;
    for (int i = 0; i< s.size();i++) if (s[i]>='0' && s[i]<='9') k++;
    cout<<k<<endl;  
}
void vhChar(string s, char a)
{
    int k =0; int mx = 0;
    for (int i = 0;i<s.size();i++)
    {
        if (s[i]==a) 
        {
            k++;
            if (k>mx) mx = k;
        }
        else k = 0;
    }
    cout<<mx<<endl;
}
int howManyab(string s)
{
    int k = 0;
    for (int i = 0;i<s.size()-1;i++)
    {
        if (s[i] == 'a' && s[i+1]=='b') k++;
    }
    return k;
}
string erasin(string s)
{
    string a;
    for (int i =0;i<s.size();i++) if (!(s[i]>='0' && s[i]<='9')) a+=s[i];
    return a;
}
int main()
{
    string s;
    getline(cin,s);
    //lab1 
    kolProb(s,' ');
    //lab2
    vhLatin(s);
    //lab3
    vhCiph(s);
    //lab4
    int pos = s.find('+');
    if (pos>=0) cout<<"+";
    else cout<<"-";
    //lab5
    if (s[0]=='s') kolProb(s,'*');
    else kolProb(s,'?');
    //lab6
    vhChar(s,'a');
    //lab7
    if (howManyab(s)>=2) cout<<erasin(s)<<endl;
    //lab8
    if (s.size()%3==0) s.erase(s.size()/3,s.size()/3);
    cout<<s;
    //lab9
    

}