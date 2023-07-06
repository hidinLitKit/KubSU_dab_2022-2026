//lab1
// #include <iostream>
// using namespace std;

// int soversh(int x)
// {
//     int sum = 0;
//     for (int i = 1;i<x;i++ )
//     {
//         if (x%i==0) sum+=i;
//     }
//     return sum;
// }
// int main()
// {
//     int a,n,k=0; cin>>n;
//     for (int i = 0; i<n;i++)
//     {
//         cin>>a;
//         if (soversh(a) == a) k++;
//     }
//     cout<<k<<endl;
// }

//lab2
// #include <iostream>
// using namespace std;
// int seven(int x)
// {
//     bool a = false;
//     while (x)
//     {
//         if (x%10==7) a = true;
//         x/=10;
//     }
//     return a;
// }
// int main()
// {
//     int a,n,sum=0; cin>>n;
//     for (int i = 0; i<n;i++)
//     {
//         cin>>a;
//         if(seven(a)) sum+=a;
//     }
//     cout<<sum<<endl;
// }

//lab3
// #include <iostream>
// using namespace std;
// int chsum(int x)
// {
//     int sum = 0;
//     while (x)
//     {
//         sum+=x%10;
//         x/=10;
//     }
//     return sum;
// }
// int main()
// {
//     int n,a,k=0; cin>>n;
//     for ( int i = 0; i<n; i++)
//     {
//         cin>>a;
//         if (chsum(a)%2==0) k++;
//     }
//     cout<<k<<endl;
// }

//lab4
// #include <iostream>
// using namespace std;
// int sum4(int x)
// {
//     int sum = 0;
//     while(x)
//     {
//         sum+=x%10;
//         x/=10;
//     }
//     return sum;
// }
// int main()
// {
//     int a,n,mult=1; cin>>n;
//     for (int i=0; i<n;i++)
//     {
//         cin>>a;
//         if (sum4(a)%4==0) mult*=a;
//     }
//     cout<<mult<<endl;
// }

//lab5
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,a,sum=0; cin>>n;
//     for (int i=0;i<n;i++)
//     {
//         cin>>a;
//         int f1=0,f2=1,f3=1;
//         while( f3<a)
//         {
//             f1=f2; f2=f3;f3 = f1+f2;
//         }
//         if ( a==f3) sum+=a;
//     }
//     cout<<sum<<endl;
// }

//dz1
#include <iostream>
using namespace std;
int main()
{
    int n,a,k=0; cin>>n;
    for (int i = 0; i<n;i++)
    {
        cin>>a;
        int sum = 0;
        while(a)
        {
            sum+=a%10;
            a/=10;
        }

        int c = 0;
        for (int j = 2;j<n;j++)
        {
            if (sum%j==0) c++;
        }
        c ? k+=0 : k++;
    }
    cout<<k<<endl;
}