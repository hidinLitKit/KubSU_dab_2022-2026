//  task 1
// #include <iostream>
// int main()
// {
//     int t; scanf("%d",&t);
//     int countOdd = 0;
//     while (t!=0)
//     {
//         countOdd = t%10%2!=0 ? countOdd + t%10 : countOdd;
//         t=t/10; 
//     }
//     printf("%d\n",countOdd);
// }


//  task 2
// #include <iostream>
// int main()
// {
//     int t; scanf("%d",&t);
//     bool isTwoThree = true;
//     while (t!=0)
//     {
//         if (t%10==3 || t%10==2)
//         {
//             isTwoThree = true;
//             break;
//         }
//         t/=10;
//     }
//     std::cout<<"Number contains 2 or 3: "<< (isTwoThree ? "Yes\n" : "No\n");
// }


//  task 3
// #include <iostream>
// int main()
// {
//     int t; scanf("%d",&t);
//     while (t!=0)
//     {
//         if (t/10!=0)
//         {
//             if (t/10%10!=t%10)
//             {
//                 printf("nums are different\n");
//                 break;
//             }

//         }
//         t/=10;
//     }
//     printf("All nums are the same\n");

// }


//  task 4
// #include <iostream>
// int main()
// {
//     int t,c, count;
//     // t is number, c is num we are counting 
//     scanf("%d%d", &t, &c);
//     while (t!=0)
//     {
//         if (t%10 == c )
//         {
//             count++;
//         }
//         t/=10;
//     }
//     printf("%d\n",count);
// }


// task 5
// #include <iostream>
// int main()
// {
//     int t; scanf("%d",&t);
//     while (t!=0)
//     {
//         if (t%10!=0)
//         {
//             printf("%d", (t%10) );   
//         }
//         t/=10;
//     }
//     printf(" \n");
// }








// task 1
// #include <iostream>
// int main()
// {
//     int t; scanf("%d",&t);
//     int factr = 1;
//     for (int i=1; i<=t; i++)
//     {
//         factr *=i;
//     }
//     printf("%d\n",factr);
// }



// task 2
// #include <iostream>
// int main()
// {
//     int t; scanf("%d",&t);
//     int multDel= 1;
//     for (int i=1; i<=t;i++)
//     {
//         if (t%i==0 && i%3==0)
//         {
//             multDel*=i;
//         }
//     }
//     printf("%d\n", multDel);
// }


// task 3
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


#include <iostream>
int main()
{

    int x1,x2,count1 = 0 ,count2 = 0; scanf("%d%d",&x1,&x2);
    for (int i = 1; i<x1;i++)
    {
        if (x1%i==0)
        {
            count1+=i;
        }
    }
    for (int j = 1; j<x2;j++)
    {
        if (x2%j==0)
        {
            count2+=j;
        }
    }

    if (count1==x2 && count2==x1)
    {
        printf("Amicable numbers\n");
    }
    else
    {
        printf("Not amicable numbers\n");
    }    
}