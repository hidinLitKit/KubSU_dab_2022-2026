//lab1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,pr=1;cin>>n; 
//     int a[n][n];
//     for (int i = 0;i<n;i++) for (int j = 0;j<n;j++) cin>>a[i][j];
//     for (int i = 0;i<n;i++)
//     {
//         for (int j =0; j<n; j++)
//         {
//             pr*=a[i][j];
//         }
//     }
//     cout<<pr;
// }


//lab2
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;cin>>n; 
//     int a[n][n];
//     for (int i = 0;i<n;i++) for (int j = 0;j<n;j++) cin>>a[i][j];
//     int mx = a[0][0];
//     for (int i = 0;i<n;i++)
//     {
//         for (int j =0; j<n; j++)
//         {
//             if (a[i][j]>mx) mx = a[i][j];
//         }
//     }
//     cout<<mx;
// }

//lab3
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, sum = 0;cin>>n; 
//     int a[n][n];
//     for (int i = 0;i<n;i++) for (int j = 0;j<n;j++) cin>>a[i][j];
//     for (int i = 1;i<n;i+=2)
//     {
//         for (int j =1; j<n; j+=2)
//         {
//             if (a[i][j]%3==0) sum += a[i][j];
//         }
//     }
//     cout<<sum;
// }


//lab4
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,pr=1;cin>>n; 
//     int a[n][n];
//     for (int i = 0;i<n;i++) for (int j = 0;j<n;j++) cin>>a[i][j];
//     for (int i = 0;i<n;i++)
//     {
//         for (int j =0; j<n; j++)
//         {
//             if (a[i][j]%10==4 && (i+j)%2==0) pr*=a[i][j];
//         }
//     }
//     cout<<pr;
// }


//dz1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,k=0;cin>>n; 
//     int a[n][n];
//     for (int i = 0;i<n;i++) for (int j = 0;j<n;j++) cin>>a[i][j];
//     for (int i = 0;i<n;i++)
//     {
//         for (int j =0; j<n; j++)
//         {
//             if (a[i][j]%10==2 && a[i][j]/10%10==2) k++;
//         }
//     }
//     cout<<k;
// }


//dz2
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;cin>>n; 
//     int a[n][n];
//     for (int i = 0;i<n;i++) for (int j = 0;j<n;j++) cin>>a[i][j];
//     int mx = a[1][0];
//     for (int i = 1;i<n;i+=2)
//     {
//         for (int j =0; j<n; j++)
//         {
//             if (a[i][j]>mx) mx = a[i][j];
//         }
//     }
//     cout<<mx<<endl;
// }


//dz3
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, st;cin>>n; cin>>st;
//     int a[n][n];
//     for (int i = 0;i<n;i++) for (int j = 0;j<n;j++) cin>>a[i][j];
//     float sr = 0;
//     for (int j =0; j<n; j++)
//     {
//         if (a[st][j]%2==0) sr+=a[st][j];
//     }
//     cout<<sr/n;
// }


//dz4
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;cin>>n; 
//     int a[n][n];
//     for (int i = 0;i<n;i++) for (int j = 0;j<n;j++) cin>>a[i][j];
//     for (int i = 0;i<n;i++)
//     {
//         int mn = a[i][0];
//         for (int j =0; j<n; j++)
//         {
//             if (a[i][j]<mn) mn = a[i][j];
//         }
//         cout<<mn<<endl;
//     }
// }