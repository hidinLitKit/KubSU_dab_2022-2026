//lab1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, a[10],k=0;
//     cout<<"Input n \n";
//     cin>>n;
//     for (int i=0; i<n;i++) { cin>>a[i];}
//     for (int i = 0; i <n;i++)
//     {
//         if (a[i]>0) k++;
//     }
//     cout<<"K = "<<k<<endl;
// }

//lab2
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, a[10],s=0;
//     cout<<"Input n \n";
//     cin>>n;
//     for (int i=0; i<n;i++) { cin>>a[i];}
//     for (int i = 0; i <n;i++)
//     {
//         if (a[i]%2==0) s+=a[i];
//     }
//     cout<<"Summ = "<<s<<endl;
// }

//lab3
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, a[10],k=0,s=0;
//     cout<<"Input n \n";
//     cin>>n;
//     for (int i=0; i<n;i++) { cin>>a[i];}
//     for (int i = 0; i <n;i++)
//     {
//         if (a[i]>0)
//         {
//             k++;
//             s+=a[i];
//         } 
//     }
//     cout<<"Sr arifm = "<<float(s)/float(k)<<endl;
// }

//lab4
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, a[10],pr=1;
//     cout<<"Input n \n";
//     cin>>n;
//     for (int i=0; i<n;i++) { cin>>a[i];}
//     for (int i = 0; i <n;i++)
//     {
//         if (a[i]%2==0 && i%2==1) pr*=a[i];
//     }
//     cout<<"Proizv = "<<pr<<endl;
// }


//dz1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, a[10],min;
//     cout<<"Input n \n";
//     cin>>n;
//     for (int i=0; i<n;i++) { cin>>a[i];}
//     min = a[0];
//     for (int i = 0; i <n;i++)
//     {
//         if (a[i]<min) min = a[i];
//     }
//     cout<<"Min = "<<min<<endl;
// }


//dz2
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, a[10],pr=1;
//     cout<<"Input n \n";
//     cin>>n;
//     for (int i=0; i<n;i++) { cin>>a[i];}
//     for (int i = 0; i <n;i++)
//     {
//         if (a[i]%3==0) pr*=a[i];
//     }
//     cout<<"Proizv = "<<pr<<endl;
// }

//dz3
#include <iostream>
using namespace std;
int main()
{
    int n, a[10];
    cout<<"Input n \n";
    cin>>n;
    for (int i=0; i<n;i++) cin>>a[i];
    for (int i = 0; i <n;i++) if (a[i]%2==0) a[i]*=a[i];
    for (int i=0; i<n;i++) cout<<a[i]<<endl;
}
