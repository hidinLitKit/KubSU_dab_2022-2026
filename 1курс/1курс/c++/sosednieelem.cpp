// lab1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a,b; cin>>a>>b;
//     bool k = true;
//     while (b)
//     {
//         if (b<=a) k = false;
//         a=b;
//         cin>>b;
//     }
//     k ? cout<<"Vozr\n" : cout<<"ne vozr\n";
// }

//lab2
// #include <iostream>
// using namespace std;
// int main()
// {
//     setlocale("LC_ALL","rus");
//     int a,b; cin>>a>>b;
//     bool k = true;
//     while (b)
//     {
//         if (b<a) k = false;
//         a=b;
//         cin>>b;
//     }
//     k ? cout<<"Неубывающая\n" : cout<<"Фигня а не последовательность\n";
// }

//lab2
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a,b,summ=0; cin>>a>>b;
//     while (b)
//     {
//         if (a%10==4 && b%3==0) summ+=a;
//         a=b;
//         cin>>b;
//     }
//     cout<<"Summ= "<<summ<<endl;
// }


//lab4
// #include <iostream>
// using namespace std;
// int main()
// {
//     int x,a,b,k=0; cin>>x>>a>>b;
//     while (b)
//     {
//         if (a<=x && b<0) k++;
//         a=b;
//         cin>>b;
//     }
//     cout<<k<<endl;
// }

//dz1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a,b; cin>>a>>b;
//     bool k = true;
//     while (b)
//     {
//         if (b>=a) k = false;
//         a=b;
//         cin>>b;
//     }
//     k ? cout<<"ubiv\n" : cout<<"ne ubiv\n";
// }


//dz2
// #include <iostream>
// using namespace std;
// int main()
// {
//     int x,a,b,k=0; cin>>x>>a>>b;
//     while (b)
//     {
//         if (a%2==0 && b<0) k++;
//         a=b;
//         cin>>b;
//     }
//     cout<<k<<endl;
// }

//dz3
// #include <iostream>
// using namespace std;
// int main()
// {
//     setlocale("LC_ALL","rus");
//     int a,b; cin>>a>>b;
//     bool k = true;
//     while (b)
//     {
//         if (b>a) k = false;
//         a=b;
//         cin>>b;
//     }
//     k ? cout<<"Невозрастающая\n" : cout<<"Фигня а неы последовательность\n";
// }


//dz4
// #include <iostream>
// using namespace std;
// int main()
// {
//     int x,a,b,k=0; cin>>x>>a>>b;
//     while (b)
//     {
//         if (a>0 && b%2==1) k++;
//         a=b;
//         cin>>b;
//     }
//     cout<<k<<endl;
// }




//lab1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,a,b,k=0; cin>>n>>a;
//     for ( int i = 1; i<n;i++)
//     {
//         cin>>b;
//         if (a*b!=abs(a*b)) k++;
//         a=b;
//     }
//     cout<<k<<endl;
// }

//lab2
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,a,b,c,summ=0; cin>>n>>a>>b;
//     for ( int i = 2; i<n;i++)
//     {
//         cin>>c;
//         if (b>0 && c<0 && a<0) summ+=b;
//         a=b;
//         b=c
//     }
//     cout<<summ<<endl;
// }

//lab3
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,a,b,c, k= 0; cin>>n>>a>>b;
//     for ( int i = 2; i<n;i++)
//     {
//         cin>>c;
//         if (b>c && b>a) k++;
//         a=b;
//         b=c;
//     }
//     cout<<k<<endl;
// }

//dz1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,a,b; cin>>n>>a;
//     bool v = true;
//     for (int i = 1;i<n;i++)
//     {
//         cin>>b;
//         if (b>a) v = false;
//         a=b;
//     }
//     v ? cout<<"Unrising\n" : cout<<"Non unrising\n";
// }


//dz2
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,a,b,k=0; cin>>n>>a;
//     for ( int i = 1; i<n;i++)
//     {
//         cin>>b;
//         if (a%2==1 && b>0) k++;
//         a=b;
//     }
//     cout<<k<<endl;
// }


//dz3
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,a,b, x ,k=0; cin>>n>>x>>a;
//     for ( int i = 1; i<n;i++)
//     {
//         cin>>b;
//         if (a<=x && b<0) k++;
//         a=b;
//     }
//     cout<<k<<endl;
// }