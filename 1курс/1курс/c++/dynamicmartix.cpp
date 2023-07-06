#include <iostream>
using namespace std;
int isPr(int x)
{
    int k = 1;
    for (int i=2;i<x;i++)
    {
        if (x%i==0)
        {
            k=0;
            break;
        }
    }
    return k; 
}
int main()
{
    //Ввод
    int n; cin>>n;
    int **a = new int*[n];
    for (int i = 0; i<n;i++) a[i] = new int[n];
    for (int i=0;i<n;i++) for (int j = 0;j<n;j++) cin>>a[i][j];

    //Задача
    //lab1
    // int mx = a[0][0];
    // for (int i=0;i<n;i++) for (int j = 0;j<n;j++) if (a[i][j]>mx) mx = a[i][j];
    // for (int i=0;i<n;i++) for (int j = 0;j<n;j++) if (isPr(a[i][j])) a[i][j] = mx;
    // for (int i=0;i<n;i++)
    // {
    //     cout<<" "<<endl;
    //     for (int j = 0;j<n;j++)
    //     {
    //         cout<<a[i][j]<<" ";
    //     }
    // }

    //lab2
    // int k =0;
    // for (int i=0;i<n;i++)
    // {
    //     int voz = 1;
    //     for (int j = 0;j<n-1;j++)
    //     {
    //         if (a[i][j]>=a[i][j+1])
    //         {
    //             voz = 0;
    //             break;
    //         }
    //     }
    //     if (voz) k++;
    // } 
    // cout<<k<<endl;

    //lab3
    // int k=0;
    // for (int i = 0; i<n;i++)
    // {
    //     bool sim = true;
    //     for(int j=0; j<int(n/2);j++)
    //     {
    //         if (a[i][j]!=a[i][n-1-j]) 
    //         {
    //             sim = false;
    //             break;
    //         }
    //     }
    //     if (sim) k++;
    // }
    // cout<<k<<endl;


    //lab4
    // int *b = new int[n];
    // int k =0;
    // int iMx = 0, iMn = 1; 
    // int mn = a[0][0], mx = a[0][0];
    // for (int i =0;i<n;i++)
    // {
    //     for (int j= 0; j< n;j++)
    //     {
    //         if (a[i][j]>=mx)
    //         {
    //             mx = a[i][j];
    //             iMx = i;
    //         }
    //         if (a[i][j]<=mn)
    //         {
    //             mn = a[i][j];
    //             iMn = i;
    //         }
    //     }
    // }
    // for (int i = 0; i<n;i++) b[i] = a[iMx][i];
    // for (int i = 0; i < n; i++) 
    // {
    //     a[iMx][i] = a[iMn][i];
    //     a[iMn][i] = b[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<"\n";
    //     for (int j = 0; j<n;j++)
    //     {
    //         cout<<a[i][j]<<" ";
    //     }
    // }


    //lab5
    int k = 0;
    for (int i = 0; i< n;i++)
    {
        for (int j = 0;j<n;j++)
        {
            if (isPr(a[i][j])) k++;
        }
    }
    if (k >2 )
    {
        for(int i =0;i<n;i++) for (int j = 0; j<n; j++) if (a[i][j]>0) a[i][j] = 0;
    }
    else
    {
        for(int i =0;i<n;i++) for (int j = 0; j<n; j++) if (a[i][j]<0) a[i][j] = abs(a[i][j]);
    }
    for (int i = 0; i < n; i++)
    {
        cout<<"\n";
        for (int j = 0; j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
    }

    //Удание матрицы
    for (int i = 0; i<n;i++) delete[] a[i];
    delete[] a;

}