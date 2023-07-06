//#1
// #include <iostream>
// using namespace std;
// int main()
// {   
//     cout<<"Enter n: \n";
//     int n; cin>>n;
//     cout<<"Enter a row: \n";
//     int a,b,c,sum=0; cin>>a>>b;
//     for (int i = 2; i<n;i++)
//     {
//         cin>>c;
//         if (b<0 && abs(a)%2==0 && abs(c)%2==0) sum+=b;
//         a=b; b=c;
//     }
//     cout<<"Summ = " << sum<<endl;
// }


// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,thr =1,fac = 1; 
//     float sum=0;
//     cout<<"Enter n: "; 
//     cin>>n;
//     for (int i = 1; i<=n;i++)
//     {
//         thr = (3*i+1)*(3*i+1);
//         fac = fac * (2*i-1) * 2*i;
//         sum+= float(thr)/float(fac);
//     }
//     cout<<"Sum is equal: "<< sum <<"\n";
// }