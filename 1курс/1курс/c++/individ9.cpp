#include <iostream>
#include <vector>
using namespace std;


struct Reysi
{
    int num;
    string pOt;
    string pPr;
    int distance;
    string type;
    int price;
};
void VectInput(vector<Reysi>&a ,int n)
{
    for (int i =0;i<n;i++)
    {
        Reysi x;
        cout<<"Input Reis in this order: Number, Departion point, Arrival Point, Distance (km) , Plane type, Price: ";
        a.push_back(x);
        cin>>a.at(i).num>>a.at(i).pOt>>a.at(i).pPr>>a.at(i).distance>>a.at(i).type>>a.at(i).price;
        cout<<"\n";
    }
}
void min1km(vector<Reysi>&a)
{
    vector<Reysi>::iterator ind;
    float mn = (float) a.at(0).price / (float)a.at(0).distance;
    ind  = a.begin();
    for(auto it = a.begin();it!=a.end();it++) 
    {
        float x = (float)(*it).price/( (float)(*it).distance );
        if(x<mn)
        {
            mn = x;
            ind = it;
        }
    }
    a.erase(ind);
}
void printVector(vector<Reysi>&a)
{
    for(auto it = a.begin();it!=a.end();it++)
    {
        cout<<(*it).distance<<" "<<(*it).price<<endl;
    }
    cout<<endl;
}
int main()
{
    vector<Reysi> a;
    int n; cin>>n;
    VectInput(a,n);
    min1km(a);
    printVector(a);


}