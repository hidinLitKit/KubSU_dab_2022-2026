//lab`1
// #include <iostream>
// int main()
// {
//     int a,count = 1; scanf("%d",&a);
//     while (a!=0)
//     {
//         if (a%2==0) count*=a;
//         scanf("%d",&a);
//     }
//     printf("Mult. = %d \n", count);
// }

//lab`2
// #include <iostream>
// int main()
// {
//     int a,k = 0; scanf("%d",&a);
//     double sum = 0;
//     while (a!=0)
//     {
//         if(a>0) 
//         {
//             sum+=a;
//             k++;
//         }
//         scanf("%d",&a);
//     }
//     if (n!=0) printf("SrArifm = %f\n", sum/k);
//     else printf("No numbers\n")
//     
// }

//lab'3
// #include <iostream>
// int main()
// {
//     int a,sum = 0; scanf("%d",&a);
//     while (a!=0)
//     {
//         if(a%10==3) sum+=a;
//         scanf("%d",&a);
//     }
//     printf("Sum = %d\n", sum);
// }

//lab``4
// #include <iostream>
// int main()
// {
//     int a; scanf("%d",&a);
//     int min = a;
//     while (a!=0)
//     {
//         if(a<min) min = a;
//         scanf("%d",&a);
//     }
//     printf("min = %d\n", min);
// }

//dz1
// #include <iostream>
// int main()
// {
//     int a,sum=0; scanf("%d",&a);
//     int k = 1;
//     while (a!=0)
//     {
//         if (a%5==0 && k%2==1) sum+=a;
//         scanf("%d",&a);
//         k++;
//     }
//     printf("Summ = %d\n",sum);
// }

//dz2
// #include <iostream>
// int main()
// {
//     int a; scanf("%d",&a);
//     int k = 0;
//     while (a!=0)
//     {
//         if (a<1000 && a>99) k++;
//         scanf("%d",&a);
//     }
//     printf("k = %d\n",k);
// }


//dz3
// #include <iostream>
// int main()
// {
//     int a; scanf("%d",&a);
//     int max = 2 ;
//     while (a!=0)
//     {
//         if (a%3==0 && max==2) max = a;
//         else if (a%3==0 && a>max) max = a;
//         scanf("%d",&a);
//     }
//     max == 2 ? printf("No nums") :printf("max = %d\n",max);
// }
