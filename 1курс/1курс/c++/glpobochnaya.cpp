//lab1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n; cin>>n;
//     int a[n][n];
//     for (int i = 0; i<n;i++)
//         for (int j = 0; j<n; j++)
//             cin>>a[i][j];
//     int pr = 1;
//     for (int i = 0; i<n;i++)
//         for (int j = 0; j<n; j++)
//             if (i==n-j-1) pr*=a[i][j];
//     cout<<pr<<endl;
// }


//lab2
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n; cin>>n;
//     int a[n][n];
//     for (int i = 0; i<n;i++)
//         for (int j = 0; j<n; j++)
//             cin>>a[i][j];
//     int sum = 0;
//     for (int i = 0; i<n;i++)
//         for (int j = 0; j<i; j++)
//             sum+=a[i][j];
//     cout<<sum<<endl;
// }


//lab3
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n; cin>>n;
//     int a[n][n];
//     for (int i = 0; i<n;i++)
//         for (int j = 0; j<n; j++)
//             cin>>a[i][j];
//     int sum = 0;
//     for (int i = 0; i<n;i++)
//         for (int j = 0 ; j<n ;j++)
//             if (i == n- j - 1) sum+=a[i][j];
//     cout<<float(sum)/float(n)<<endl;
// }


//lab4
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n; cin>>n;
//     int a[n][n];
//     for (int i = 0; i<n;i++)
//         for (int j = 0; j<n; j++)
//             cin>>a[i][j];
//     int sum = 0;
//     for (int i = 0; i<n;i++)
//         for (int j = 0 ; j<n ;j++)
//             if (i < n- j - 1 && i<j) sum+=a[i][j];
//     cout<<sum<<endl;
// }


//lab5
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n; cin>>n;
//     int a[n][n];
//     for (int i = 0; i<n;i++)
//         for (int j = 0; j<n; j++)
//             cin>>a[i][j];
//     int mx = a[n-1][0];
//     for (int i = 0; i<n;i++)
//         for (int j = 0 ; j<n ;j++)
//             if (a[i][j] >mx && i>j) mx = a[i][j];
//     cout<<mx<<endl;
// }


//dop1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n; cin>>n;
//     int a[n][n];
//     int b[n]; int c = 0;
//     for (int i = 0; i<n;i++)
//         for (int j = 0; j<n; j++)
//             cin>>a[i][j];
//     int mx = a[n-1][0]; 
//     for (int i = 0; i<n;i++)
//     {
//         int mx = a[i][0];
//         for (int j = 0 ; j<n ;j++)
//         {
//             if (a[i][j]>mx) mx = a[i][j];
//         }
//         b[c] =mx;
//         c++;
//     }
//     for (int i = 0; i<n;i++) cout<<b[i]<<endl;
// }




//dz1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,pr=1; cin>>n;
//     int a[n][n];
//     for (int i = 0;i<n;i++)
//         for (int j = 0; j<n; j++)
//             cin>>a[i][j];
//     for (int i = 0;i<n;i++)
//     {
//         if (a[i][i]%2==0) pr*=a[i][i];
//     }
//     cout<<pr<<endl;
// }


//dz2
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n; cin>>n;
//     int a[n][n];
//     for (int i = 0;i<n;i++)
//         for (int j = 0; j<n; j++)
//             cin>>a[i][j];
//     int mx = a[0][0];
//     for (int i = 0;i<n;i++)
//     {
//         if (a[i][i]>mx) mx=a[i][i];
//     }
//     cout<<mx<<endl;
// }


//dz3
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,b[2]; cin>>n;
//     int a[n][n];
//     for (int i = 0;i<n;i++)
//         for (int j = 0; j<n; j++)
//             cin>>a[i][j];
//     int mn = a[0][n-1];
//     b[0] = 0; b[1] = n-1;
//     for (int i = 0;i<n;i++)
//     {
//         for (int j = n-1;j>n;j--)
//         {
//             if (a[i][j]< mn) mn = a[i][j];
//             b[0] = i; b[1] = j;
//         }
//     }
//     printf("Minimim = %d, indexes are %d and %d\n", mn,b[0],b[1]);    
// }


//dz4
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, k=0; cin>>n;
//     int a[n][n];
//     for (int i = 0;i<n;i++)
//         for (int j = 0; j<n; j++)
//             cin>>a[i][j];
//     for (int i = 0;i<n;i++)
//         for (int j = i+1;j<n;j++)
//             if (a[i][j]/10%10==2 && a[i][j]%10==2) k++;
//     cout<<k<<endl;
// }


//dz5
#include <iostream>
using namespace std;
int main()
{
    int n, pr=1; cin>>n;
    int a[n][n];
    for (int i = 0;i<n;i++)
        for (int j = 0; j<n; j++)
            cin>>a[i][j];
    for (int i = 0;i<n;i++)
        for (int j = i+1;j<n;j++)
            if ( ( i>j && i<n-1-j) || (i< j && i>n-1-j)) pr*=a[i][j];
    cout<<pr<<endl;
}