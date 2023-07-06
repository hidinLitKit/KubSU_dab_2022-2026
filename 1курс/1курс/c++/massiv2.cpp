//lab1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,a[100];
//     cin>>n;
//     for (int i=0;i<n;i++) cin>>a[i];
//     for (int i = 0;i<n;i++) a[i]*=a[i];
//     for (int i = 0;i<n;i++) cout<<a[i]<<endl;
// }

//lab2
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,a[100], s=0;
//     cin>>n;
//     for (int i=0;i<n;i++) cin>>a[i];
//     for (int i = 1;i<(n-1);i++)
//     {
//         if (a[i]%2==0 && a[i-1]%3==0 && a[i+1]%3==0) s+=a[i];
//     }
//     cout<<s<<endl;
// }

//lab3 (симметричность)
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,a[100];
//     bool b = true;
//     cin>>n;
//     for (int i=0;i<n;i++) cin>>a[i];
//     for (int i = 0, j = (n-1);i<=j;i++,j--)
//     {
//         if (a[i]!=a[j]) 
//         {b = false; break;}
//     }
//     cout<<b<<endl;
// }

//lab4
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,a[100];
//     cin>>n;
//     for (int i=0;i<n;i++) cin>>a[i];
//     int max = a[0];
//     for (int i = 0;i<n;i++) if (a[i]>max) max = a[i];
//     for (int i = 0; i < n; i++) a[i] = max;
//     for (int i = 0;i<n;i++) cout<<a[i]<<endl;
// }


//lab5
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,x,s=0,a[100],k=0;
//     cin>>x>>n;
//     for (int i=0;i<n;i++) cin>>a[i];
//     for (int i = 0;i<n;i++) if (a[i]>0) {s+=a[i];k++;}
//     float sr = float(s)/float(k);
//     if (sr>x) 
//     {
//         for (int i = 0;i<n;i++)
//         { 
//             if (a[i]%3==0) a[i]*=2;
//         }
//     }
//     else 
//     { 
//         for (int i = 0;i<n;i++) 
//         {
//             if (a[i]<0) a[i]-=2;
//         }
//     }

//     for (int i = 0;i<n;i++) cout<<a[i]<<endl;
// }


//dz1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,a[100];
//     bool b = true;
//     cin>>n;
//     for (int i=0;i<n;i++) cin>>a[i];
//     for (int i = 0;i<n-1;i++) 
//     {
//         if (a[i]>a[i+1])
//         {
//             b = false;
//             break;
//         }
//     }
//     cout<<b<<endl;
// }


//dz2
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,k=0,a[100];
//     cin>>n;
//     for (int i=0;i<n;i++) cin>>a[i];
//     for (int i = 0;i<n-1;i++) 
//     {
//         if (a[i]>0 && a[i+1]<0) k++;
//     }
//     cout<<k<<endl;
// }

//dz3
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,a[100],pr=1;
//     cin>>n;
//     for (int i=0;i<n;i++) cin>>a[i];
//     for (int i = 0;i<n-1;i++)
//     {
//         if (a[i]%3==0 && a[i+1]%2!=0) pr*=a[i];
//     }
//     cout<<pr<<endl;
// }