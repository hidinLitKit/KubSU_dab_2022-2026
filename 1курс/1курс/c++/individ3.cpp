#include <iostream>
using namespace std;
int main()
{
    const int n = 4, m = 5; int a[n][m];
    printf("Input %dx%d size matrix\n", n,m);
    for(int i = 0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>a[i][j];
    int b[m];
    for(int j=0;j<m;j++)
    {
        int mn = a[0][j];
        for(int i=0;i<n;i++)
        {
            if (a[i][j]<mn) mn = a[i][j];
        }
        b[j] =mn;
    }
    cout<<"The matrix of minimums is: "<<endl;
    for (int i=0;i<m;i++) cout<<b[i]<<" ";
}