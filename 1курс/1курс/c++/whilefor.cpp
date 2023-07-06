//task 1
// #include <iostream>
// int main()
// {
//     int a,count; scanf("%d",&a);
//     while (a)
//     {
//         count++; 
//         a/=10;
//     }
//     printf("%d\n",count);
// }

//task 2
// #include <iostream>
// int main()
// {
//     int a, count; scanf("%d",&a);
//     while (a)
//     {
//         count+=a%10;
//         a/=10;
//     }
//     if (count%2)
//     {
//         printf("The numbSum is odd");
//     }
//     else
//     {
//         printf("The numbSum is not odd");
//     }
// }


//task 3
// #include <iostream>
// int main()
// {
//     int a,count; scanf("%d",&a);
//     while (a)
//     {
//        count = a%10%2 ? count : count + 1; 
//        a/=10;
//     }
//     printf("%d\n",count);
// }


//task 4
// #include <iostream>
// int main()
// {
//     int a, multi = 1; scanf("%d",&a);
//     while (a)
//     {
//         multi = a%10%3 ? multi : multi*(a%10);
//         a/=10;
//     }
//     if (multi == 1) multi = 0;
//     printf("%d\n",multi);
// }


//task 5
// #include <iostream>
// int main()
// {
//     int a, minC = 10; scanf("%d",&a);
//     while (a)
//     {
//         if (a%10%2==0 && a%10<minC)
//         {
//             minC = a%10;
//         }
//         a/=10;
//     }
//     if (minC!=10) printf("%d\n",minC);
//     else printf("Net chetn\n");
// }


//task 6
// #include <iostream>
// int main()
// {
//     int a; scanf("%d",&a);
//     while(a)
//     {
//         if (a/10==0) printf("%d\n", (a%10));
//         a/=10;
//     }

        // while (a>9) a/=10;
        // a - first num
// }

// dz1
// #include <iostream>
// int main()
// {
//     int t; scanf("%d",&t);
//     int factr = 1;
//     while (t>0)
//     {
//         factr = factr*t;
//         t--;
//     }
//     printf("%d\n",factr);
// }


//dz2
// #include <iostream>
// int main()
// {
//     int a,count; scanf("%d", &a);
//     while (a)
//     {
//         count+= (1- (a%10%5));
//         a/=10;
//     }
//     printf("%d\n", count);
// }

//dz3
// #include <iostream>
// int main()
// {
//     int a,count; scanf("%d", &a);
//     while (a)
//     {
//         if (a%10==1) count++;
//         a/=10;
//     }
//     printf("%d\n", count);
// }


//dz4
// #include <iostream>
// int main()
// {
//     int a,lst; scanf("%d", &a);
//     lst = a%10;
//     while (a)
//     {
//         if (a/10==0 && lst == a%10) printf("Yes\n");
//         a/=10;
//     }
// }

//dz5
// #include <iostream>
// int main()
// {
//     int a,b; scanf("%d",&a);
//     b = a;
//     while (a)
//     {
//         if (a/10==0 && a%10==1) b +=5;
//         else if (a/10==0) b/=2;
//         a/=10;
//     }
//     printf("%d\n",b);
// }


//dz6

// #include <iostream>
// int main()
// {
//     int a,num5,num3; scanf("%d",&a);
//     while (a)
//     {
//         if (a%10==3) num3++;
//         if (a%10==5) num5++;
//         a/=10;
//     }
//     if (num5>2 && num3==0) printf("True\n");
//     else printf("False\n");
// }


//dz7
// #include <iostream>
// int main()
// {
//     int a,sum; scanf("%d",&a);
//     float count;
//     while (a)
//     {
//         sum+=a%10;
//         count++;
//         a/=10;
//     }
//     printf("%10.2f\n", float(sum/count));
// }

//dz8

// #include <iostream>
// int main()
// {
//     int a,sum; scanf("%d",&a);
//     float count;
//     while (a)
//     {   
//         if (a%2==1)
//         {
//             sum+=a%10;
//             count++;
//         }
//         a/=10;
//     }
//     printf("%.2f\n", float(sum/count));
// }