#include <iostream>
#include <algorithm>
using namespace std;
bool isProst(int x)
{
    if (x==1) return false;
    for (int i = 2;i<x;i++)
    {
        if (x%i==0) return false;
    }
    return true;
}
struct tovar
{
    string name;
    string country;
    int weight;
    int cost;
};
struct tovarS
{
    string name;
    string country;
    int weight;
    int price;
    string sort;
};
struct book
{
    string name;
    string author;
    int price;
    int year;
    int str;

};
int main()
{
    //lab1
    // int n,srcost = 0, k =0; cin>>n;
    // tovar *a = new tovar[n];
    // for (int i = 0; i<n; i++)
    // {
    //     cout<<"Input name: ";cin>>a[i].name;
    //     cout<<"Input country: ";cin>>a[i].country;
    //     cout<<"Input weight: ";cin>>a[i].weight;
    //     cout<<"Input cost: ";cin>>a[i].cost;
    //     srcost+=a[i].cost;
    // }
    // srcost = srcost/n;
    // for (int i = 0; i<n;i++) if (a[i].cost <= srcost*1.1 && a[i].cost>=srcost*0.9) k++;
    // cout<<k;


    //lab2
    // int n,srcost = 0, k =0; cin>>n;
    // tovarS *a = new tovarS[n];
    // for (int i = 0; i<n; i++)
    // {
    //     cout<<"Input name: ";cin>>a[i].name;
    //     cout<<"Input country: ";cin>>a[i].country;
    //     cout<<"Input weight: ";cin>>a[i].weight;
    //     cout<<"Input price: ";cin>>a[i].price;
    //     cout<<"Input sort: ";cin>>a[i].sort;
    // }
    // string c; cout<<"Input sort: "; cin>>c;
    // for (int i = 0 ; i<n;i++) if (a[i].sort == c) cout<<a[i].name<<" ";

    //lab3
    int n, srcost=0,k=0;cin>>n;
    book *a = new book[n];
    for (int i = 0;i<n;i++)
    {
        cout<<"Input name: ";cin>>a[i].name;
        cout<<"Input author: ";cin>>a[i].author;
        cout<<"input price: "; cin>>a[i].price;
        cout<<"Input year: ";cin>>a[i].year;
        cout<<"Input str: ";cin>>a[i].str;
    }
    // for ( int i =0;i<n;i++ )
    // {
    //     if(a[i].str%7!=0 && a[i].str <=360 &&a[i].str>=120)
    //     {
    //         srcost+=a[i].price;
    //         k++;
    //     }
    // }
    // cout<<srcost/k<<endl;
    for (int  i = 0; i< n;i++) if (a[i].year>=1980 && isProst(a[i].str)) cout<<a[i].author<<" ";
    delete[] a;
}