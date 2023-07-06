//dz1
// #include <iostream>
// int main()
// {
//     int a,b,k=1; scanf("%d%d",&a,&b);
//     while (b)
//     {
//         if(a*b<0)
//         {
//             a = b;
//             scanf("%d",&b);
//             continue;
//         }
//         k=0;
//         break;
//     }
//     k ? printf("Yes\n") : printf("No\n");
// }


//dz2
// #include <iostream>
// int main()
// {
//     int a,b,k=1; scanf("%d%d",&a,&b);
//     while (b)
//     {
//         if(a%2!=0 && b%10==3 && b/10%10==1)
//         {
//             k*=b;

//         }
//         a = b;
//         scanf("%d",&b);
//     }
//     printf("%d\n",k);
// }

//dz3
// #include <iostream>
// int main()
// {
//     int a,b,k; scanf("%d%d",&a,&b);
//     while (b)
//     {
//         if(a%12!=0 && b<0)
//         {
//             k++;

//         }
//         a = b;
//         scanf("%d",&b);
//     }
//     printf("%d\n",k);
// }


//dz4
// #include <iostream>
// int main()
// {
//     int a,b,k; scanf("%d%d",&a,&b);
//     while (b)
//     {
//         if(b%10!=3 && b%10!=2)
//         {
//             k+=b;
//         }
//         a = b;
//         scanf("%d",&b);
//     }
//     printf("%d\n",k);
// }

//dz5
// #include <iostream>
// int main()
// {
//     int a,b,count = 0; scanf("%d",&a); scanf("%d",&b);
//     while (b)
//     {
//         if (a*3==b) count++;
//         a=b;
//         scanf("%d",&b);
//     }
//     printf("%d\n",count);
// }