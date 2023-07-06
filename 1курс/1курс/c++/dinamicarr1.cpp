//lab1
// #include <iostream>
// using namespace std;
// int sov(int x)
// {
//     int s = 0;
//     for (int i = 1;i < x;i++)
//     {
//         if (x%i==0) s+=i;
//     }
//     return s;
// }
// int main()
// {
//     int n,sum=0;cin>>n;
//     int *a = new int[n];
//     for (int i=0;i<n;i++) cin>>a[i];
//     for (int i=0;i<n;i++)
//     {
//         if (sov(a[i])==a[i]) sum+=a[i];
//     }
//     cout<<sum;
//     delete[] a;
// }


//lab2
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,k=0;cin>>n;
//     int *a = new int[n];
//     float sum=0;
//     for (int i=0;i<n;i++) 
//     {
//         cin>>a[i];
//         sum+=a[i];
//     }
//     float sr = sum/n;
//     for (int i=0;i<n;i++) if (a[i]>sr) k++;
//     cout<<k;
//     delete[] a;
// }


//lab3
// #include <iostream>
// using namespace std;
// int ch(int x)
// {
//     int g = x,sum=0;
//     while(g)
//     {
//         sum+=g%10;
//         g/=10;
//     }
//     return sum;    
// }
// int main()
// {
//     int n,k=0;cin>>n;
//     int *a = new int[n];
//     for (int i=0;i<n;i++) cin>>a[i];
//     for (int i=0;i<n;i++) if(ch(a[i])%2==0) k++;
//     cout<<k;
//     delete[] a;
// }


//lab4
// #include <iostream>
// using namespace std;
// int is0(int x)
// {
//     int g = x,is=0;
//     while(g)
//     {
//         if (g%10==0)
//         {
//             is=1;
//             break;
//         }
//         g/=10;
//     }
//     return is;
// }
// int main()
// {
//     int n,sum=0;cin>>n;
//     int *a = new int[n];
//     for (int i=0;i<n;i++) cin>>a[i];
//     for (int i=0;i<n;i++) if (is0(a[i])) sum+=a[i];
//     cout<<sum;
//     delete[] a;
// }


//dz1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n; cin>>n;
//     int *a=new int[n];
//     for (int i = 0; i<n;i++) cin>>a[i];
//     int mx = a[0];
//     for(int i=1;i<n;i++) if (a[i]>=mx) mx = a[i];
//     cout<<mx;
//     delete[] a;
// }


//dz2
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;cin>>n;
//     int *a=new int[n];
//     for (int i=0;i<n;i++) cin>>a[i];
//     int isUb = 1;
//     for (int i=0;i<n-1;i++)
//     {
//         if(a[i+1]>=a[i])
//         {
//             isUb=0;
//             break;
//         } 
//     }
//     if (isUb)
//     {
//         for (int i = 0;i<n;i++) if(a[i]>0) a[i] = 0;
//     }
//     else
//     {
//         for(int i=0;i<n;i++) if(a[i]<0) a[i]=abs(a[i]);
//     }
//     for (int i = 0;i<n;i++) cout<<a[i]<<" ";
//     delete[] a;
// }


//dz3
// #include <iostream>
// using namespace std;
// int isPr(int x)
// {
//     int k = 1;
//     for (int i=2;i<x;i++)
//     {
//         if (x%i==0)
//         {
//             k=0;
//             break;
//         }
//     }
//     return k; 
// }
// int main()
// {
//     int n,k=0;cin>>n;
//     int *a = new int[n];
//     for (int i = 0; i<n;i++) cin>>a[i];
//     for(int i=0;i<n;i++)
//     {
//         if(isPr(a[i])) k++;
//         if( k>2) break;
//     }
//     if(k>2)
//     {
//         for(int i=0;i<n;i++) if (a[i]%2==0) a[i]*=2;
//     }
//     else
//     {
//         for(int i=0;i<n;i++) if(a[i]/100==0 && a[i]/10!=0) a[i]-=3;
//     }
//     for(int i=0;i<n;i++) cout<<a[i]<<" ";
//     delete[] a;
// }


//dz4
#include <iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    int *a = new int[n];
    for (int i=0;i<n;i++) cin>>a[i];
    int mx = a[0]
    for (int i=1;i<n;i++) if(a[i]>mx) mx = a[i];
    int k=0;
    for(int i =0;i<n;i++)
    {
        if(a[i]==mx) k++
        if (k>1) break;
    }
    if (k>1)
    {
        int s3 = 0;
        for(int i = 0;i<n;i++) if(a[i]%3==0) s3+=a[i];
        cout<<"Sum3 = "<<s3<<endl;
    }
    else
    {
        int k =0;
        for(int i=0;i<n;i++) if(a[i]%2==0)k++;
        cout<<"k = "<<k<<endl;
    }    
}