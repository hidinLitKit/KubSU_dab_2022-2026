//dz1
// #include <iostream>
// int main()
// {
//     int a,count; scanf("%d",&a);
//     while (a!=0)
//     {
//         if( a%2==0 || (a/10%10==1 && a%10==3 ))
//         {
//             count+=a*a;
//         }
//         scanf("%d",&a);
//     }
//     printf("%d\n",count);
// }

//dz2
// #include <iostream>
// int main()
// {
//     int a, count; scanf("%d",&a);
//     while (a!=0)
//     {
//         if (a>=-20 && a<=35) count++;
//         scanf("%d",&a); 
//     }
//     count>0 ? printf("%d\n",count) : printf("No numbers\n");
// }

//dz3
// #include <iostream>
// int main()
// {
//     int a, count; scanf("%d",&a);
//     while (a!=0)
//     {
//         if (a/10%10 == a%10) count++;
//         scanf("%d",&a);
//     }
//     count>0 ? printf("%d\n",count) : printf("No numbers\n");
// }

//dz5
// #include <iostream>
// int main()
// {
//     int a,max; scanf("%d",&a);
//     max = a;
//     while (a!=0)
//     {
//         if (a>max) max = a;
//         scanf("%d",&a);
//     }
//     printf("max = %d\n",max);
// }


//dz1
// #include <iostream>
// int main()
// {
//     int n,a, multip = 1; scanf("%d",&n);
//     for (int i = 1; i<=n; i++)
//     {
//         scanf("%d",&a);
//         if (a/10%10%2==0 && a>10) multip *=a;    
//     }
//     printf("multip = %d\n", multip);
// }


//dz2
// #include <iostream>
// int main()
// {
//     int n,a,count; scanf("%d",&n);
//     for(int i = 1; i<=n;i++)
//     {
//         scanf("%d",&a);
//         if (a>9 && a<100)
//         {
//             count+=i;
//         }
//     }
//     printf("%d",count);
// }


//dz3
#include <iostream>
int main()
{
    int n,a, count ; scanf("%d",&n);
    for (int i = 1; i<=n; i++)
    {
        scanf("%d",&a);
        if (a/10%10%2==0 && a>10 && i%3==0) count++;    
    }
    printf("count = %d\n", count);
}