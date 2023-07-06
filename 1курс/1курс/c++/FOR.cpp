//lab'1
// #include <iostream>
// int main()
// {
//     int t; scanf("%d",&t);
//     int count = 0;
//     for (int i = 1; i<t; i++)
//     {
//         if (t%i==0)
//         {
//             count+=i;
//         }
//     }
//     if (count == t)
//     {
//         printf("perfect number");
//     }
//     else
//     {
//         printf("imperfect number");
//     }
// }

//lab'2
// #include <iostream>
// int main()
// {

//     int x1,x2,count1 = 0 ,count2 = 0; scanf("%d%d",&x1,&x2);
//     for (int i = 1; i<x1;i++)
//     {
//         if (x1%i==0)
//         {
//             count1+=i;
//         }
//     }
//     for (int j = 1; j<x2;j++)
//     {
//         if (x2%j==0)
//         {
//             count2+=j;
//         }
//     }

//     if (count1==x2 && count2==x1)
//     {
//         printf("Amicable numbers\n");
//     }
//     else
//     {
//         printf("Not amicable numbers\n");
//     }    
// }

//lab'3
// #include <iostream>
// int main()
// {
//     int n, a,count; scanf("%i",&n);
//     float sr,sum;
//     for (int i = 0; i<n; i++)
//     {
//         scanf("%d",&a);
//         if (i%2==0)
//         {
//             sum+=a;
//             count++;
//         }
//     }
//     sr = sum/count;
//     printf("Sr arifm = %f\n",sr);
// }

//lab'4

// #include <iostream>
// int main()
// {
//     int n, a, sum; scanf("%i",&n);
//     for (int i = 0; i<n; i++)
//     {
//         scanf("%d",&a);
//         if (i%3==0 and a%2==0) sum+=a;
//     }
//     printf("summ = %d\n",sum);
// }



//dz1
// #include <iostream>
// int main()
// {
//     int n,a,sum; scanf("%d",&n);
//     for (int i = 0; i<n;i++)
//     {
//         scanf("%i",&a);
//         if (a<0) sum+=a;
//     }
//     printf("sum = %i\n",sum);
// }

//dz2
// #include <iostream>
// int main()
// {
//     int n,a,count; scanf("%d",&n);
//     for (int i = 0; i<n;i++)
//     {
//         scanf("%i",&a);
//         if (a>0 && a%10==6) count++;
//     }
//     printf("count = %i\n",count);
// }

//dz3
// #include <iostream>
// int main()
// {
//     int n,a,pr=1; scanf("%d",&n);
//     for (int i = 0; i<n;i++)
//     {
//         scanf("%i",&a);
//         if (a%2==0) pr*=a;
//     }
//     printf("pr = %i\n",pr);
// }

//dz4
// #include <iostream>
// int main()
// {
//     int n, a,count; scanf("%i",&n);
//     float sr,sum;
//     for (int i = 0; i<n; i++)
//     {
//         scanf("%d",&a);
//         if (a>0)
//         {
//             sum+=a;
//             count++;
//         }
//     }
//     sr = sum/count;
//     printf("Sr arifm = %f\n",sr);
// }

//dz5
// #include <iostream>
// int main()
// {
//     int n,a,sum; scanf("%d",&n);
//     for (int i = 0; i<n;i++)
//     {
//         scanf("%i",&a);
//         if (a%100==15) sum+=a;
//     }
//     printf("sum = %i\n",sum);
// }

//dz6
// #include <iostream>
// int main()
// {
//     int n,a,sum; scanf("%d",&n);
//     for (int i = 0; i<n;i++)
//     {
//         scanf("%i",&a);
//         if (a%10 > a/10%10) sum+=a;
//     }
//     printf("sum = %i\n",sum);
// }

//dz7
// #include <iostream>
// int main()
// {
//     int n,a,count; scanf("%d",&n);
//     for (int i = 0; i<n;i++)
//     {
//         scanf("%i",&a);
//         if ( ((a%10) * (a/10%10)) %2 == 0 && a>9) count++;
//     }
//     printf("count = %i\n",count);
// }

//dop
#include <iostream>
int main()
{
    int n,count; scanf("%i",&n);
    for (int i=1; i<n;i++)
    {
        int a,k=0; scanf("%d",&a);
        for (int j=2;j<a;j++)
        {
            if (a%j==0) 
            {
                k++;
                break;
            }
        }
        if (k==0) count++;
    }
    printf("count = %i\n", count);
}
