//lab1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,a[100],sum=0; cin>>n;
//     for (int i = 0; i<n;i++) cin>>a[i];
//     for (int i = 0; i<n; i++)
//     {
//         int dels = 0;
//         for (int j = 1; j<a[i];j++)
//         {
//             if (a[i]%j==0) dels+=j;
//         }
//         if (a[i] == dels) sum+=a[i];
//     }
//     cout<<"Sum= "<<sum<<endl;
// }

//lab2
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,a[100],sum=0,k=0; cin>>n;
//     float sr;
//     for (int i = 0; i<n;i++) cin>>a[i];
//     for (int i = 0; i<n; i++) sum+=a[i];
//     sr = float(sum)/float(n);
//     for (int i = 0;i<n;i++) if (a[i]>sr) k++;
//     cout<<"k = "<<k<<endl;
// }

//lab3
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,a[100],b[100]; cin>>n;
//     for (int i = 0; i<n;i++) cin>>a[i];
//     for (int i = 0; i<n; i++) b[i] = a[i]*a[i];
//     for (int i = 0;i<n;i++) cout<<b[i]<<"\t";
// }

//lab4
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,a[100],k=0; cin>>n;
//     for (int i = 0; i<n;i++) cin>>a[i];
//     for (int i = 0; i<n; i++)
//     {
//         int chs = 0,b=a[i];
//         while (b)
//         {
//             chs +=b%10;
//             b/=10;
//         }
//         if (chs%2==0) k++;
//     }
//     cout<<"k = "<<k<<endl;
// }

//lab5
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,a[100],k=0; cin>>n;
//     for (int i = 0; i<n;i++) cin>>a[i];
//     for (int i = 0; i<n; i++)
//     {
//         bool vs = false; int b = a[i];
//         while(b)
//         {
//             if (b%10==0)
//             {
//                 vs = true;
//                 break;
//             }
//             b/=10;
//         }
//         if (vs) k++;
//     }
//     cout<<"k = "<<k<<endl;
// }

//lab6
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,a[100],sum=0,pr=1; cin>>n;
//     bool sov = false;
//     for (int i = 0; i<n;i++) cin>>a[i];
//     for (int i = 0; i<n; i++)
//     {
//         int dels=0;
//         for (int j = 1; j<a[i];j++)
//         {
//             if (a[i]%j == 0) dels+=j;
//         }
//         if (a[i]==dels)
//         {
//             sov = true; break;
//         }
//     }
//     if (sov)
//     {
//         for (int i = 0; i<n;i++)
//         {
//             int dels = 0;
//             for ( int j = 2; j<a[i];j++)
//             {
//                 if (a[i]%j==0) dels+=j;
//             }
//             if (dels==0) sum+=a[i];
//         }
//         cout<<"sum = "<<sum<<endl;
//     }
//     else
//     {
//         for (int i = 0; i<n;i++)
//         {
//             int b = a[i]; bool four = false;
//             while(b)
//             {
//                 if (b%10==4)
//                 {
//                     four = true;
//                     break;
//                 }
//                 b/=10;
//             }
//             if (four) pr*=a[i];
//         }
//         cout<<"pr = "<<pr<<endl;
//     }
// }

//lab7
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,a[100]; cin>>n;
//     for (int i = 0; i<n;i++) cin>>a[i];
//     int mx = a[0];
//     for (int i = 0; i<n; i++) if (a[i]>mx) mx = a[i];
//     if (mx%2==0)
//     {
//         for (int i = 0; i<n;i++)
//         {
//             if (a[i]<0) a[i]=abs(a[i]);
//         }
//     }
//     else
//     {
//         for (int i = 0; i<n;i++)
//         {
//             if (a[i]>0) a[i]=mx;
//         }
//     }
//     for (int i=0; i<n;i++) cout<<a[i]<<"\t";
// }

//lab8
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,a[100],b[100]; cin>>n;
//     for (int i = 0; i<n;i++) cin>>a[i];
//     for (int i = 0; i<n; i++)
//     {
//         int c = a[i], sumc = 0;
//         while(c)
//         {
//             sumc+=c%10;
//             c/=10;
//         }
//         b[i] = sumc;
//     }
//     for (int i = 0;i<n;i++) cout<<b[i]<<"\t";
// }


//dz1
// #include <iostream>
// using namespace std;
// int numSum(int x)
// {
//     int numS = 0;
//     while(x)
//     {
//         numS+=x%10;
//         x/=10;
//     }
//     return numS;
// }
// int main()
// {
//     int n,a[100]; cin>>n;
//     for (int i = 0;i<n;i++) cin>>a[i];
//     int elems = 0 ,elem;
//     elems = numSum(a[0]);
//     elem = a[0];
//     for (int i =1; i<n; i++)
//     {
//         int c=numSum(a[i]);
//         if (numSum(a[i])>elems) 
//         {
//             elem = a[i];
//             elems=c;
//         }
//     }
//     cout<<"Max sum num = "<<elem<<endl;
// }

//dz2
// #include <iostream>
// using namespace std;
// int stepen(int x, int i)
// {
//     if (i==0) return 1;
//     else
//     {
//         int answ = 1;
//         while(i)
//         {
//             answ*=x;
//             i--;
//         }
//         return answ;
//     }
// }
// int main()
// {
//     int n, a[100], b[100]; cin>>n;
//     for (int i=0; i<n;i++)
//     {
//         cin>>a[i];
//         b[i] = stepen(a[i],i);
//     }
//     for (int i=0; i<n;i++) cout<<b[i]<<" ";
// }


//dz3
// #include <iostream>
// using namespace std;
// int chS(int x)
// {
//     int b = x,sum = 0;
//     while (b)
//     {
//         sum+=b%10;
//         b/=10;
//     }
//     return (sum%2==0) ? true : false;
// }
// int main()
// {
//     int n,k = 0,a[100]; cin>>n;
//     for (int i = 0; i<n;i++) cin>>a[i];
//     for (int i = 0; i<n; i++ ) if (chS(a[i])) k++;
//     cout<<k<<" ";
// }


//dz4
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,a[100]; cin>>n;
//     for (int i = 0;i<n;i++) cin>>a[i];
//     bool isUb = true;
//     for (int i = 1; i<n;i++) if (a[i]>a[i-1]) {isUb=false;break;}
//     if (isUb)
//     {
//         for (int i =0; i<n;i++) if (a[i]>0) a[i] = 0;
        
//     }
//     else
//     {
//         for (int i =0; i<n;i++) if (a[i]<0) a[i] *= -1;
//     }
//     for (int i=0; i<n;i++) cout<<a[i]<<" ";
// }


//dz5
// #include <iostream>
// using namespace std;
// int isProst(int x)
// {
//     int del=0;
//     for (int i=2;i<x;i++) if (x%i==0) del++;
//     return del;
// }
// int main()
// {
//     int n,a[100],kprost = 0; cin>>n;
//     for (int i = 0;i<n;i++) cin>>a[i];
//     for (int i = 0;i<n;i++)
//     {
//         if (isProst(a[i])==0) kprost++;
//         if (kprost >2) break;
//     }
//     if (kprost>2)
//     {
//         for (int i = 0;i<n;i++) if (a[i]%2==0) a[i]*=a[i];
//     }
//     else
//     {
//         for (int i = 0;i<n;i++) if(a[i]/100==0 && a[i]/10!=0) a[i]-=3;
//     }
//     for (int i = 0;i<n;i++) cout<<a[i]<<" ";
// }


//dz6
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,a[100];cin>>n;
//     for (int i = 0;i<n;i++) cin>>a[i];
//     int mx = a[0], mxK=0;
//     for (int i = 1;i<n;i++) if (a[i]>mx) mx = a[i];
//     for (int i = 0;i<n;i++) if (a[i] == mx) mxK++;
//     if(mxK>1)
//     {
//         int Sum3 = 0;
//         for (int i = 0;i<n;i++) if (a[i]%3==0) Sum3+=a[i];
//         cout<<"Sum3 = "<<Sum3<<" ";
//     }
//     else
//     {
//         int k = 0;
//         for (int i = 0;i<n;i++) if (a[i]%2==0) k++;
//         cout<<"k = "<<k<<" ";   
//     }
// }