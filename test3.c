// #include<stdio.h>
// int main()
// {
//     int a,b,c;
//     printf("输入三角形的三边长：\n");
//     scanf("%d %d %d",&a,&b,&c);
//     if(a+b>c && a+c>b && b+c>a)
//     {
//         if(a*a + b*b < c*c || b*b +c*c < a*a || a*a + c*c < b*b)
//         {
//             printf("是钝角三角形。\n");
//             if(a==b || b==c || a==c)
//             {
//                 printf("是等腰三角形。\n");
//             }
//             else
//             {
//                 printf("非等腰三角形。\n");
//             }
//         }
//         else if(a*a+b*b==c*c || b*b+c*c==a*a || a*a+c*c==b*b)
//         {
//             printf("是直角三角形。\n");
//             if(a==b || b==c || a==c)
//             {
//                 printf("是等腰三角形。\n");
//             }
//             else
//             {
//                 printf("非等腰三角形。\n");
//             }
//         }
//         else
//         {
//             if(a==b && b==c)
//             {
//                 printf("是等边三角形。\n");
//             }
//             else if(a==b || b==c || a==c)
//             {
//                 printf("是等腰三角形。\n");
//             }
//             else
//             {
//                 printf("是普通的锐角三角形，既非等腰和等边三角形。\n");
//             }
//         }
//     }
//     else
//     {
//         printf("不是三角形。\n");
//     }
//     return 0;
// }