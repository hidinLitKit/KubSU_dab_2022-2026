// #include <iostream>
// int main()
// {
//     int t,m,k=0; scanf("%d%d",&t,&m);
//     while (t>0)
//     {
//         k++;
//         t--;
//         if (k%m==0) t++;
//     }
//     printf("%d\n",k);
// }


/*//228A
#include <iostream>
#include <set>
#define ll long long
using namespace std;
int main()
{
    ll s1,s2,s3,s4; cin>>s1>>s2>>s3>>s4;
    set <ll> a = {s1,s2,s3,s4};
    cout<<4 - a.size()<<endl;
} */

//1488A
/*
#include <iostream>
#include <cmath>
using namespace std;
int xy(int x, int y, int k)
{
    if (k>y) return 0;
    if (k==y) return 1;
    if (k<y) return xy(x,y,k+1) + xy(x,y,k+x*pow(10,p));
}
int main()
{
    int t; cin>>t;
    long long x,y;
    while(t--)
    {
        cin>>x>>y;
        cout<<xy(x,y,0)<<endl;
    }
}
*/






























