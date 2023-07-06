// task 1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a,b,c; scanf("%d%d%d",&a,&b,&c);
//     int min;
//     if ( (a>b && b>c) || (b>a && a>c) )
//     {
//         min = c;
//     }
//     if ( (b>c && c>a) || (c>b && b>a) )
//     {
//         min = a;
//     }
//     if ( (a>c && c>b) || (c>a && a>b) )
//     {
//         min = b;

//     }
//     cout<<min<<"\n";
            
// }


//task 2
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a,b; scanf("%d%d",&a,&b);
//     if ( ( a/100 + a/10%10 + a%10) > (b/10%10 * b/10%10))
//     {
//         printf("First is larger\n");
//     }
//     else
//     {
//         printf("Second is larger\n");
//     }
// }


//dz 1
// #include <iostream>
// using namespace std;
// int main()
// {
//     float a,b,c; 
//     cin>>a>>b>>c;
//     float d;
//     d = b*b - 4*a*c;
//     if (d>=0)
//     {
//         cout<<"Yes\n";
//     }
//     else
//     {
//         cout<<"No\n";
//     }

// }



//dz2
// #include <iostream>
// using namespace std;
// int main()
// {
//     int x; cin>>x;
//     if (x<100) x+=50;
//     else if (x<200) x-=50;
//     else if (x<=500) x = x%10;
//     else x*=2;
//     printf("%d\n",x);
// }


//dz3
// #include <iostream>
// using namespace std;
// int main()
// {
//     int x; cin>>x;
//     cout<< ( (x/100%2==0)+ (x/10%10%2==0) + (x%10%2==0) )<<endl;
// }


// dz4
// #include <iostream>
// using namespace std;
// int main()
// {
//     int x; cin>>x;
//     int a = 0,b = 0,c = 0,d = 0;
//     a = (x/1000%3==0) ? x/1000 : 0;
//     b = (x/100%10%3==0) ? x/100%10 : 0;
//     c = (x/10%10%3==0) ? x/10%10 : 0;
//     d = (x%10%3==0) ? x%10 : 0;
//     cout<<a+b+c+d<<endl;
// }



// #include <iostream>
// using namespace std;

// int maX(int x1, int x2)
// {
//     if (x1>x2) return x1;
//     else return x2;
// }
// int miN(int x1, int x2)
// {
//     if (x1>x2) return x2;
//     else return x1;
// }
// int main()
// {
//     int a,b,c; cin>>a>>b>>c;
//     cout<< maX(a, (b*c)) + miN(c,(a-b))<<endl;
// }