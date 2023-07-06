// task 1
// #include <iostream>
// using namespace std;
// int main()
// {
//     cout<<"Please write down two 3-digit numbers \n";
//     int a,b;
//     cin>>a>>b;
//     if ( (a<1000 && a>99) & (b<1000 && b>99))
//     {
//         if ( (a/100 + (a/10)%10 + a%10) > (b/100 + (b/10)%10 + b%10))
//         {
//             a = (a/100)*100 + (a%10)*10 + (a/10)%10;
//             b = (b/100)*100 + (b%10)*10 + (b/10)%10;
//         }
//         cout<<a<<" "<<b<<endl;
//     }
//     else
//     {
//         cout<<"Incorrect data";
//     }
// }

//task 2
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cout<<"Please write down 4-digit number in a console "<<endl;
//     cin>>a;
//     if (a>999 && a<10000)
//     {
//         if ( (a/1000 == a%10) && ( (a/100)%10 == (a/10)%10 ) )
//         {
//             cout<<"It is palindrome"<<endl;
//         }
//         else
//         {
//             cout<<"It is not palindrome"<<endl;
//         }
//     }
//     else
//     {
//         cout<<"Incorrect data "<<endl;
//     }
// }

//task 3
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cout<<"Write down 5-digit number "<<endl;
//     cin>>a;
//     if ( a>9999 && a<100000)
//     {
//         if (a/10000 + (a/1000)%10> a%10 + (a/10)%10)
//         {
//             cout<<"First two digits are greater than last ones' "<<endl;
//         }
//         else
//         {
//             cout<<"Last two digits are greater than first ones' "<<endl;
//         }

//     }
//     else
//     {
//         cout<<"Incorrect data"<<endl;
//     }
// }

//task 4
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a,b;
//     cout<<"Write down 2 numbers"<<endl;
//     cin>>a>>b;
//     if (a<0 || b<0)
//     {
//         a = a*3;
//         b = b*3;
//     }
//     else if (a%5==0 & b%5==0)
//     {
//         a = a*a;
//         b = b*b;
//     }
//     cout<<a<<" "<<b<<endl;
// }


//task 5
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a,b;
//     cout<<"Write down two numbers"<<endl;
//     cin>>a>>b;
//     if ( (a/10)%10 > a%10 || (b/10)%10 > b%10 )
//     {
//         a  = a%10<8  ? a+2 : a;
//         b  = b%10<8 ? b+2 : b;
//     }
//     cout<<a<<" "<<b<<endl;
// }


//task 6
// #include <iostream>
// using namespace std;
// int main()
// {
//     float a,b,c,x,f;
//     cout<< "Enter in order: a b c x"<< endl;
//     cin>>a>>b>>c>>x;
//     if (c<0 && x!=0)
//     {
//         f = -a*x-c;
//     }
//     else if (c>0 && x==0)
//     {
//         f = (x-a)/(-c);
//     }
//     else
//     {
//         f = (b*x)/(c-a);
//     }
//     cout<< " F = " << f<<endl;
// }