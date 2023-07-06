#include <iostream>
#include <cmath>
using namespace std;
bool isProst(int x)
{
    if (x==1) return false;
    for (int i = 2;i<x;i++)
    {
        if (x%i==0) return false;
    }
    return true;
}
int kNum(int x)
{
    int k =0;
    while(x)
    {
        k++;
        x/=10;
    }
    return k;
}
void sumCK(int &pr, int *a, int n)
{
    for (int i =0; i <n; i++)
    {
        int x = a[i];
        int s = 0, k =0;
        while(x)
        {
            s+=x%10;
            k++;
            x/=10;
        }
        if (s%2==0 && k%2!=0) pr*=a[i];
    }
}
void sumchet(int &s,int *a, int n, int x, int y)
{
    for (int i =0;i<n;i++)
    {
        int elem = a[i], pr = 1, sum = 0;
        for (int j =1; j<=elem;j++)
        {
            if (j%2==0 && elem%j==0)
            {
                pr*=j; sum+=j;
            } 
        }
        if (sum>x && pr>y) s+=a[i]; 
    }
}
void masOtr(int *a, int*b, int n, int &s)
{
    int k1= 0,k2=0;
    for (int i = 0;i<n;i++)
    {
        if (a[i]<0) k1++;
        if (b[i]<0) k2++;
    }
    for(int i = 0;i<n;i++)
    {
        if (k1>k2) 
        {
            a[i] = abs(a[i]);
            s+=a[i];
        }
        else 
        {
            b[i] = abs(b[i]);
            s+=a[i];
        }
    }

}
void prosto(int *a,int *b,int *c,int n)
{
    int isa, isb;
    for (int i =0; i<n;i++)
    {
        if (isProst(a[i])) isa++;
        if (isProst(b[i])) isb--;
    }
    if (isa>0 && isb>0)
    {
        for (int i =0;i<n;i++) c[i] = a[i] + b[i];
    }
}
void ciph(int x,int *b,int &k)
{
    int i = 0;

    while(i<k)
    {
        while(x)
        {
            b[i] = x%10;
            x/=10;
        }
        i++;
    }
}

void obr(int *a, int &n)
{
    bool d = true;
    for (int i =0; i<n;i++)
    {
        if (isProst(a[i]))
        {
            d = false; 
            break;
        }
    }
    if(d)
    {
        for (int i =0;i<n;i++)
        {
            int g = 0,ac = a[i];
            int h = (int)pow(10,kNum(ac))/10;
            if (a[i]>0)
            {
                while(ac)
                {
                    g+=(ac%10)*h;
                    h/=10;
                    ac/=10;
                }
                a[i] = g;

            }
        }
    }
    for (int i = 0;i<n;i++) cout<<a[i]<<" ";
}

bool isAllGrZero(int *a, int n)
{
    for (int i = 0; i<n;i++) if (a[i]<=9) return false;
    return true;
}
void konDv(int *a, int n)
{
    if (isAllGrZero(a,n))
    {
        for (int i = 0;i<n;i++)
        {
            int g = a[i]%10,h = a[i]/10%10;
            a[i]-=h*10+g;
            a[i]+= g*10 + h;
        }
    }
    for (int  i =0; i<n;i++) cout<<a[i]<<" ";
}
int zamen(int x)
{
    int k = kNum(x);
    int g = 0;
    int h = 1;
    while(x)
    {
        int e = x%10;
        if (e==9) e = 0;
        g+=e*h;
        h*=10;
        x/=10;
    }
    return g;

}
void matrzam(int **a, int n, int m)
{
    for(int i = 0; i <n;i++)
    {
        for(int j = 0; j<m;j++)
        {
            if (a[i][j]>0)
            {
                a[i][j] = zamen(a[i][j]);
                if (a[i][j]%2==0) a[i][j] =1;
                else a[i][j] +=1 ;
            }
            cout<<*(*(a+i) +j)<<" ";
        }
        cout<<"\n";
    }
}
bool sov(int x)
{
    int s = 0;
    for(int i =1;i<x;i++) (x%i==0) ? s+=i : s+=0;
    if (x==1) s-=1;
    return s == x; 
}
bool isFive(int x)
{
    while(x)
    {
        if (x%10==5) return true;
        x/=10;
    }
    return false;
}
void zamSOv(int **a, int n, int x)
{
    for( int i = 0; i < n; i++ )
    {
        for (int j = 0; j < n; j++ )
        {
            if ( (sov(a[i][j]) && i>j) ||( !isFive(a[i][j]) && j> n - 1 - i))
            {
                a[i][j] = x;
            }
            cout<<*(*(a+i)+j)<<" ";
        }
        cout<<" ";
    }
}
int main()
{   
    //LAB 1 - 6
    /*int n; cin>>n; 
    int *a = new int[n];
    for (int i =0;i<n;i++) cin>>a[i];*/
    
    //lab1
    // int pr = 1;
    // sumCK(pr,a,n);
    // cout<<pr<<endl;

    //lab2
    // cout<<"Input x and y"<<endl;
    // int s = 0, x,y; cin>>x>>y;
    // sumchet(s,a,n,x,y);
    // cout<<s<<endl;
    // 

    //lab3
    // int *b = new int[n];
    // for (int i =0;i<n;i++) cin>>b[i];
    // int s =0;
    // masOtr(a,b,n,s);
    // cout<<s<<endl;
    // delete[] a;

    //lab4
    // int *b = new int[n];
    // for (int i =0;i<n;i++) cin>>b[i];
    // int *c = new int [n];
    // prosto(a,b,c,n);
    // for (int i =0;i<n;i++) cout<<c[i]<<" ";
    // delete[] a;
    // delete[] b;
    // delete[] c;

    //lab5
    //obr(a,n);

    //lab6
    //konDv(a,n);

    //lab7
    // int n,m;cin>>n>>m;
    // int **a = new int *[n];
    // for (int i = 0; i < n; i++ ) a[i] = new int[m];
    // for (int i = 0; i<n;i++) for (int j = 0;j<m;j++) cin>>a[i][j];

    // matrzam(a,n,m);

    // for (int i =0;i<n;i++) delete[] a[i];
    // delete[] a;

    //lab8
    int n;cin>>n;
    int **a = new int *[n];
    for (int i = 0; i < n; i++ ) a[i] = new int[n];
    for (int i = 0; i<n;i++) for (int j = 0;j<n;j++) cin>>a[i][j];
    int x; cin>>x;
    zamSOv(a,n,x);

    for (int i =0;i<n;i++) delete[] a[i];
    delete[] a;

    //delete[] a;
}