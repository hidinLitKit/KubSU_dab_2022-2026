#include <iostream>
using namespace std;
int f1( int x)
{
    if (x==0) return 1;
    return 2*f1(x-1)+1;
}
int f2(int x)
{
    if (x==0) return 1;
    if (x==1) return 2;
    return 2*f2(x-1)+3*f2(x-2);
}

int f3(int x)
{
    if (x==1) return 1;
    if (x==2) return 2;
    return f3(x-1)+2*f3(x-2);
}
int sum(int x)
{
    x = abs(x);
    if (x<10) return x;
    return x%10+sum(x/10);
}

int sumCH(int x)
{   
    x = abs(x);
    if (x<10) return (x%2==0);
    return (x%10%2==0)+sumCH(x/10);
}
int sum6(int x)
{   
    x = abs(x);
    if (x<10) return (x%10==6);
    return (x%10==6)+sumCH(x/10);
}

int maxMas(int *a, int n)
{
    int mx = sum(a[0]); int elem = a[0];
    for (int i = 0; i<n;i++)
     {
        if (sum(a[i])>mx)
        {
            mx = sum(a[i]);
            elem  = a[i];
        }
     }
     return elem;
}
int maxMasCh(int *a,int n)
{
    int mx = sumCH(a[0]), elem = a[0];
    for (int i = 0; i<n;i++)
    {
        if (sumCH(a[i])>mx)
        {
            mx = sumCH(a[i]);
            elem = a[i];
        }
    }
    return elem;
}

int summachet(int *a, int n)
{
    int s = 0;
    for (int i = 0 ; i<n;i++)
    {
        if (a[i]%2==0) s+=a[i];
    }
    return s;
}
void za7(int *a,int n,int i, int s )
{
    if (i!=n)
    {
        if (a[i]<=99 && a[i]>=10)
        {
            a[i] += s;
        }
        cout<<a[i]<<" ";
        za7(a,n,i+1,s);
    }
}


int main()
{
    int n; cin>>n;
    //lab1,2
    // cout<<f1(n)<<endl;
    // cout<<f2(n)<<endl;
    int *a = new int[n];
    for (int i = 0; i<n;i++) cin>>a[i];
    //lab3
    //cout<<maxMas(a,n)<<endl;
    //lab4
    //cout<<maxMasCh(a,n)<<endl;

    //lab7
    za7(a,n,0,summachet(a,n));
    //lab8


}