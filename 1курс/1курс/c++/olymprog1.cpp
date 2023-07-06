// #include <iostream>
// #define ll long long
// using namespace std;
// int main()
// {
//     int t;
//     ll a,b,n;
//     cin>>t;
//     while(t--)
//     {
//         ll sum=0, c=0;
//         cin>>a>>b>>n;
//         while (sum<=n)
//         {
//             if(a<b)
//             {
//                 a=a+b;
//                 sum=a;
//                 c++;
//             }
//             else
//             {
//                 b=b+a;
//                 sum=b;
//                 c++;
//             }
//             if (sum>n)
//             {
//                 break;
//             }
//         }
//         cout<<c<<endl;
//     }

// }

/*// 1343A
#include <iostream>
// #include <cmath> 
#define ll long long
using namespace std;

// ll power(ll a, unsigned b)
// {
//     return b ? a*power(a, b-1) : 1;
// }

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll n; scanf("%lld",&n);
        ll x(1);
        // cin>>n;
        for (ll k=1; k>0; k++)
        {
            x = 2*x +1;
            //accumulate 1..2..4..2^k-1
            if(n%x) {continue;}
            //if we can't divide completely, next step
            //if we got integer division, answer
            //cout<<n/x<<"\n";
            printf("%lld\n",n/x);
            break;            
        }
    }
}
*/


/* 1433A
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll t; scanf("%lld",&t);
    while (t--)
    {
        ll x; scanf("%lld", &x);
        ll m,g;
        // g counts how many digits were not pressed after someone answered (22 --> didn't press 222 and 2222)
        g = (( 1*(ll)((x%10-x%10)!=0) + 2*(ll)((x%10-x/10%10)!=0) + 3*(ll)((x%10-x/100%10)!=0) + 4*(ll)((x%10-x/1000%10)!=0) ) );
        m = 10*(x%10) - g
        printf("%lld\n",m);
    }
}
*/

/* 630A
#include <iostream>
#define ll long long 
using namespace std;

int main()
{
    ll n; scanf("%lld",&n);
    cout<<25;
}
*/