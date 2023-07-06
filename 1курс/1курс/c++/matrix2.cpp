//lab1
// #include <iostream>
// using namespace std;
// int isProst(int x)
// {
//     bool is = true;
//     for (int i=2;i<x;i++)
//     {
//         if (x%i==0 || x==1)
//         {
//             is = false;
//             break;
//         }
//     }
//     return is;
// }
// int main()
// {
//     int n; cin>>n;
//     int a[n][n];
//     for (int i = 0; i < n; i++)
//         for (int j = 0; j<n;j++)
//             cin>>a[i][j];
//     int mx = a[0][0];
//     for (int i = 0; i < n; i++)
//         for (int j = 0; j<n;j++)
//             if (mx < a[i][j]) mx = a[i][j];

//     for (int i = 0; i < n; i++)
//         for (int j = 0; j<n;j++)
//             if (isProst(a[i][j])) a[i][j] = mx;

//     for (int i = 0; i < n; i++)
//     {
//         cout<<"\n";
//         for (int j = 0; j<n;j++)
//         {
//             cout<<a[i][j]<<" ";
//         }
//     }
// }


//lab2
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,k=0; cin>>n;
//     int a[n][n];
//     for (int i = 0; i < n; i++)
//         for (int j = 0; j<n;j++)
//             cin>>a[i][j];
//     for(int i = 0; i<n;i++)
//     {
//         bool isvozr = true;
//         for (int j =0; j<n-1;j++)
//         {
//             if (a[i][j] >= a[i][j+1])
//             {
//                 isvozr =false;
//                 break;
//             }
//         }
//         if (isvozr) k++;
//     }
//     cout<<k<<endl;
// }


//lab3
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,k=0; cin>>n;
//     int a[n][n];
//     for (int i = 0; i < n; i++)
//         for (int j = 0; j<n;j++)
//             cin>>a[i][j];
//     for (int i = 0; i<n;i++)
//     {
//         bool sim = true;
//         for(int j=0; j<int(n/2);j++)
//         {
//             if (a[i][j]!=a[i][n-1-j]) 
//             {
//                 sim = false;
//                 break;
//             }
//         }
//         if (sim) k++;
//     }
//     cout<<k<<endl;
// }


//lab4
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,k=0; cin>>n;
//     int a[n][n];
//     int b[n];
//     for (int i = 0; i < n; i++)
//         for (int j = 0; j<n;j++)
//             cin>>a[i][j];
//     int iMx = 0, iMn = 1; 
//     int mn = a[0][0], mx = a[0][0];
//     for (int i =0;i<n;i++)
//     {
//         for (int j= 0; j< n;j++)
//         {
//             if (a[i][j]>=mx)
//             {
//                 mx = a[i][j];
//                 iMx = i;
//             }
//             if (a[i][j]<=mn)
//             {
//                 mn = a[i][j];
//                 iMn = i;
//             }
//         }
//     }
//     for (int i = 0; i<n;i++) b[i] = a[iMx][i];
//     for (int i = 0; i < n; i++) 
//     {
//         a[iMx][i] = a[iMn][i];
//         a[iMn][i] = b[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout<<"\n";
//         for (int j = 0; j<n;j++)
//         {
//             cout<<a[i][j]<<" ";
//         }
//     }
// }


//lab5
// #include <iostream>
// using namespace std;
// int main()
// {

// }


//dz1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int sum = 0;
//     const int n = 3; int a[n][n];
//     for (int i =0;i<n;i++)
//         for (int j = 0;j<n;j++)
//             cin>>a[i][j];
//     for (int i = 0; i< n;i++)
//     { 
//         int del = 0;
//         for (int c=1;c<a[i][n-1-i];c++) if (a[i][n-1-i]%c==0) del+=c;
//         if (del == a[i][n-1-i]) sum+=a[i][n-1-i];
//     }

//     cout<<sum<<endl;
// }


//dz2
// #include <iostream>
// using namespace std;
// int sumnum(int x)
// {
//     int s = 0,a = x;
//     while(a)
//     {
//         s+=a%10;
//         a/=10;
//     }
//     return s;
// }
// int main()
// {

//     const int n =3;
//     int a[n][n];
//     for (int i =0;i<n;i++)
//         for (int j = 0;j<n;j++)
//             cin>>a[i][j];
//     int e = a[0][0], mxsum = sumnum(e);
//     for (int i = 0;i<n;i++)
//     {
//         if (mxsum<sumnum(a[i][i]))
//         {
//             mxsum = sumnum(a[i][i]);
//             e = a[i][i];
//         }
//     }
//     cout<<e<<endl;

// }


//dz3
// #include <iostream>
// using namespace std;
// int main()
// {
//     int b,c;cin>>b>>c;
//     const int n = 3; int a[n][n];
//     for (int i =0;i<n;i++)
//         for (int j = 0;j<n;j++)
//             cin>>a[i][j];
//     for (int i = 0; i<n;i++)
//     {
//         int d = a[b][i];
//         a[b][i] = a[c][i];
//         a[c][i] = d;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout<<"\n";
//         for (int j = 0; j<n;j++)
//         {
//             cout<<a[i][j]<<" ";
//         }
//     }

// }


//dz4
// #include <iostream>
// using namespace std;
 //     for (int i =0;i<n;i++)
//         for (int j = 0;j<n;j++)
//             cin>>a[i][j];
//     int b[n];
//     for (int j =0; j<n;j++)
//     {
//         int k = 1;
//         for(int i=0; i<n-1;i++)
//         {
//             if (a[i][j]<=a[i+1][j])
//             {
//                 k = 0;
//                 break;
//             }
//         }
//         if (k) cout<<j<<endl;
//     }

// }


//dz5
// #include <iostream>
// using namespace std;
// int isfive(int x)
// {
//     int k = 0;
//     while(x)
//     {
//         if (x%10==5) 
//         {
//             k=1;
//             break;
//         }
//         x/=10;
//     }
//     return k;
// }
// int main()
// {
//     int k = 0;
//     const int n = 3; int a[n][n];
//     for (int i =0;i<n;i++)
//         for (int j = 0;j<n;j++)
//             cin>>a[i][j];
//     for (int i = 0; i< n;i++)
//     { 
//         if (isfive(a[i][n-1-i])) k++;
//     }

//     cout<<k<<endl;
// }


//dz6
// #include <iostream>
// using namespace std;
// int isone(int x)
// {
//     int k = 0;
//     while(x)
//     {
//         if (x%10==1) 
//         {
//             k+=1;
//         }
//         x/=10;
//     }
//     return k;
// }
// int main()
// {
//     int sum = 0;
//     const int n = 3; int a[n][n];
//     for (int i =0;i<n;i++)
//         for (int j = 0;j<n;j++)
//             cin>>a[i][j];
//     for (int i = 0; i< n;i++)
//     { 
//         for (int j=0;j<n;j++)
//         {
//             if (isone(a[i][j])>=2) sum+=a[i][j];
//         }
//     }

//     cout<<sum<<endl;
// }


//dz7
// #include <iostream>
// using namespace std;
// int main()
// {
//     int ni,nj; cin>>ni>>nj;
//     int a[ni][nj];
//     for(int i =0;i<ni;i++)
//         for(int j=0;j<nj;j++)
//             cin>>a[i][j];
//     int b[ni];
//     for (int i =0; i<ni; i++)
//     {
//         int k=0;
//         for (int j = 0;j<nj;j++)
//         {
//             if (a[i][j]>0)k++;
//         }
//         (k>2) ? b[i]=1 : b[i] = 0;
//     }
//     for ( int i=0; i<ni;i++) cout<<b[i]<<endl;

// }


//dz8
#include <iostream>
using namespace std;
int isProst(int x)
{
    int k =1;
    for (int i = 2;i<x;i++)
    {
        if (x%i==0)
        {
            k=0;
            break;
        }
    }
    if (x==1) k=0;
    return k;
}
int main()
{
    int ni,nj; cin>>ni>>nj;
    int a[ni][nj];
    for(int i =0;i<ni;i++)
        for(int j=0;j<nj;j++)
            cin>>a[i][j];
    int b[ni];
    for (int i =0; i<ni; i++)
    {
        int sum=0;
        for (int j = 0;j<nj;j++)
        {
            if (isProst(a[i][j]))sum+=a[i][j];
        }
        b[i] = sum;
    }
    for ( int i=0; i<ni;i++) cout<<b[i]<<endl;

}