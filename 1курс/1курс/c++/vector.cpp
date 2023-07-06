#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void fillVector(vector<int>&a)
{
    int n; cin>>n;
    for(int i = 0; i<n ; i++)
    {
        a.push_back(rand()%50-25);
    }

}
void increaseVector1(vector<int>&a)
{
    int z = *a.begin();
    for(auto it = a.begin(); it!=a.end();it++)
    {
        *it +=z;
    }
}
void increaseVectorMin(vector<int>&a)
{

    int x = *min_element(a.begin(), a.end());
    for( auto it = a.begin(); it!=a.end();it++)
    {
        *it += x;
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
    increaseVectorMin(a);
    printVector(a);

}