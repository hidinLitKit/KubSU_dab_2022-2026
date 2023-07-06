// #include <iostream>
// using namespace std;
// bool sov(int x)
// {
//     int s = 0;
//     for(int i =1;i<x;i++) (x%i==0) ? s+=i : s+=0;
//     if (x==1) s-=1;
//     return s == x; 
// }
// bool fib(int x)
// {
//     int x1=0,x2=1,x3;
//     while(x>x1)
//     {
//         x3 = x2+x1;
//         x1 = x2;
//         x2 = x3;
//         if (x3==x) return true;
//     }
//     return false;
// }
// int sumNum(int x)
// {
//     int s = 0;
//     while(x)
//     {
//         s+=x%10;
//         x/=10;
//     }
//     return s;
// }
// bool isProst(int x)
// {
//     for (int i = 2;i<x;i++)
//     {
//         if (x%i==0) return false;
//     }
//     return true;
// }
// bool kolEd(int x,int y)
// {
//     int k=0;
//     while(x)
//     {
//         if (x%10==1) k++;
//         k+=x%10;
//         x/=10;
//         if (x==y) return true;
//     }
//     return false;
// }
// int main()
// {
//     int n,s=0,fibk = 0,kolpr = 0,ked=0; cin>>n;
//     int *a = new int[n];
//     for (int i =0;i<n;i++) cin>>a[i];
//     for (int i = 0; i< n; i++) (sov(a[i])) ? s+=a[i] :s+=0;
//     for (int i = 0; i< n; i++) if (fib(a[i])) fibk++ ;
//     for (int i = 0;i<n;i++) if (isProst(sumNum(a[i]))) kolpr++;
//     for (int i = 0;i<n;i++) if (kolEd(a[i],2)) ked++;
//     cout<<s<<" "<<fibk<<" "<<kolpr<<" "<<ked<<endl;

//     int e; cin>>e;
//     int **b = new int*[e];
//     for (int i = 0;i<e;i++) b[i] = new int[e];
//     for (int i=0;i<e;i++) for (int j = 0;j<e;j++) cin>>b[i][j];

//     int mk=0;
//     for (int i =0;i<e;i++) for (int j=0;j<e;j++) if((i+j)%2==0 && sov(b[i][j])) mk++;
//     cout<<mk<<endl;

//     for (int i = 0;i<e;i++) delete[] b[i];
//     delete[] b;
//     delete[] a;
// }


#include <iostream>
using namespace std;
bool isCh(int x)
{
    int s= 0;
    while(x)
    {
        s+=x%10;
        x/=10;
    }
    if (s%2==0) return true;
    return false;
}
bool isFive(int x)
{
    while(x)
    {
        if (x%10==5) return true;
        x/=10;
    }
    return false;
}
int max(int x, int y)
{
    if(x>y) return x;
    return y;
}
int SumNum(int x)
{
    int s = 0;
    while(x)
    {
        s+=x%10;
        x/=10;
    }
    return s;
}
int main()
{
    // int n; cin>>n;
    // int *a = new int[n];
    // for (int i =0;i<n;i++) cin>>a[i];
    
    //dz1
    // int k = 0;
    // for (int i = 0;i<n;i++)
    // {
    //     if (isCh(a[i])) k++;
    // }
    // cout<<k<<endl;

    //dz2
    // int k =0;
    // for(int i=0; i<n;i++)
    // {
    //     if(isFive(a[i])) k++;
    // }
    // cout<<k<<endl;

    //dz3
    // int x,y,z; cin>>x>>y>>z;
    // cout<<float(max(x,y)+max(y,z))/(max(x,z)-2)<<endl;
    // delete[] a;

    int n,m; cin>>n>>m;
    int **a = new int*[n];
    for(int i = 0;i<n;i++) a[i] = new int[m];

    for (int i =0; i<n;i++) for (int j = 0; j<m;j++) cin>>a[i][j];
    int mx = SumNum(a[0][0]);
    for (int i =0; i<n;i++) for (int j = 0; j<m;j++) if (i==j && SumNum(a[i][j])>mx) mx = SumNum(a[i][j]);
    cout<<mx<<endl;

    for(int i =0;i<n;i++) delete[] a[i];
    delete[] a;
}