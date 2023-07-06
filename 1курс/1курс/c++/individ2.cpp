#include <iostream>
using namespace std;
int numSum(int x)
{
    int numS = 0;
    while(x)
    {
        numS+=x%10;
        x/=10;
    }
    return numS;
}
int main()
{
    int n,a[100];cout<<"Input n: "; cin>>n;
    cout<<"Input an array: \n";
    for (int i = 0;i<n;i++) cin>>a[i];

    int elems = numSum(a[0]) ,elem = a[0];
    for (int i =1; i<n; i++)
    {
        int c = numSum(a[i]);
        if (c>elems) { elem = a[i]; elems=c; }
    }
    cout<<"Number with max sum of digits is: "<<elem<<"\n";
}